#ifndef __PERSO_H
#define __PERSO_H

#include "font.h"

// http://www.dafont.com/ai-pointe.font

char perso_mapping[] =
	"!\"#$\%&'()*+'-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[ ]^_`abcdefghijklmnopqrstuvwxyz{|}~";

FONT_INFO perso_info[] = {
  {2, 0},	// !
  {5, 2},	// "
  {5, 7},	// #
  {5, 12},	// $
  {5, 17},	// %
  {5, 22},	// &
  {3, 27},	// '
  {4, 30},	// (
  {4, 34},	// )
  {4, 38},	// *
  {5, 42},	// +
  {3, 47},	// '
  {5, 50},	// -
  {3, 55},	// .
  {5, 58},	// /
  {5, 63},	// 0
  {3, 68},	// 1
  {5, 71},	// 2
  {5, 76},	// 3
  {5, 81},	// 4
  {5, 86},	// 5
  {5, 91},	// 6
  {5, 96},	// 7
  {5, 101},	// 8
  {5, 106},	// 9
  {2, 111},	// :
  {3, 113},	// ;
  {5, 116},	// <
  {5, 121},	// =
  {5, 126},	// >
  {5, 131},	// ?
  {5, 136},	// @
  {5, 141},	// A
  {5, 146},	// B
  {5, 151},	// C
  {5, 156},	// D
  {5, 161},	// E
  {5, 166},	// F
  {5, 171},	// G
  {5, 176},	// H
  {3, 181},	// I
  {5, 184},	// J
  {5, 189},	// K
  {5, 194},	// L
  {5, 199},	// M
  {5, 204},	// N
  {5, 209},	// O
  {5, 214},	// P
  {5, 219},	// Q
  {5, 224},	// R
  {5, 229},	// S
  {5, 234},	// T
  {5, 239},	// U
  {5, 244},	// V
  {5, 249},	// W
  {5, 254},	// X
  {5, 259},	// Y
  {5, 264},	// Z
  {3, 269},	// [
  {1, 272}, //
  {3, 273},	// ]
  {5, 276},	// ^
  {5, 281},	// _
  {3, 286},	// `
  {5, 289},	// a
  {5, 294},	// b
  {5, 299},	// c
  {5, 304},	// d
  {5, 309},	// e
  {5, 314},	// f
  {5, 319},	// g
  {5, 324},	// h
  {3, 329},	// i
  {4, 332},	// j
  {5, 336},	// k
  {3, 341},	// l
  {5, 344},	// m
  {4, 349},	// n
  {5, 353},	// o
  {5, 358},	// p
  {5, 363},	// q
  {5, 368},	// r
  {5, 373},	// s
  {5, 378},	// t
  {5, 383},	// u
  {5, 388},	// v
  {5, 393},	// w
  {5, 398},	// x
  {5, 403},	// y
  {5, 408},	// z
  {4, 413},	// {
  {1, 417},	// |
  {8, 418},	// }
  {8, 426}	// ~
};

