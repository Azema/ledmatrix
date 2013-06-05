#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdint.h>
#include <wiringPi.h>
#include "bit_array.h"

// Vitesse de communication du SPI avec les matrices
#define SPI_SPEED    2000000

// ID des commandes pour les matrices
#define CMD_ID_COMMAND      0x4
#define CMD_ID_WR           0x5
// Différents paramètres d'initialisation des matrices
#define SYS_DIS      0x00
#define SYS_EN       0x01
#define LED_OFF      0x02
#define LED_ON       0x03
#define PWM_CONTROL  0xA0
#define BLINK_OFF    0x08
#define BLINK_ON     0x09
#define SLAVE_MODE   0x10
#define MASTER_MODE  0x18
#define COMMON_8NMOS 0x20
#define COMMON_8PMOS 0x28

// Délai d'attente entre l'écriture sur les matrices et l'activation des chipSelect
#define DELAY        550

#define CS0 3 // GPIO 22
#define CS1 4 // GPIO 23
#define CS2 5 // GPIO 24
#define CS3 6 // GPIO 24 A activer en continu avec le 74HC138 (pin E3)

/**
 * Modifie le poids faible et le poids fort
 *
 * @param void   *p   La référence de l'élément à modifier
 * @param size_t size la taille de l'élément
 *
 * @return void
 */
void *reverseEndian(void *p, size_t size)
{
    char *head = (char *)p;
    char *tail = head + size -1;

    for(; tail > head; --tail, ++head) {
        char temp = *head;
        *head = *tail;
        *tail = temp;
    }
    return p;
}

/**
 * Select a matrix
 *
 * @param unsigned char id  : id of the matrix
 *
 * @return true
 */
int selectChip(unsigned char id)
{
#ifdef DEBUG
    //printf("Chip select\n");
#endif
    switch(id) {
        case 0:
            digitalWrite(CS0, 0);
            digitalWrite(CS1, 0);
            digitalWrite(CS2, 0);
            break;
        case 1:
            digitalWrite(CS0, 0);
            digitalWrite(CS1, 0);
            digitalWrite(CS2, 1);
            break;
        case 2:
            digitalWrite(CS0, 0);
            digitalWrite(CS1, 1);
            digitalWrite(CS2, 0);
            break;
        case 3:
            digitalWrite(CS0, 0);
            digitalWrite(CS1, 1);
            digitalWrite(CS2, 1);
            break;
        default:
            digitalWrite(CS0, 1);
            digitalWrite(CS1, 1);
            digitalWrite(CS2, 1);
    }
    return 1;
}

/**
 * Ecrit les données sur une matrice
 *
 * @param int     chip   Le numéro de matrice
 * @param uint8_t screen Pointeur sur les données
 * @param uint8_t size   La taille à écrire
 *
 * @return void
 */
void writeScreen(int chip, uint8_t *screen, uint8_t size, uint8_t width, uint8_t height)
{
#ifdef DEBUG
    printf("writeScreen(%d)\n", chip);
#endif
    uint8_t *output = malloc(size+2);
    uint16_t data;
    uint8_t write;

    // Command ID WRITE
    *output = 0b10100000;
    *(output+1) = 0;

    // Copy the data
    bitarray_copy(screen, 0, width*height, (output+1), 2);
    // Send data to SPI
    selectChip(chip);
    wiringPiSPIDataRW(0, (unsigned char*)output, size+1);
    usleep(DELAY);
    selectChip(0x0f);
    // Free memory
    free(output);
    output = NULL;

    // Command ID WRITE
    data = CMD_ID_WR;
    data <<= 7;
    data |= 0x3f; //last address on screen
    data <<= 4;
    write = (0x0f & *(screen+31));
    data |= write;
    data <<= 2;
    reverseEndian(&data, sizeof(data));
    // Send data to SPI
    selectChip(chip);
    wiringPiSPIDataRW(0, (unsigned char*)&data, 2);
    usleep(DELAY);
    selectChip(0x0f);
}

/**
 * Ecrire toutes les données sur les matrices
 *
 * @return void
 */
void writeMatrix(uint8_t *viewport, uint8_t nbMatrix, uint8_t width, uint8_t height)
{
#ifdef DEBUG
    printf("writeMatrix\n");
#endif
    uint8_t i;
    uint8_t size = width * height / 8;
    for (i = 0; i < nbMatrix; i++) {
        writeScreen(i, viewport + (width * i), size, width, height);
    }
}

/**
 * Envoie les commandes d'initialisation à une matrice
 *
 * @param uint8_t chip Le numéro de matrice
 * @param uint8_t cmd  La commande
 *
 * @return void
 */
void sendCommand(uint8_t chip, uint8_t cmd)
{
#ifdef DEBUG
    printf("sendCommand: ");
    print_word(cmd);
#endif
    uint16_t data=0;

    data = CMD_ID_COMMAND;

    data <<= 8;
    data |= cmd;
    data <<= 5;

    reverseEndian(&data, sizeof(data));

    selectChip(chip);
    wiringPiSPIDataRW(0, (unsigned char*)&data, 2);
    usleep(DELAY);
    selectChip(0x0f);
}

/**
 * Permet d'activer ou non le blink sur une matrice
 *
 * @param uint8_t chip   Le numéro de matrice
 * @param uint8_t blinky Flag d'activation (0 ou 1)
 *
 * @return void
 */
void blink(uint8_t chip, uint8_t blinky)
{
#ifdef DEBUG
    printf("blink\n");
#endif
    if (blinky)
        sendCommand(chip, BLINK_ON);
    else
        sendCommand(chip, BLINK_OFF);
}

/**
 * Permet de régler la luminosité d'une matrice
 *
 * @param uint8_t chip Le numéro de matrice
 * @param uint8_t pwm  Le niveau de luminosité (0 - 15)
 *
 * @return void
 */
void setBrightness(uint8_t chip, uint8_t pwm)
{
#ifdef DEBUG
    printf("set_brightness\n");
#endif
    if (pwm > 15) pwm = 15;
    sendCommand(chip, PWM_CONTROL | pwm);
}

/**
 * Initialisation des matrices
 *
 * @param uint8_t nbMatrix Nombre de matrices à initialiser
 *
 * @return uint8_t
 */
uint8_t initDisplay(uint8_t nbMatrix)
{
#ifdef DEBUG
    printf("init display");
#endif
    uint8_t i;

    // Initialisation du SPI avec la lib WiringPi
    if (wiringPiSPISetup(0, SPI_SPEED) < 0) {
        printf ("SPI Setup Failed: %s\n", strerror(errno));
        return 1;
    }

    // Initialise le GPIO
    if (wiringPiSetup() == -1)
        return 1;

    // Initialisation du mode output pour les pins du chipSelect
    pinMode(CS0, OUTPUT);
    pinMode(CS1, OUTPUT);
    pinMode(CS2, OUTPUT);
    pinMode(CS3, OUTPUT);
    // Activation du pin le chipSelect
    digitalWrite(CS3, 1);

    // Initialisation des matrices
    for (i=0; i < nbMatrix; i++) {
        // Set master mode
        sendCommand(i, MASTER_MODE);
        // Turn on system oscillator
        sendCommand(i, SYS_EN);
        // Turn on LED duty cycle generator
        sendCommand(i, LED_ON);
        // Set brightness at full
        setBrightness(i, 15);
        // Turn off blinking function
        blink(i, 0);
    }

    return 0;
}

/* vim: set expandtab ai nu ts=4 sw=4:
*/
