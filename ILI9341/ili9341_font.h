/*
 * ili9341_font.h
 *
 *  Created on: Nov 28, 2019
 *      Author: andrew
 */

#ifndef __ILI9341_FONT_H
#define __ILI9341_FONT_H

#ifdef __cplusplus
extern "C" {
#endif

// ----------------------------------------------------------------- includes --

#include <stdint.h>

// ------------------------------------------------------------------ defines --

/* nothing */

// ------------------------------------------------------------------- macros --

/* nothing */

// ----------------------------------------------------------- exported types --

typedef struct {
    const uint8_t width;
    const uint8_t height;
    const uint8_t spacing;
    const uint16_t glyph[];
} ili9341_font_t;

// ------------------------------------------------------- exported variables --

extern ili9341_font_t const ili9341_font_7x10;
extern ili9341_font_t const ili9341_font_11x18;
extern ili9341_font_t const ili9341_font_16x26;

/**
 * @brief stealth57 5x7 font by trash80 with some modifications.
 *
 * @details The TTF font file was converted into C array using LVGL Online Font
 * Converter V 5.3 and hand-modified to fit ILI9341 font format. Unfortunatelly
 * the LVGL converter does not center-align the monochrome glyphs, thus some
 * fine tuning was required. Additionally, '-' was widened to look more alike
 * the font rendered on the original M8 device.
 *
 * @todo Add support for bold font.
 * @todo Center-align the monochrome glyphs.
 *
 * @ref https://lvgl.io/tools/font_conv_v5_3
 * @ref https://fontstruct.com/fontstructions/show/413734/stealth57
 */
extern ili9341_font_t const ili9341_font_trash80_stealth57;

// ------------------------------------------------------- exported functions --

uint8_t glyph_index(unsigned char glyph);

#ifdef __cplusplus
}
#endif

#endif /* __ILI9341_FONT_H */