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

#include QMK_KEYBOARD_H

#ifdef FARKANN_LCD_SCREEN
#   include "lcd/lcd.h"
#endif // FARKANN_LCD_SCREEN

#ifdef FARKANN_TRACKBALL_ENABLED
void pointing_device_init_kb(void) {
    pmw33xx_init(0);         // index 0 is the first device.
    pmw33xx_set_cpi(0, 10000); // applies to first sensor
    #ifdef FARKANN_DOUBLE_TRACKBALL
    pmw33xx_init(1);         // index 1 is the second device.
    pmw33xx_set_cpi(1, 6000); // applies to second sensor
    #endif // FARKANN_DOUBLE_TRACKBALL
    pointing_device_init_user();
}

// Contains report from sensor #0 already, need to merge in from sensor #1
report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
    pmw33xx_report_t report = pmw33xx_read_burst(1);

    if (!report.motion.b.is_lifted && report.motion.b.is_motion) {
        // From quantum/pointing_device_drivers.c
#define constrain_hid(amt) ((amt) < -127 ? -127 : ((amt) > 127 ? 127 : (amt)))
        mouse_report.x = constrain_hid(mouse_report.x + report.delta_x);
        mouse_report.y = constrain_hid(mouse_report.y + report.delta_y);
    }
    return pointing_device_task_user(mouse_report);
}
#endif // FARKANN_TRACKBALL_ENABLED

void keyboard_post_init_kb(void) {
#ifdef FARKANN_TRACKBALL_ENABLED
    pointing_device_set_cpi_on_side(true, 10000); //Set cpi on left side to a low value for slower scrolling.
#   ifdef FARKANN_DOUBLE_TRACKBALL
    pointing_device_set_cpi_on_side(false, 10000); //Set cpi on right side to a reasonable value for mousing.
#   endif // FARKANN_DOUBLE_TRACKBALL
#endif // FARKANN_TRACKBALL_ENABLED

#ifdef FARKANN_LCD_SCREEN
    init_displays();
#endif // FARKANN_LCD_SCREEN
};

void housekeeping_task_kb(void) {
    #ifdef FARKANN_LCD_SCREEN
    draw_default();
    #endif // FARKANN_LCD_SCREEN
};

