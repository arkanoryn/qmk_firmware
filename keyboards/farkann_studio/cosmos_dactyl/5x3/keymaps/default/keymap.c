// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "print.h"

#include "common/layers/common.h"
#include "common/layers/qwerty.h"
#include "common/layers/thumbs.h"

#define _QWERTY 0
#define _CONFIG 1
#define _EMPTY 2

#define LAYOUT_WRAPPER(...) LAYOUT(__VA_ARGS__)

#define ___EXTRA__________ KC_H, KC_J, KC_L

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_WRAPPER(
        ___DEFAULT_QWERTY_ROW_1___,
        ___DEFAULT_QWERTY_ROW_2___,
        ___DEFAULT_QWERTY_ROW_3___,
        ___EXTRA__________,
        __THUMBS__________
    )
};
