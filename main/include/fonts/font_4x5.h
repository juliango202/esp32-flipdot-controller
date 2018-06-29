// Ported from https://github.com/tompreston/4x5-Font/blob/master/4x5-font.js

char font_4x5[128][8] = {
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0000 (nul)
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0001
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0002
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0003
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0004
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0005
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0006
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0007
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0008
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0009
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000A
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000B
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000C
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000D
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000E
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+000F
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0010
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0011
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0012
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0013
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0014
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0015
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0016
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0017
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0018
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+0019
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001A
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001B
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001C
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001D
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001E
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // U+001F
    { 0x0, 0x0, 0x0, 0x0, 0x0 }, // (space)
    { 0x4, 0x4, 0x4, 0x0, 0x4 }, // !
    { 0xa, 0xa, 0x0, 0x0, 0x0 }, // "
    { 0x6, 0xf, 0x6, 0xf, 0x6 }, // #
    { 0x7, 0xa, 0x6, 0x5, 0xe }, // $
    { 0x7, 0xe, 0x4, 0x7, 0xe }, // %
    { 0x2, 0x5, 0x6, 0xa, 0x5 }, // &
    { 0x2, 0x2, 0x0, 0x0, 0x0 }, // backslash 
    { 0x4, 0x8, 0x8, 0x8, 0x4 }, // (
    { 0x4, 0x2, 0x2, 0x2, 0x4 }, // )
    { 0x0, 0x6, 0xf, 0x6, 0x0 }, // *
    { 0x0, 0x2, 0x7, 0x2, 0x0 }, // +
    { 0x0, 0x0, 0x0, 0x2, 0x4 }, // ,
    { 0x0, 0x0, 0x0, 0xf, 0x0 }, // -
    { 0x0, 0x0, 0x0, 0x0, 0x4 }, // .
    { 0x1, 0x1, 0x2, 0x4, 0x8 }, // /
    { 0x6, 0xb, 0xf, 0xd, 0x6 }, // 0
    { 0x2, 0x6, 0x2, 0x2, 0x2 }, // 1
    { 0xe, 0x1, 0x6, 0x8, 0xf }, // 2
    { 0xe, 0x1, 0x6, 0x1, 0xe }, // 3
    { 0x2, 0x6, 0xa, 0xf, 0x2 }, // 4
    { 0xf, 0x8, 0xe, 0x1, 0xe }, // 5
    { 0x6, 0x8, 0xe, 0x9, 0x6 }, // 6
    { 0xf, 0x1, 0x2, 0x4, 0x8 }, // 7
    { 0x6, 0x9, 0x6, 0x9, 0x6 }, // 8
    { 0x6, 0x9, 0xf, 0x1, 0x6 }, // 9
    { 0x0, 0x4, 0x0, 0x4, 0x0 }, // :
    { 0x0, 0x4, 0x0, 0x4, 0x8 }, // ;
    { 0x2, 0x4, 0x8, 0x4, 0x2 }, // <
    { 0x0, 0xf, 0x0, 0xf, 0x0 }, // =
    { 0x4, 0x2, 0x1, 0x2, 0x4 }, // >
    { 0x6, 0x9, 0x2, 0x0, 0x2 }, // ?
    { 0x6, 0xd, 0xb, 0x8, 0x6 }, // @
    { 0x4, 0xa, 0xe, 0xa, 0xa }, // A
    { 0xe, 0x9, 0xe, 0x9, 0xe }, // B
    { 0x6, 0x9, 0x8, 0x9, 0x6 }, // C
    { 0xe, 0x9, 0x9, 0x9, 0xe }, // D
    { 0xf, 0x8, 0xe, 0x8, 0xf }, // E
    { 0xf, 0x8, 0xe, 0x8, 0x8 }, // F
    { 0x6, 0x8, 0xb, 0x9, 0x6 }, // G
    { 0x9, 0x9, 0xf, 0x9, 0x9 }, // H
    { 0xe, 0x4, 0x4, 0x4, 0xe }, // I
    { 0x1, 0x1, 0x1, 0x9, 0x6 }, // J
    { 0x9, 0xa, 0xc, 0xa, 0x9 }, // K
    { 0x8, 0x8, 0x8, 0x8, 0xf }, // L
    { 0x9, 0xf, 0xf, 0x9, 0x9 }, // M
    { 0x9, 0xd, 0xf, 0xb, 0x9 }, // N
    { 0x6, 0x9, 0x9, 0x9, 0x6 }, // O
    { 0xe, 0x9, 0xe, 0x8, 0x8 }, // P
    { 0x6, 0x9, 0x9, 0xb, 0x7 }, // Q
    { 0xe, 0x9, 0xe, 0xa, 0x9 }, // R
    { 0x7, 0x8, 0x6, 0x1, 0xe }, // S
    { 0xe, 0x4, 0x4, 0x4, 0x4 }, // T
    { 0x9, 0x9, 0x9, 0x9, 0x6 }, // U
    { 0x9, 0x9, 0x9, 0x6, 0x6 }, // V
    { 0x9, 0x9, 0xf, 0xf, 0x9 }, // W
    { 0x9, 0x9, 0x6, 0x9, 0x9 }, // X
    { 0x9, 0x5, 0x2, 0x2, 0x2 }, // Y
    { 0xf, 0x2, 0x4, 0x8, 0xf }, // Z
    { 0xe, 0x8, 0x8, 0x8, 0xe }, // [
    { 0x8, 0x8, 0x4, 0x2, 0x1 }, // backslash 
    { 0x7, 0x1, 0x1, 0x1, 0x7 }, // ]
    { 0x4, 0xa, 0x0, 0x0, 0x0 }, // ^
    { 0x0, 0x0, 0x0, 0x0, 0xf }, // _
    { 0x4, 0x2, 0x0, 0x0, 0x0 }, // `
    { 0x0, 0x5, 0xb, 0xb, 0x5 }, // a
    { 0x8, 0x8, 0xe, 0x9, 0xe }, // b
    { 0x0, 0x7, 0x8, 0x8, 0x7 }, // c
    { 0x1, 0x1, 0x7, 0x9, 0x7 }, // d
    { 0x0, 0x6, 0xf, 0x8, 0x7 }, // e
    { 0x3, 0x4, 0xe, 0x4, 0x4 }, // f
    { 0x7, 0x9, 0x7, 0x1, 0x7 }, // g
    { 0x8, 0x8, 0xe, 0x9, 0x9 }, // h
    { 0x0, 0x2, 0x0, 0x2, 0x2 }, // i
    { 0x1, 0x0, 0x1, 0x1, 0x6 }, // j
    { 0x8, 0xa, 0xc, 0xa, 0x9 }, // k
    { 0xc, 0x4, 0x4, 0x4, 0xe }, // l
    { 0x0, 0x9, 0xf, 0xf, 0x9 }, // m
    { 0x0, 0xe, 0x9, 0x9, 0x9 }, // n
    { 0x0, 0x6, 0x9, 0x9, 0x6 }, // o
    { 0x0, 0xe, 0x9, 0xe, 0x8 }, // p
    { 0x0, 0x6, 0x9, 0x7, 0x1 }, // q
    { 0x0, 0xb, 0xc, 0x8, 0x8 }, // r
    { 0x0, 0x7, 0x4, 0x2, 0xe }, // s
    { 0x4, 0xe, 0x4, 0x4, 0x3 }, // t
    { 0x0, 0x9, 0x9, 0x9, 0x6 }, // u
    { 0x0, 0x9, 0x9, 0x6, 0x6 }, // v
    { 0x0, 0x9, 0xf, 0xf, 0x6 }, // w
    { 0x0, 0x9, 0x6, 0x6, 0x9 }, // x
    { 0x0, 0x9, 0x7, 0x1, 0x6 }, // y
    { 0x0, 0xf, 0x2, 0x4, 0xf }, // z
    { 0x6, 0x4, 0xc, 0x4, 0x6 }, // {
    { 0x4, 0x4, 0x4, 0x4, 0x4 }, // |
    { 0xc, 0x4, 0x6, 0x4, 0xc }, // }
    { 0x0, 0x0, 0x5, 0xa, 0x0 }, // ~
};