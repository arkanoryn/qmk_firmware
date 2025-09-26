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

#pragma once

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
#define PMW33XX_CS_PIN GP5

#define ROTATIONAL_TRANSFORM_ANGLE  10 // TESTING RIGHT SHIFTED FROM -35 TO -45 TO TEST LEFT
#define POINTING_DEVICE_INVERT_Y_RIGHT
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x03

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
// #define AUTO_MOUSE_DEFAULT_LAYER 3
//
// #define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#ifdef CONSOLE_ENABLE
  #define POINTING_DEVICE_DEBUG
#endif // CONSOLE_ENABLE
       //
#define SPI_DRIVER SPID0
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP4
#define SPI_SCK_PIN GP2
#define PMW33XX_CS_PIN GP5


