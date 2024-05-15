/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font D:/AMEC MOBILITY/new ui firmware 07_03_24_done/assets/grandsport.ttf -o D:/AMEC MOBILITY/new ui firmware 07_03_24_done/assets\ui_font_Font12.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT12
#define UI_FONT_FONT12 1
#endif

#if UI_FONT_FONT12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xc0,

    /* U+0023 "#" */
    0x18, 0xc7, 0xff, 0xc6, 0x31, 0xff, 0xf1, 0x8c,
    0x0,

    /* U+0024 "$" */
    0xd, 0x83, 0xff, 0xf3, 0x60, 0xff, 0xe0, 0xd9,
    0xff, 0xf8, 0x36, 0x0,

    /* U+0025 "%" */
    0xfc, 0x61, 0x99, 0x83, 0xff, 0xf8, 0x33, 0x30,
    0xc7, 0xe0,

    /* U+0026 "&" */
    0xff, 0xc6, 0x0, 0x3f, 0xff, 0x80, 0x6f, 0xfe,
    0x0,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xf8,

    /* U+0029 ")" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0xf8,

    /* U+002A "*" */
    0x6c,

    /* U+002B "+" */
    0x10, 0x10, 0xff, 0x10, 0x10,

    /* U+002C "," */
    0xf0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x3, 0x3, 0x3, 0x7, 0x6, 0x0,

    /* U+0030 "0" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0031 "1" */
    0xf3, 0x33, 0x30,

    /* U+0032 "2" */
    0xff, 0xf0, 0x3, 0xff, 0xfc, 0x0, 0xff, 0xf0,

    /* U+0033 "3" */
    0xff, 0xf0, 0x1, 0xc7, 0xfc, 0x0, 0x7f, 0xff,
    0x0,

    /* U+0034 "4" */
    0x0, 0xf0, 0x3d, 0x9e, 0xd, 0xff, 0xf0, 0x3,
    0x0,

    /* U+0035 "5" */
    0xff, 0xfc, 0x0, 0xff, 0xf0, 0x3, 0xff, 0xf0,

    /* U+0036 "6" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x3, 0xff, 0xf0,

    /* U+0037 "7" */
    0xff, 0xf0, 0x1e, 0x7, 0x80, 0xe0, 0x38, 0x0,

    /* U+0038 "8" */
    0xff, 0xfc, 0x3, 0xff, 0xfc, 0x3, 0xff, 0xf0,

    /* U+0039 "9" */
    0xff, 0xfc, 0x3, 0xff, 0xf0, 0x3, 0xff, 0xf0,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0xc3, 0xc0,

    /* U+003C "<" */
    0xe, 0x38, 0xe0, 0x38, 0xe,

    /* U+003D "=" */
    0xff, 0x0, 0xff,

    /* U+003E ">" */
    0x70, 0x1c, 0x7, 0x1c, 0x70,

    /* U+003F "?" */
    0xff, 0xf0, 0x1, 0xcf, 0xfc, 0x0, 0x3, 0x0,
    0x0,

    /* U+0040 "@" */
    0xff, 0xff, 0x0, 0x3d, 0xfc, 0xf7, 0xbf, 0xc0,
    0x3, 0xff, 0xf0,

    /* U+0041 "A" */
    0xff, 0xfc, 0x3, 0xdf, 0xfc, 0x3, 0xc0, 0x30,

    /* U+0042 "B" */
    0xff, 0xfc, 0x3, 0xff, 0xfc, 0x3, 0xff, 0xf0,

    /* U+0043 "C" */
    0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xf0,

    /* U+0044 "D" */
    0xff, 0xf0, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0045 "E" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x0, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x0, 0xc0, 0x0,

    /* U+0047 "G" */
    0xff, 0xfc, 0x0, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0048 "H" */
    0xc0, 0x3c, 0x3, 0xdf, 0xfc, 0x3, 0xc0, 0x30,

    /* U+0049 "I" */
    0xff, 0xf0, 0x60, 0x6, 0x0, 0x60, 0xff, 0xf0,

    /* U+004A "J" */
    0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0xff, 0xf0,

    /* U+004B "K" */
    0xc1, 0xed, 0xe0, 0xf0, 0xc, 0xf0, 0xc1, 0xe0,

    /* U+004C "L" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xf0,

    /* U+004D "M" */
    0xf0, 0xf, 0xd8, 0x1b, 0xcc, 0x33, 0xc6, 0x63,
    0xc1, 0x83,

    /* U+004E "N" */
    0xf0, 0x1e, 0xe0, 0xf1, 0xc7, 0x83, 0xbc, 0x7,
    0x80,

    /* U+004F "O" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0050 "P" */
    0xff, 0xfc, 0x3, 0xdf, 0xfc, 0x0, 0xc0, 0x0,

    /* U+0051 "Q" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x73, 0xfd, 0xf0,
    0x6,

    /* U+0052 "R" */
    0xff, 0xfc, 0x3, 0xdf, 0xfc, 0x1c, 0xc0, 0x60,

    /* U+0053 "S" */
    0xff, 0xfc, 0x0, 0xff, 0xf0, 0x3, 0xff, 0xf0,

    /* U+0054 "T" */
    0xff, 0xf0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+0055 "U" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0056 "V" */
    0x60, 0x1c, 0x70, 0x70, 0x31, 0x80, 0x3e, 0x0,
    0x38, 0x0,

    /* U+0057 "W" */
    0x61, 0x80, 0x73, 0x8c, 0xc, 0xc, 0x73, 0x80,
    0x7f, 0xf0, 0x3, 0x8c, 0x0,

    /* U+0058 "X" */
    0x70, 0x70, 0xee, 0x1, 0xc0, 0x3b, 0x87, 0x7,
    0x0,

    /* U+0059 "Y" */
    0xc0, 0x3c, 0x3, 0xff, 0xf0, 0x3, 0xff, 0xf0,

    /* U+005A "Z" */
    0xff, 0xf0, 0x1c, 0xf, 0x7, 0x80, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xc, 0x30, 0xc3, 0xf0,

    /* U+005C "\\" */
    0x60, 0x1c, 0x3, 0x0, 0xc0, 0x30,

    /* U+005D "]" */
    0xfc, 0x30, 0xc3, 0xf, 0xf0,

    /* U+005E "^" */
    0x3, 0x80, 0xf, 0x80, 0x31, 0x81, 0xc1, 0xc6,
    0x1, 0xc0,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0x60,

    /* U+0061 "a" */
    0x3, 0x0, 0x1f, 0x1, 0xce, 0xe, 0xfc, 0x60,
    0x1c,

    /* U+0062 "b" */
    0xff, 0xfc, 0x3, 0xff, 0xfc, 0x3, 0xff, 0xf0,

    /* U+0063 "c" */
    0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xf0,

    /* U+0064 "d" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0065 "e" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x0, 0xff, 0xf0,

    /* U+0066 "f" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x0, 0xc0, 0x0,

    /* U+0067 "g" */
    0xff, 0xfc, 0x0, 0xcf, 0xfc, 0x3, 0xff, 0xf0,

    /* U+0068 "h" */
    0xc0, 0x3c, 0x3, 0xdf, 0xfc, 0x3, 0xc0, 0x30,

    /* U+0069 "i" */
    0xff, 0xc0,

    /* U+006A "j" */
    0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0xff, 0xf0,

    /* U+006B "k" */
    0xc1, 0xed, 0xe0, 0xf0, 0xc, 0xf0, 0xc1, 0xe0,

    /* U+006C "l" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xf0,

    /* U+006D "m" */
    0xf0, 0xf, 0xd8, 0x1b, 0xcc, 0x33, 0xc6, 0x63,
    0xc1, 0x83,

    /* U+006E "n" */
    0xf0, 0x1e, 0xe0, 0xf1, 0xc7, 0x83, 0xbc, 0x7,
    0x80,

    /* U+006F "o" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0070 "p" */
    0xff, 0xfc, 0x3, 0xdf, 0xfc, 0x0, 0xc0, 0x0,

    /* U+0071 "q" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x73, 0xff, 0xf0,
    0x6,

    /* U+0072 "r" */
    0xff, 0xfc, 0x3, 0xff, 0xfc, 0xf0, 0xc1, 0xe0,

    /* U+0073 "s" */
    0xff, 0xfc, 0x0, 0xff, 0xf0, 0x3, 0xff, 0xf0,

    /* U+0074 "t" */
    0xff, 0xf0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+0075 "u" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xf0,

    /* U+0076 "v" */
    0x60, 0x1c, 0x70, 0x70, 0x31, 0x80, 0x3e, 0x0,
    0x38, 0x0,

    /* U+0077 "w" */
    0x61, 0x80, 0x73, 0x8c, 0xc, 0xc, 0x73, 0x80,
    0x7f, 0xf0, 0x3, 0x8c, 0x0,

    /* U+0078 "x" */
    0x70, 0x70, 0xee, 0x1, 0xc0, 0x3b, 0x87, 0x7,
    0x0,

    /* U+0079 "y" */
    0x60, 0xe1, 0x98, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+007A "z" */
    0xff, 0xf0, 0x1c, 0xf, 0x7, 0x80, 0xff, 0xf0,

    /* U+007B "{" */
    0xff, 0xfc, 0x0, 0xff, 0xfc, 0x0, 0xc0, 0x0,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x30,

    /* U+007E "~" */
    0x7e,

    /* U+007F "" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 106, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 57, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 101, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 5, .adv_w = 234, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 219, .box_w = 13, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 26, .adv_w = 264, .box_w = 15, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 228, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 57, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 46, .adv_w = 57, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 52, .adv_w = 57, .box_w = 5, .box_h = 9, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 58, .adv_w = 55, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 59, .adv_w = 148, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 57, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 65, .adv_w = 123, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 66, .adv_w = 57, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 150, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 219, .box_w = 13, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 234, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 57, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 57, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 153, .adv_w = 134, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 148, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 161, .adv_w = 133, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 219, .box_w = 13, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 246, .box_w = 14, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 214, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 276, .box_w = 16, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 228, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 219, .box_w = 12, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 326, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 238, .box_w = 15, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 329, .box_w = 20, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 209, .box_w = 13, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 124, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 411, .adv_w = 150, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 124, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 422, .adv_w = 238, .box_w = 15, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 181, .box_w = 10, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 60, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 435, .adv_w = 238, .box_w = 14, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 57, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 214, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 276, .box_w = 16, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 228, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 220, .box_w = 12, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 570, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 238, .box_w = 15, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 329, .box_w = 20, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 209, .box_w = 13, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 209, .box_w = 12, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 57, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 660, .adv_w = 219, .box_w = 12, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 135, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 669, .adv_w = 57, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 43,
    3, 63,
    3, 66,
    3, 75,
    7, 18,
    7, 32,
    7, 43,
    7, 53,
    7, 55,
    7, 56,
    7, 57,
    7, 63,
    7, 66,
    7, 75,
    7, 85,
    7, 87,
    7, 88,
    7, 89,
    7, 90,
    8, 43,
    8, 63,
    8, 66,
    8, 75,
    11, 63,
    12, 55,
    12, 56,
    12, 57,
    12, 63,
    12, 66,
    12, 87,
    12, 88,
    12, 89,
    12, 90,
    13, 53,
    13, 55,
    13, 56,
    13, 85,
    13, 87,
    13, 88,
    13, 90,
    14, 20,
    14, 55,
    14, 56,
    14, 63,
    14, 66,
    14, 87,
    14, 88,
    14, 89,
    14, 90,
    15, 56,
    15, 85,
    15, 87,
    15, 88,
    15, 90,
    16, 16,
    16, 21,
    16, 63,
    16, 66,
    17, 55,
    17, 57,
    17, 63,
    17, 66,
    17, 87,
    17, 88,
    17, 89,
    17, 90,
    19, 55,
    19, 56,
    19, 87,
    19, 88,
    19, 90,
    20, 55,
    20, 56,
    20, 57,
    20, 63,
    20, 66,
    20, 87,
    20, 88,
    20, 89,
    20, 90,
    21, 18,
    21, 53,
    21, 55,
    21, 56,
    21, 57,
    21, 63,
    21, 66,
    21, 85,
    21, 87,
    21, 88,
    21, 89,
    21, 90,
    22, 63,
    22, 66,
    23, 63,
    24, 43,
    24, 63,
    24, 66,
    24, 75,
    25, 55,
    25, 56,
    25, 63,
    25, 66,
    25, 87,
    25, 88,
    25, 89,
    25, 90,
    26, 55,
    26, 56,
    26, 57,
    26, 63,
    26, 66,
    26, 87,
    26, 88,
    26, 89,
    26, 90,
    27, 55,
    27, 56,
    27, 87,
    27, 88,
    28, 55,
    28, 56,
    28, 87,
    28, 88,
    29, 29,
    30, 44,
    30, 57,
    30, 63,
    30, 66,
    30, 89,
    30, 90,
    31, 31,
    31, 55,
    31, 56,
    31, 63,
    31, 66,
    31, 87,
    31, 88,
    31, 90,
    34, 55,
    34, 56,
    34, 87,
    34, 88,
    34, 90,
    35, 55,
    35, 56,
    35, 57,
    35, 63,
    35, 66,
    35, 87,
    35, 88,
    35, 89,
    35, 90,
    37, 55,
    37, 56,
    37, 57,
    37, 63,
    37, 66,
    37, 87,
    37, 88,
    37, 89,
    37, 90,
    39, 63,
    39, 66,
    43, 63,
    43, 66,
    44, 7,
    44, 12,
    44, 14,
    44, 17,
    44, 21,
    44, 23,
    44, 25,
    44, 29,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    45, 3,
    45, 8,
    45, 11,
    45, 18,
    45, 32,
    45, 53,
    45, 55,
    45, 56,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    48, 55,
    48, 56,
    48, 63,
    48, 66,
    48, 87,
    48, 88,
    48, 90,
    49, 55,
    49, 56,
    49, 63,
    49, 66,
    49, 87,
    49, 88,
    49, 90,
    50, 55,
    50, 56,
    50, 63,
    50, 66,
    50, 87,
    50, 88,
    50, 90,
    51, 55,
    51, 56,
    51, 87,
    51, 88,
    51, 90,
    52, 63,
    52, 66,
    53, 13,
    53, 15,
    53, 16,
    53, 21,
    53, 43,
    53, 63,
    53, 64,
    53, 66,
    53, 75,
    54, 66,
    55, 7,
    55, 12,
    55, 13,
    55, 14,
    55, 15,
    55, 16,
    55, 17,
    55, 21,
    55, 25,
    55, 27,
    55, 28,
    55, 29,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 52,
    55, 63,
    55, 64,
    55, 66,
    55, 68,
    55, 70,
    55, 72,
    55, 75,
    55, 80,
    55, 82,
    55, 84,
    55, 92,
    55, 95,
    56, 7,
    56, 12,
    56, 13,
    56, 14,
    56, 15,
    56, 16,
    56, 17,
    56, 21,
    56, 23,
    56, 25,
    56, 26,
    56, 27,
    56, 28,
    56, 29,
    56, 34,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 52,
    56, 63,
    56, 64,
    56, 66,
    56, 70,
    56, 72,
    56, 75,
    56, 80,
    56, 82,
    56, 84,
    56, 92,
    57, 7,
    57, 12,
    57, 14,
    57, 17,
    57, 21,
    57, 23,
    57, 25,
    57, 30,
    57, 36,
    57, 40,
    57, 68,
    57, 70,
    57, 72,
    57, 95,
    58, 63,
    58, 66,
    61, 53,
    61, 55,
    61, 56,
    61, 61,
    61, 85,
    61, 87,
    61, 88,
    61, 90,
    63, 3,
    63, 7,
    63, 8,
    63, 12,
    63, 14,
    63, 17,
    63, 18,
    63, 21,
    63, 23,
    63, 24,
    63, 25,
    63, 29,
    63, 30,
    63, 32,
    63, 36,
    63, 40,
    63, 48,
    63, 50,
    63, 53,
    63, 54,
    63, 55,
    63, 56,
    63, 61,
    63, 68,
    63, 70,
    63, 72,
    63, 80,
    63, 82,
    63, 85,
    63, 86,
    63, 87,
    63, 88,
    63, 90,
    63, 95,
    64, 53,
    64, 55,
    64, 56,
    64, 85,
    64, 88,
    64, 90,
    66, 3,
    66, 7,
    66, 8,
    66, 11,
    66, 12,
    66, 14,
    66, 17,
    66, 18,
    66, 21,
    66, 23,
    66, 24,
    66, 25,
    66, 29,
    66, 30,
    66, 32,
    66, 36,
    66, 40,
    66, 48,
    66, 50,
    66, 53,
    66, 54,
    66, 55,
    66, 56,
    66, 61,
    66, 68,
    66, 70,
    66, 72,
    66, 80,
    66, 82,
    66, 85,
    66, 86,
    66, 87,
    66, 88,
    66, 90,
    66, 95,
    67, 55,
    67, 56,
    67, 57,
    67, 63,
    67, 66,
    67, 87,
    67, 88,
    67, 89,
    67, 90,
    69, 55,
    69, 56,
    69, 57,
    69, 63,
    69, 66,
    69, 87,
    69, 88,
    69, 89,
    69, 90,
    71, 63,
    71, 66,
    72, 63,
    72, 66,
    75, 63,
    75, 66,
    76, 7,
    76, 12,
    76, 14,
    76, 17,
    76, 21,
    76, 23,
    76, 25,
    76, 29,
    76, 30,
    76, 36,
    76, 40,
    76, 48,
    76, 50,
    76, 68,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    77, 3,
    77, 8,
    77, 11,
    77, 18,
    77, 32,
    77, 53,
    77, 55,
    77, 56,
    77, 85,
    77, 87,
    77, 88,
    77, 90,
    80, 55,
    80, 56,
    80, 63,
    80, 66,
    80, 87,
    80, 88,
    80, 90,
    81, 55,
    81, 56,
    81, 63,
    81, 66,
    81, 87,
    81, 88,
    81, 90,
    82, 55,
    82, 56,
    82, 63,
    82, 66,
    82, 87,
    82, 88,
    82, 90,
    83, 55,
    83, 56,
    83, 87,
    83, 88,
    83, 90,
    84, 63,
    84, 66,
    85, 13,
    85, 15,
    85, 16,
    85, 21,
    85, 43,
    85, 63,
    85, 64,
    85, 66,
    85, 75,
    86, 63,
    86, 66,
    87, 7,
    87, 12,
    87, 13,
    87, 14,
    87, 15,
    87, 16,
    87, 17,
    87, 21,
    87, 25,
    87, 27,
    87, 28,
    87, 29,
    87, 34,
    87, 36,
    87, 40,
    87, 43,
    87, 48,
    87, 50,
    87, 52,
    87, 63,
    87, 64,
    87, 66,
    87, 68,
    87, 70,
    87, 72,
    87, 75,
    87, 80,
    87, 82,
    87, 84,
    87, 92,
    87, 95,
    88, 13,
    88, 14,
    88, 15,
    88, 16,
    88, 17,
    88, 21,
    88, 23,
    88, 25,
    88, 26,
    88, 27,
    88, 28,
    88, 29,
    88, 34,
    88, 40,
    88, 43,
    88, 48,
    88, 50,
    88, 52,
    88, 63,
    88, 64,
    88, 66,
    88, 70,
    88, 72,
    88, 75,
    88, 80,
    88, 82,
    88, 84,
    88, 92,
    89, 7,
    89, 12,
    89, 14,
    89, 17,
    89, 21,
    89, 23,
    89, 25,
    89, 30,
    89, 36,
    89, 40,
    89, 68,
    89, 70,
    89, 72,
    89, 95,
    90, 7,
    90, 12,
    90, 13,
    90, 14,
    90, 15,
    90, 16,
    90, 17,
    90, 21,
    90, 23,
    90, 25,
    90, 29,
    90, 30,
    90, 34,
    90, 36,
    90, 40,
    90, 43,
    90, 48,
    90, 50,
    90, 52,
    90, 63,
    90, 64,
    90, 66,
    90, 68,
    90, 70,
    90, 72,
    90, 75,
    90, 80,
    90, 82,
    90, 84,
    90, 92,
    92, 63,
    92, 66,
    94, 55,
    94, 56,
    94, 87,
    94, 88,
    94, 90,
    95, 55,
    95, 57,
    95, 63,
    95, 66,
    95, 87,
    95, 89
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -29, -34, -34, -29, -20, -23, -11, -23,
    -20, -20, -17, -14, -14, -11, -23, -20,
    -20, -17, -26, -29, -34, -34, -29, -38,
    -22, -22, -27, -22, -22, -22, -22, -27,
    -19, -43, -42, -42, -43, -42, -42, -43,
    -2, -22, -22, -22, -22, -22, -22, -27,
    -19, -42, -43, -42, -42, -43, -53, -38,
    -53, -53, -7, -6, -6, -6, -8, -6,
    -6, -6, -7, -6, -7, -6, -6, -7,
    -6, -6, -6, -6, -7, -6, -6, -6,
    -14, -14, -14, -5, -11, -11, -11, -14,
    -14, -5, -11, -14, -6, -6, -6, -45,
    -57, -54, -45, -7, -6, -6, -6, -7,
    -6, -6, -6, -7, -6, -6, -6, -6,
    -6, -6, -6, -6, -10, -10, -10, -10,
    -10, -10, -10, -10, -27, -6, -4, -3,
    -3, -4, -3, -27, -15, -15, -15, -15,
    -15, -15, -25, -7, -6, -7, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -23, -23, -6, -6, -6, -27,
    -27, -6, -18, -6, -6, -30, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -29,
    -29, -30, -29, -23, -61, -53, -53, -61,
    -53, -53, -60, -6, -6, -6, -6, -6,
    -6, -6, -6, -6, -27, -27, -6, -6,
    -6, -6, -6, -4, -4, -6, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -43,
    -43, -38, -38, -61, -46, -54, -46, -61,
    -6, -7, -22, -42, -22, -42, -53, -7,
    -39, -6, -10, -10, -15, -7, -6, -6,
    -49, -6, -6, -6, -60, -38, -60, -6,
    -6, -6, -53, -6, -6, -6, -6, -24,
    -6, -22, -42, -22, -42, -53, -6, -38,
    -6, -6, -6, -10, -10, -15, -6, -6,
    -53, -6, -6, -6, -60, -38, -60, -6,
    -6, -53, -6, -6, -6, -6, -6, -27,
    -27, -6, -16, -6, -6, -4, -6, -6,
    -6, -6, -6, -13, -6, -6, -38, -53,
    -53, -53, -38, -53, -53, -53, -34, -6,
    -34, -22, -22, -6, -24, -12, -6, 0,
    -6, -15, -3, -23, -6, -6, -6, -6,
    -46, -6, -60, -60, -53, -6, -6, -6,
    -6, -6, -46, -6, -60, -60, -60, -18,
    -54, -38, -38, -54, -38, -36, -34, -6,
    -34, -38, -22, -22, -6, -24, -12, -6,
    0, -6, -15, -3, -23, -6, -6, -6,
    -6, -46, -6, -60, -60, -53, -6, -6,
    -6, -6, -6, -46, -6, -60, -60, -60,
    -18, -6, -6, -6, -6, -6, -8, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -6, -23, -23, -6, -6, -6,
    -6, -6, -27, -27, -6, -18, -6, -6,
    -30, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -6, -29, -29, -30, -27, -23,
    -61, -53, -53, -61, -53, -53, -60, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -27, -27, -6, -6, -6, -6, -6, -4,
    -4, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -6, -43, -43, -38, -38, -61,
    -46, -54, -46, -61, -6, -6, -8, -22,
    -42, -22, -42, -53, -7, -39, -7, -10,
    -10, -15, -6, -6, -6, -53, -6, -6,
    -6, -60, -38, -60, -6, -6, -6, -53,
    -6, -6, -6, -6, -24, -42, -22, -42,
    -53, -6, -38, -6, -6, -6, -10, -10,
    -15, -6, -6, -53, -6, -6, -6, -60,
    -38, -60, -6, -6, -53, -6, -6, -6,
    -6, -6, -27, -27, -6, -14, -6, -6,
    -4, -6, -6, -6, -6, -6, -13, -6,
    -19, -43, -19, -43, -53, -6, -43, -6,
    -6, -25, -3, -6, -6, -6, -60, -6,
    -6, -6, -60, -36, -60, -6, -6, -7,
    -60, -6, -6, -6, -6, -23, -23, -6,
    -6, -6, -6, -6, -20, -12, -32, -32,
    -20, -12
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 602,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font12 = {
#else
lv_font_t ui_font_Font12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT12*/

