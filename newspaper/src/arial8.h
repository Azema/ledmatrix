#ifndef __ARIAL8_H
#define __ARIAL8_H
#include "../config.h"

char arial8_mapping[] =
	" !\"#$\%&'()*+'-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

unsigned char arial8_font[] = {
    // @0 ' ' (1 pixel wide)
    0b00000000,

    // @0 '!' (1 pixels wide)
    0b11111101,

    // @8 '"' (4 pixels wide)
    0b11100000,
    0b00000000,
    0b00000000,
    0b11100000,

    // @16 '#' (9 pixels wide)
    0b00100100,
    0b00100111,
    0b00111100,
    0b11100100,
    0b00100100,
    0b00100111,
    0b00111100,
    0b11100100,
    0b00100100,

    // @32 '$' (7 pixels wide)
    0b00110100,
    0b01001010,
    0b01001010,
    0b11111111,
    0b01001010,
    0b01001010,
    0b00100100,

    // @40 '%' (12 pixels wide)
    0b01100000,
    0b10010000,
    0b10010000,
    0b10010001,
    0b01100010,
    0b00001100,
    0b00110000,
    0b01000110,
    0b10001001,
    0b00001001,
    0b00001001,
    0b00000110,

    // @56 '&' (9 pixels wide)
    0b00000100,
    0b01001010,
    0b10110001,
    0b10010001,
    0b10101001,
    0b01000110,
    0b00000000,
    0b00001010,
    0b00000001,

    // @72 ''' (1 pixels wide)
    0b11100000,

    // @80 '(' (3 pixels wide)
    0b00011000,
    0b01100110,
    0b10000001,

    // @88 ')' (3 pixels wide)
    0b10000001,
    0b01100110,
    0b00011000,

    // @96 '*' (5 pixels wide)
    0b00100000,
    0b00101100,
    0b01110000,
    0b00101100,
    0b00100000,

    // @104 '+' (7 pixels wide)
    0b00001000,
    0b00001000,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00001000,

    // @112 ',' (3 pixels wide)
    0b00000010,
    0b00000100,
    0b00001000,

    // @120 '-' (4 pixels wide)
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // @128 '.' (1 pixels wide)
    0b00000010,

    // @136 '/' (4 pixels wide)
    0b00000011,
    0b00001100,
    0b00110000,
    0b11000000,

    // @144 '0' (7 pixels wide)
    0b00111100,
    0b01000010,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01000010,
    0b00111100,

    // @152 '1' (4 pixels wide)
    0b00010000,
    0b00100000,
    0b01000000,
    0b11111111,

    // @160 '2' (6 pixels wide)
    0b01000001,
    0b10000011,
    0b10000101,
    0b10001001,
    0b01010001,
    0b00100001,

    // @168 '3' (7 pixels wide)
    0b00000110,
    0b01000010,
    0b10010001,
    0b10010001,
    0b10110001,
    0b01101010,
    0b00000100,

    // @176 '4' (8 pixels wide)
    0b00000100,
    0b00001100,
    0b00010100,
    0b00100100,
    0b01000100,
    0b10000100,
    0b11111111,
    0b00000100,

    // @184 '5' (7 pixels wide)
    0b11110100,
    0b10010010,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10001010,
    0b00000100,

    // @192 '6' (7 pixels wide)
    0b00111100,
    0b01000010,
    0b10010001,
    0b10010001,
    0b10010001,
    0b01010010,
    0b00001100,

    // @200 '7' (6 pixels wide)
    0b10000000,
    0b10000000,
    0b10000011,
    0b10001100,
    0b10010000,
    0b11100000,

    // @208 '8' (7 pixels wide)
    0b00000100,
    0b01101010,
    0b10010001,
    0b10010001,
    0b10010001,
    0b01101010,
    0b00000100,

    // @216 '9' (7 pixels wide)
    0b00100000,
    0b01010010,
    0b10001001,
    0b10001001,
    0b10001001,
    0b01010010,
    0b00111100,

    // @224 ':' (1 pixels wide)
    0b00010010,

    // @232 ';' (3 pixels wide)
    0b00000010,
    0b00000100,
    0b00101000,

    // @240 '<' (7 pixels wide)
    0b00001000,
    0b00010100,
    0b00010100,
    0b00100010,
    0b00100010,
    0b01000001,
    0b01000001,

    // @248 '=' (7 pixels wide)
    0b00100100,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00100100,

    // @256 '>' (7 pixels wide)
    0b01000001,
    0b01000001,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00010100,
    0b00001000,

    // @264 '?' (7 pixels wide)
    0b00100000,
    0b01000000,
    0b10000000,
    0b10001101,
    0b10000000,
    0b01010000,
    0b00100000,

    // @272 '@' (15 pixels wide)
    0b00011000,
    0b00100100,
    0b00000000,
    0b01010010,
    0b00101001,
    0b10100101,
    0b10000101,
    0b10100101,
    0b10001001,
    0b10101101,
    0b10010101,
    0b00000101,
    0b01001000,
    0b00000010,
    0b00110000,

    // @288 'A' (9 pixels wide)
    0b00000011,
    0b00001100,
    0b00111000,
    0b01001000,
    0b10001000,
    0b01001000,
    0b00111000,
    0b00001100,
    0b00000011,

    // @304 'B' (9 pixels wide)
    0b11111111,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10101010,
    0b01000100,

    // @320 'C' (10 pixels wide)
    0b00011000,
    0b00100100,
    0b01000010,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01000010,
    0b00100100,

    // @336 'D' (10 pixels wide)
    0b11111111,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01000010,
    0b00100100,
    0b00011000,

    // @352 'E' (9 pixels wide)
    0b11111111,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10000001,

    // @368 'F' (8 pixels wide)
    0b11111111,
    0b10010000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b10000000,

    // @376 'G' (10 pixels wide)
    0b00011100,
    0b00100010,
    0b01000001,
    0b10000001,
    0b10000001,
    0b10001001,
    0b10001001,
    0b01001010,
    0b00101000,
    0b00001100,

    // @392 'H' (9 pixels wide)
    0b11111111,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b11111111,

    // @408 'I' (1 pixels wide)
    0b10000001,
    0b10000001,
    0b11111111,
    0b10000001,
    0b10000001,

    // @416 'J' (7 pixels wide)
    0b00000110,
    0b00000001,
    0b10000001,
    0b10000001,
    0b11111110,
    0b10000000,
    0b10000000,

    // @424 'K' (9 pixels wide)
    0b11111111,
    0b00000000,
    0b00001000,
    0b00010000,
    0b00011000,
    0b00100000,
    0b00000100,
    0b01000010,
    0b10000001,

    // @440 'L' (7 pixels wide)
    0b11111111,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,

    // @448 'M' (11 pixels wide)
    0b11111111,
    0b01100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b01100000,
    0b11111111,

    // @464 'N' (9 pixels wide)
    0b11111111,
    0b01000000,
    0b00100000,
    0b00010000,
    0b00000000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b11111111,

    // @480 'O' (10 pixels wide)
    0b00011000,
    0b00100100,
    0b01000010,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01000010,
    0b00100100,
    0b00011000,

    // @496 'P' (9 pixels wide)
    0b11111111,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b01010000,
    0b00100000,

    // @512 'Q' (10 pixels wide)
    0b00011000,
    0b00100100,
    0b01000010,
    0b10000001,
    0b10000001,
    0b10000101,
    0b10000101,
    0b01000010,
    0b00100111,
    0b00011101,

    // @528 'R' (9 pixels wide)
    0b11111111,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001100,
    0b10001010,
    0b01010001,
    0b00100000,

    // @544 'S' (9 pixels wide)
    0b00000100,
    0b01100010,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10001001,
    0b10001001,
    0b01001010,
    0b00000100,

    // @560 'T' (7 pixels wide)
    0b10000000,
    0b10000000,
    0b10000000,
    0b11111111,
    0b10000000,
    0b10000000,
    0b10000000,

    // @576 'U' (9 pixels wide)
    0b11111100,
    0b00000010,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000010,
    0b11111100,

    // @592 'V' (9 pixels wide)
    0b10000000,
    0b01100000,
    0b00011000,
    0b00000100,
    0b00000011,
    0b00000100,
    0b00011000,
    0b01100000,
    0b10000000,

    // @608 'W' (15 pixels wide)
    0b11000000,
    0b00110000,
    0b00001100,
    0b00000011,
    0b00000100,
    0b00011000,
    0b01100000,
    0b10000000,
    0b01100000,
    0b00011000,
    0b00000100,
    0b00000011,
    0b00001100,
    0b00110000,
    0b11000000,

    // @624 'X' (11 pixels wide)
    0b00000001,
    0b10000010,
    0b01000000,
    0b00000100,
    0b00101000,
    0b00010000,
    0b00101000,
    0b00000100,
    0b01000000,
    0b10000010,
    0b00000001,

    // @640 'Y' (9 pixels wide)
    0b10000000,
    0b01000000,
    0b00100000,
    0b00010000,
    0b00001111,
    0b00010000,
    0b00100000,
    0b01000000,
    0b10000000,

    // @656 'Z' (9 pixels wide)
    0b00000001,
    0b10000001,
    0b10000011,
    0b10000101,
    0b10001001,
    0b10010001,
    0b10100001,
    0b11000001,
    0b10000001,

    // @672 '[' (3 pixels wide)
    0b11111111,
    0b10000001,
    0b10000001,

    // @680 '\' (4 pixels wide)
    0b11000000,
    0b00110000,
    0b00001100,
    0b00000011,

    // @688 ']' (3 pixels wide)
    0b10000001,
    0b10000001,
    0b11111111,

    // @696 '^' (7 pixels wide)
    0b00010000,
    0b00100000,
    0b01000000,
    0b10000000,
    0b01000000,
    0b00100000,
    0b00010000,

    // @704 '_' (9 pixels wide)
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,

    // @720 '`' (2 pixels wide)
    0b01000000,
    0b00100000,

    // @728 'a' (7 pixels wide)
    0b00000010,
    0b00010101,
    0b00100101,
    0b00100101,
    0b00101001,
    0b00101010,
    0b00011111,

    // @736 'b' (6 pixels wide)
    0b00111111,
    0b00000110,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000110,

    // @744 'c' (6 pixels wide)
    0b00001100,
    0b00010010,
    0b00100001,
    0b00100001,
    0b00100001,
    0b00010010,

    // @752 'd' (6 pixels wide)
    0b00000110,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000110,
    0b00111111,

    // @760 'e' (7 pixels wide)
    0b00001100,
    0b00011010,
    0b00101001,
    0b00101001,
    0b00101001,
    0b00011010,
    0b00001000,

    // @768 'f' (4 pixels wide)
    0b00001000,
    0b00011111,
    0b00101000,
    0b00100000,

    // @776 'g' (7 pixels wide)
    0b00001010,
    0b00010001,
    0b00100101,
    0b00100101,
    0b00100101,
    0b00010010,
    0b00111100,

    // @784 'h' (6 pixels wide)
    0b00111111,
    0b00000100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000111,

    // @792 'i' (1 pixels wide)
    0b00101111,

    // @800 'j' (3 pixels wide)
    0b00000001,
    0b00000001,
    0b00101110,

    // @808 'k' (5 pixels wide)
    0b00111111,
    0b00000100,
    0b00001100,
    0b00010010,
    0b00000001,

    // @816 'l' (2 pixels wide)
    0b00111110,
    0b00000001,

    // @824 'm' (11 pixels wide)
    0b00111111,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00011111,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00011111,

    // @840 'n' (6 pixels wide)
    0b00111111,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00011111,

    // @848 'o' (7 pixels wide)
    0b00001100,
    0b00010010,
    0b00100001,
    0b00100001,
    0b00100001,
    0b00010010,
    0b00001100,

    // @856 'p' (6 pixels wide)
    0b00111111,
    0b00011000,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00011000,

    // @864 'q' (6 pixels wide)
    0b00011000,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00011000,
    0b00111111,

    // @872 'r' (4 pixels wide)
    0b00111111,
    0b00010000,
    0b00100000,
    0b00100000,

    // @880 's' (6 pixels wide)
    0b00011010,
    0b00100101,
    0b00100101,
    0b00100101,
    0b00100101,
    0b00010010,

    // @888 't' (4 pixels wide)
    0b00010000,
    0b00111111,
    0b00010001,
    0b00000001,

    // @896 'u' (6 pixels wide)
    0b00111110,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000010,
    0b00111111,

    // @904 'v' (7 pixels wide)
    0b00110000,
    0b00001100,
    0b00000010,
    0b00000001,
    0b00000010,
    0b00001100,
    0b00110000,

    // @912 'w' (11 pixels wide)
    0b00110000,
    0b00001100,
    0b00000011,
    0b00000100,
    0b00001000,
    0b00110000,
    0b00001000,
    0b00000100,
    0b00000011,
    0b00001100,
    0b00110000,

    // @928 'x' (7 pixels wide)
    0b00100001,
    0b00010010,
    0b00001000,
    0b00000100,
    0b00001000,
    0b00010010,
    0b00100001,

    // @936 'y' (7 pixels wide)
    0b00100000,
    0b00010001,
    0b00001101,
    0b00000010,
    0b00001100,
    0b00010000,
    0b00100000,

    // @944 'z' (7 pixels wide)
    0b00100001,
    0b00100001,
    0b00100011,
    0b00100101,
    0b00101001,
    0b00110001,
    0b00100001,

    // @952 '{' (5 pixels wide)
    0b00001000,
    0b00001000,
    0b01110110,
    0b10000001,
    0b10000001,

    // @960 '|' (1 pixels wide)
    0b11111111,

    // @968 '}' (5 pixels wide)
    0b10000001,
    0b10000001,
    0b01110110,
    0b00001000,
    0b00001000,

    // @976 '~' (8 pixels wide)
    0b00001000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00010000,
};

