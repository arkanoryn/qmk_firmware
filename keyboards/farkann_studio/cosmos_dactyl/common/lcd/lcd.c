/* Copyright 2025 Pierre-Nicolas SORMANI, aka Ark'Anoryn (@arkanoryn)
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef FARKANN_LCD_SCREEN

#include "lcd.h"

static painter_device_t display_1;

#ifdef FARKANN_DOUBLE_SCREEN
static painter_device_t display_2;
#endif // FARKANN_DOUBLE_SCREEN

void    init_displays(void) {
    display_1 = qp_st7735_make_spi_device(FARKANN_SCREEN_WIDTH, FARKANN_SCREEN_HEIGHT, OLED_CS_PIN, OLED_DC_PIN, OLED_RST_PIN, FARKANN_SCREEN_SPI_DIVISOR, FARKANN_SCREEN_SPI_MODE);
    qp_init(display_1, FARKANN_SCREEN_ROTATION);
    qp_rect(display_1, 0, 0, FARKANN_SCREEN_WIDTH, FARKANN_SCREEN_HEIGHT, 0, 0, 0, true);


#ifdef FARKANN_DOUBLE_SCREEN
    display_2 = qp_st7735_make_spi_device(FARKANN_SCREEN_2_WIDTH, FARKANN_SCREEN_2_HEIGHT, OLED_CS_PIN, OLED_DC_PIN, OLED_RST_PIN, FARKANN_SCREEN_2_SPI_DIVISOR, FARKANN_SCREEN_2_SPI_MODE);
    qp_init(display_2, FARKANN_SCREEN_2_ROTATION);
    qp_rect(display_2, 0, 0, FARKANN_SCREEN_2_WIDTH, FARKANN_SCREEN_2_HEIGHT, 0, 0, 0, true);
#endif // FARKANN_DOUBLE_SCREEN
};

void draw_default_screen_1(void) {
    for (int i = 0; i < 239; i+=8) {
        // bool qp_rect(painter_device_t device, uint16_t left, uint16_t top, uint16_t right, uint16_t bottom, uint8_t hue, uint8_t sat, uint8_t val, bool filled);
        qp_rect(display_1, 0, i, 25, i+7, i, 255, 255, true);
        qp_flush(display_1);
    }
};

#ifdef FARKANN_DOUBLE_SCREEN
void draw_default_screen_2(void) {
    for (int i = 0; i < 239; i+=8) {
        qp_circle(display_2, 32, 32+i, 4, i, 255, 255, true);
        qp_flush(display_2);
    }
};
#endif // FARKANN_DOUBLE_SCREEN

void    draw_default(void) {
    static uint32_t last_draw = 0;

    if (timer_elapsed32(last_draw) > 33) { // Throttle to 30fps
        last_draw = timer_read32();
        draw_default_screen_1();
#ifdef FARKANN_DOUBLE_SCREEN
        draw_default_screen_2();
#endif // FARKANN_DOUBLE_SCREEN
    }
};
#endif // FARKANN_LCD_SCREEN
