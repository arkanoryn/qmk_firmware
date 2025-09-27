/* Copyright 2025 skree.us
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
**/

#pragma once

#define THUMBCLUSTER_LEFT 6
#define THUMBCLUSTER_RIGHT 4

/**
**    ╔╦╗╔═╗╔╦╗╔═╗╔═╗
**     ║ ║ ║ ║║║ ║╚═╗
**     ╩ ╚═╝═╩╝╚═╝╚═╝
**/
// TODO: #ARK verify what it's used for and how it should be configured
#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC
// #define SERIAL_PIO_USE_PIO0                 // default, TODO: might not need it
// #define SERIAL_USART_TIMEOUT        100  // TODO: default is 20, let's see if it still works with it. USART driver timeout
// #define SERIAL_USART_SPEED          921600 // TODO: check what happens if we remove that

/*
**    ╔═╗╔═╗╦═╗╦╔═╗╦    ╔═╗╔═╗╔╗╔╔═╗╦╔═╗
**    ╚═╗║╣ ╠╦╝║╠═╣║    ║  ║ ║║║║╠╣ ║║ ╦
**    ╚═╝╚═╝╩╚═╩╩ ╩╩═╝  ╚═╝╚═╝╝╚╝╚  ╩╚═╝
*/
#define USE_SERIAL
#define SPLIT_HAND_PIN              GP28    // high = left, low = right
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN         GP0
#define SERIAL_USART_RX_PIN         GP1
#define SERIAL_USART_PIN_SWAP

#ifdef CONSOLE_ENABLE
  #define SERIAL_DEBUG
#endif // CONSOLE_ENABLE


/*
**    ╦═╗╔═╗╔╗   ╔═╗╔═╗╔╗╔╔═╗╦╔═╗
**    ╠╦╝║ ╦╠╩╗  ║  ║ ║║║║╠╣ ║║ ╦
**    ╩╚═╚═╝╚═╝  ╚═╝╚═╝╝╚╝╚  ╩╚═╝
*/
#ifdef RGB_MATRIX_ENABLE
// TODO: Not tested code, need to be looked at and also how others do it; cause part can be put in the info.json
// #define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
// #define WS2812_DI_PIN GP8
// #define SPLIT_TRANSPORT_MIRROR
// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE // Sets the default mode, if none has been set
// #define RGB_MATRIX_DEFAULT_HUE 33 // Sets the default hue value, if none has been set
// #define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
// #define RGB_MATRIX_DEFAULT_SPD 50
// #define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
// #define RGB_DISABLE_WHEN_USB_SUSPENDED
// #define RGB_MATRIX_KEYPRESSES
// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define RGB_MATRIX_SLEEP
#endif

/*
**    ╔═╗ ╦ ╦╔═╗╔╗╔╦╗╦ ╦╔╦╗  ╔═╗╔═╗╦╔╗╔╦╗╔═╗╦═╗  ╔═╗╔═╗╔╗╔╔═╗╦╔═╗
**    ║═╬╗║ ║╠═╣║║║║ ║ ║║║║  ╠═╝╠═╣║║║║║ ║╣ ╠╦╝  ║  ║ ║║║║╠╣ ║║ ╦
**    ╚═╝╚╚═╝╩ ╩╝╚╝╩ ╚═╝╩ ╩  ╩  ╩ ╩╩╝╚╝╩ ╚═╝╩╚═  ╚═╝╚═╝╝╚╝╚  ╩╚═╝
*/
#define OLED_DC_PIN GP8
#define OLED_CS_PIN GP6
#define OLED_RST_PIN GP7

#define OLED_DISPLAY_128X64

#define LCD_CS_PIN GP6
#define LCD_RST_PIN GP7
#define LCD_DC_PIN GP8
// #define LCD_SCK_PIN GP27
// #define LCD_SDA_PIN GP26

#define QUANTUM_PAINTER_DEBUG
#define ST7735_NUM_DEVICES 2

// SPI SCK
// SPI MOSI
// SPI CS
// D/C
// RST

/*
**    ╔╦╗╦═╗╔═╗╔═╗╦╔═╔╗ ╔═╗╦  ╦    ╔═╗╔═╗╔╗╔╔═╗╦╔═╗
**     ║ ╠╦╝╠═╣║  ╠╩╗╠╩╗╠═╣║  ║    ║  ║ ║║║║╠╣ ║║ ╦
**     ╩ ╩╚═╩ ╩╚═╝╩ ╩╚═╝╩ ╩╩═╝╩═╝  ╚═╝╚═╝╝╚╝╚  ╩╚═╝
*/
// #ifdef FARKANN_TRACKBALL_ENABLE
    #ifdef CONSOLE_ENABLE
      #define POINTING_DEVICE_DEBUG
    #endif // CONSOLE_ENABLE

    #define SPI_DRIVER SPID0
    #define SPI_MOSI_PIN GP3
    #define SPI_MISO_PIN GP4
    #define SPI_SCK_PIN GP2
    #define PMW33XX_CS_PIN GP5

    #define ROTATIONAL_TRANSFORM_ANGLE  10 // TESTING RIGHT SHIFTED FROM -35 TO -45 TO TEST LEFT
    #define POINTING_DEVICE_TASK_THROTTLE_MS 1
    #define PMW33XX_LIFTOFF_DISTANCE 0x03

    #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
    // only required if not setting mouse layer elsewhere
    // NOTE: maybe we want to move that to lower layer? TBD
    // #define AUTO_MOUSE_DEFAULT_LAYER 3
    // #define DYNAMIC_KEYMAP_LAYER_COUNT 5
// #endif // FARKANN_TRACKBALL_ENABLE
//
// #ifdef FARKANN_SINGLE_TRACKBALL
// #endif // FARKANN_SINGLE_TRACKBALL
//
// #ifdef FARKANN_DOUBLE_TRACKBALL
    #define SPLIT_POINTING_ENABLE
    #define POINTING_DEVICE_COMBINED
    #define POINTING_DEVICE_INVERT_Y_RIGHT
    #define POINTING_DEVICE_INVERT_Y
// #endif // FARKANN_DOUBLE_TRACKBALL
