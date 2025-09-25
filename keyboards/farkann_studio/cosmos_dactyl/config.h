/* Copyright 2025 skree.us
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define USE_SERIAL
#define SPLIT_HAND_PIN      GP28  // high = left, low = right

// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN         GP0
#define SERIAL_USART_RX_PIN         GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT        100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED          921600
#define SERIAL_USART_PIN_SWAP

#ifdef SKREE_QUANTUM_PAINTER
// ...
#endif

#ifdef SKREE_DOUBLE_TRACKBALL
// #define POINTING_DEVICE_TASK_THROTTLE_MS 1
//
// #define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC
//
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// // only required if not setting mouse layer elsewhere
// #define AUTO_MOUSE_DEFAULT_LAYER 3
//
// #define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif

// #define SPLIT_LAYER_STATE_ENABLE
// #define POINTING_DEVICE_COMBINED
// #define POINTING_DEVICE_ROTATION_180
// #define ROTATIONAL_TRANSFORM_ANGLE  10 // TESTING RIGHT SHIFTED FROM -35 TO -45 TO TEST LEFT
// #define POINTING_DEVICE_INVERT_Y_RIGHT
// #define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X
// #define SPI_SCK_PIN GP2
// #define SPI_MOSI_PIN GP3
// #define SPI_MISO_PIN GP4
// #define PMW33XX_CS_PIN GP5
// #define POINTING_DEVICE_TASK_THROTTLE_MS 1
// //#define PMW33XX_LIFTOFF_DISTANCE 0x02
//
// #define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC
//
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// // only required if not setting mouse layer elsewhere
// #define AUTO_MOUSE_DEFAULT_LAYER 3
//
// #define DYNAMIC_KEYMAP_LAYER_COUNT 5
//
//
//