unsigned int arial8_info[] = {
    1,// 
    1,// !
    4,// "
    9,// #
    7,// $
    12,// %
    9,// &
    1,// '
    3,// (
    3,// )
    5,// *
    7,// +
    3,// ,
    4,// -
    1,// .
    4,// /
    7,// 0
    4,// 1
    6,// 2
    7,// 3
    8,// 4
    7,// 5
    7,// 6
    6,// 7
    7,// 8
    7,// 9
    1,// :
    3,// ;
    7,// <
    7,// =
    7,// >
    7,// ?
    15,// @
    9,// A
    9,// B
    10,// C
    10,// D
    9,// E
    9,// F
    10,// G
    9,// H
    5,// I
    7,// J
    9,// K
    7,// L
    11,// M
    9,// N
    10,// O
    9,// P
    10,// Q
    9,// R
    9,// S
    7,// T
    9,// U
    9,// V
    15,// W
    11,// X
    9,// Y
    9,// Z
    3,// [
    4,// 
    3,// ]
    7,// ^
    9,// _
    2,// `
    7,// a
    6,// b
    6,// c
    6,// d
    7,// e
    4,// f
    7,// g
    6,// h
    1,// i
    3,// j
    5,// k
    2,// l
    11,// m
    6,// n
    7,// o
    6,// p
    6,// q
    4,// r
    6,// s
    4,// t
    6,// u
    7,// v
    11,// w
    7,// x
    7,// y
    7,// z
    5,// {
    1,// |
    5,// }
    8 // ~
};

#endif

// vim:set ai expandtab nu ts=4 sw=4:
