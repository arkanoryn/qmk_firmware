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
#include "print.h"
#include <qp.h>

// #ifdef FARKANN_DOUBLE_TRACKBALL
void pointing_device_init_kb(void) {
    pmw33xx_init(0);         // index 0 is the first device.
    pmw33xx_init(1);         // index 1 is the second device.
    pmw33xx_set_cpi(0, 10000); // applies to first sensor
    pmw33xx_set_cpi(1, 6000); // applies to second sensor
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

void keyboard_post_init_kb(void) {
    pointing_device_set_cpi_on_side(true, 10000); //Set cpi on left side to a low value for slower scrolling.
    pointing_device_set_cpi_on_side(false, 10000); //Set cpi on right side to a reasonable value for mousing.
}

report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
    /* This is the custom code to overight movement to scrolling; I want that when I'm on "mouse" Layer */
    /* right_report.h = right_report.x; */
    /* right_report.v = right_report.y; */
    /* right_report.x = 0; */
    /* right_report.y = 0; */

    return pointing_device_combine_reports(left_report, right_report);
}
// #endif