unsigned char perso_font[] = {
  0b00111101,	// !
  0b01000000,
  0b00001000,	// "
  0b00010000,
  0b01101000,
  0b00010000,
  0b01100000,
  0b00100010,	// #
  0b01111111,
  0b00100010,
  0b01111111,
  0b00100010,
  0b00110010,	// $
  0b01111111,
  0b01001001,
  0b01111111,
  0b00100110,
  0b01100011,	// %
  0b01100100,
  0b00001000,
  0b00010011,
  0b01100011,
  0b00100110,	// &
  0b01001001,
  0b01010001,
  0b00100010,
  0b00000101,
  0b00001000,	// '
  0b00010000,
  0b01100000,
  0b00011100,	// (
  0b00100010,
  0b01000001,
  0b01000001,
  0b01000001,	// )
  0b01000001,
  0b00100010,
  0b00011100,
  0b01001000,	// *
  0b00110000,
  0b00110000,
  0b01001000,
  0b00001000,	// +
  0b00001000,
  0b00111110,
  0b00001000,
  0b00001000,
  0b00001001,	// ,
  0b00001010,
  0b00000100,
  0b00001000,	// -
  0b00001000,
  0b00001000,
  0b00001000,
  0b00001000,
  0b00000111,	// .
  0b00000111,
  0b00000111,
  0b00000011,	// /
  0b00000100,
  0b00001000,
  0b00010000,
  0b01100000,
  0b00111110,	// 0
  0b01000101,
  0b01001001,
  0b01010001,
  0b00111110,
  0b00100001,	// 1
  0b01111111,
  0b00000001,
  0b00110001,	// 2
  0b01000011,
  0b01000101,
  0b01001001,
  0b00110001,
  0b00000110,	// 3
  0b01000001,
  0b01010001,
  0b01010001,
  0b00101110,
  0b00001000,	// 4
  0b00011000,
  0b00101000,
  0b01111111,
  0b00001000,
  0b00010010,	// 5
  0b00110001,
  0b01010001,
  0b01010001,
  0b01001110,
  0b00011110,	// 6
  0b00101001,
  0b01010001,
  0b00010001,
  0b00001110,
  0b01000001,	// 7
  0b01000010,
  0b01000100,
  0b01001000,
  0b00110000,
  0b00101110,	// 8
  0b01010001,
  0b01010001,
  0b01010001,
  0b00101110,
  0b00111000,	// 9
  0b01000101,
  0b01000110,
  0b01000100,
  0b00111000,
  0b01100011,	// :
  0b01100011,
  0b01101001,	// ;
  0b01101010,
  0b00000100,
  0b00001000,	// <
  0b00010100,
  0b00100010,
  0b01000001,
  0b01000001,
  0b00010100,	// =
  0b00010100,
  0b00010100,
  0b00010100,
  0b00010100,
  0b01000001,	// >
  0b01000001,
  0b00100010,
  0b00010100,
  0b00001000,
  0b00100000,	// ?
  0b01000000,
  0b01000011,
  0b01000100,
  0b00111000,
  0b00011110,	// @
  0b00111101,
  0b01100011,
  0b01011101,
  0b00111001,
  0b00011111,	// A
  0b00100100,
  0b01000100,
  0b01000100,
  0b00111111,
  0b01111111,	// B
  0b01001001,
  0b01001001,
  0b00111001,
  0b00000110,
  0b00111110,	// C
  0b01000001,
  0b01000001,
  0b01000001,
  0b00100010,
  0b01111111,	// D
  0b01000001,
  0b01000001,
  0b01000001,
  0b00111110,
  0b00111110,	// E
  0b01001001,
  0b01001001,
  0b01001001,
  0b01001001,
  0b00111111,	// F
  0b01001000,
  0b01001000,
  0b01001000,
  0b01000000,
  0b00111110,	// G
  0b01000001,
  0b01000001,
  0b01001001,
  0b00100110,
  0b01111111,	// H
  0b00001000,
  0b00001000,
  0b00001000,
  0b01111111,
  0b01000001,	// I
  0b01111111,
  0b00000001,
  0b00000110,	// J
  0b00000001,
  0b00000001,
  0b00000001,
  0b01111110,
  0b01111111,	// K
  0b00001000,
  0b00010100,
  0b00100010,
  0b01000001,
  0b01111110,	// L
  0b00000001,
  0b00000001,
  0b00000001,
  0b00000001,
  0b01111111,	// M
  0b00100000,
  0b00011000,
  0b00100000,
  0b01111111,
  0b01111111,	// N
  0b00100000,
  0b00010000,
  0b00001000,
  0b01111111,
  0b00111110,	// O
  0b01000001,
  0b01000001,
  0b01000001,
  0b00111110,
  0b00111111,	// P
  0b01001000,
  0b01000100,
  0b01000100,
  0b00111000,
  0b00111110,	// Q
  0b01000001,
  0b01000001,
  0b01000010,
  0b00111101,
  0b00111111,	// R
  0b01001000,
  0b01000100,
  0b01000110,
  0b00111001,
  0b00110010,	// S
  0b01001001,
  0b01001001,
  0b01001001,
  0b00100110,
  0b01000000,	// T
  0b01000000,
  0b01111111,
  0b01000001,
  0b01000000,
  0b01111110,	// U
  0b00000001,
  0b00000001,
  0b00000001,
  0b01111110,
  0b01111100,	// V
  0b00000010,
  0b00000001,
  0b00000010,
  0b01111100,
  0b01111110,	// W
  0b00000001,
  0b01111110,
  0b00000001,
  0b01111110,
  0b01100011,	// X
  0b00010100,
  0b00001000,
  0b00010100,
  0b01100011,
  0b01110000,	// Y
  0b00001000,
  0b00001111,
  0b00001000,
  0b01110000,
  0b01000010,	// Z
  0b01000101,
  0b01001001,
  0b01010001,
  0b00100001,
  0b01111111,	// [
  0b01000001,
  0b01000001,
  0b00000000, //
  0b01000001,	// ]
  0b01000001,
  0b01111111,
  0b00010000,	// ^
  0b00100000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00000001,	// _
  0b00000001,
  0b00000001,
  0b00000001,
  0b00000001,
  0b01100000,	// `
  0b00010000,
  0b00001000,
  0b00010110, // a
  0b00101001,
  0b00101001,
  0b00101010,
  0b00011111,
  0b01111110,	// b
  0b00001001,
  0b00010001,
  0b00010001,
  0b00001110,
  0b00011110,	// c
  0b00100001,
  0b00100001,
  0b00100001,
  0b00010010,
  0b00001110,	// d
  0b00010001,
  0b00010001,
  0b00001001,
  0b01111110,
  0b00011110,	// e
  0b00100101,
  0b00100101,
  0b00100101,
  0b00011001,
  0b00000001,	// f
  0b00111111,
  0b01001001,
  0b01001000,
  0b00100000,
  0b00111010,	// g
  0b01000101,
  0b01000101,
  0b01001001,
  0b00111110,
  0b01111111,	// h
  0b00001000,
  0b00010000,
  0b00010000,
  0b00001111,
  0b00010001,	// i
  0b01011111,
  0b00000001,
  0b00000010,	// j
  0b00000001,
  0b00000001,
  0b01011110,
  0b01111111,	// k
  0b00001000,
  0b00001100,
  0b00010010,
  0b00010001,
  0b01111110,	// l
  0b00000001,
  0b00000001,
  0b00111111,	// m
  0b00100000,
  0b00011111,
  0b00100000,
  0b00011111,
  0b00111111,	// n
  0b00100000,
  0b00100000,
  0b00011111,
  0b00011110,	// o
  0b00100001,
  0b00100001,
  0b00100001,
  0b00011110,
  0b00011111,	// p
  0b00100100,
  0b00100100,
  0b00100100,
  0b00011000,
  0b00011100,	// q
  0b00100010,
  0b00100010,
  0b00100100,
  0b00011111,
  0b00111111,	// r
  0b00010000,
  0b00100000,
  0b00100000,
  0b00010000,
  0b00010010,	// s
  0b00101001,
  0b00101001,
  0b00101001,
  0b00000110,
  0b00100000,	// t
  0b01111110,
  0b00100001,
  0b00100001,
  0b00000010,
  0b00111110,	// u
  0b00000001,
  0b00000001,
  0b00000010,
  0b00111111,
  0b00111100,	// v
  0b00000010,
  0b00000001,
  0b00000010,
  0b00111100,
  0b00111110,	// w
  0b00000001,
  0b00111110,
  0b00000001,
  0b00111110,
  0b00010001,	// x
  0b00001010,
  0b00000100,
  0b00001010,
  0b00010001,
  0b00111010,	// y
  0b00000101,
  0b00000101,
  0b00001001,
  0b00111110,
  0b00010001,	// z
  0b00010011,
  0b00010101,
  0b00011001,
  0b00010001,
  0b00001000,	// {
  0b00111110,
  0b01000001,
  0b01000001,
  0b01111111,	// |
  0b00111001, // }
  0b00001001,
  0b11101111,
  0b00111100,
  0b00111100,
  0b11101111,
  0b00001001,
  0b00111001,
  0b00110000, // ~
  0b01001000,
  0b01000100,
  0b00100010,
  0b00100010,
  0b01000100,
  0b01001000,
  0b00110000
};

#endif
