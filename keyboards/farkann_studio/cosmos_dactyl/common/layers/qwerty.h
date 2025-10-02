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

/*
** This file contains the different keycode definition dedicated to the Graphite layout
** of our keyboards.
*/
#pragma once

#include QMK_KEYBOARD_H
// #include "layers.h" // each keyboard should have this file with the available layers enum

#define DEFAULT_QWERTY_B KC_B
#define DEFAULT_QWERTY_C KC_C
#define DEFAULT_QWERTY_G KC_G
#define DEFAULT_QWERTY_H KC_H
#define DEFAULT_QWERTY_J KC_J
#define DEFAULT_QWERTY_K KC_K
#define DEFAULT_QWERTY_M KC_M
#define DEFAULT_QWERTY_N KC_N
#define DEFAULT_QWERTY_P KC_P
#define DEFAULT_QWERTY_Q KC_Q
#define DEFAULT_QWERTY_T KC_T
#define DEFAULT_QWERTY_V KC_V
#define DEFAULT_QWERTY_X KC_X
#define DEFAULT_QWERTY_Y KC_Y
#define DEFAULT_QWERTY_DOT KC_DOT
#define DEFAULT_QWERTY_BSPC KC_BSPC
#define DEFAULT_QWERTY_ENT KC_ENT
#define DEFAULT_QWERTY_QUOT KC_QUOT
#define DEFAULT_QWERTY_COMM KC_COMM

#ifdef FARKANN_POWER_USER
    #define DEFAULT_QWERTY_A       LT(_NUMPAD_SOUND, KC_A)
    #define DEFAULT_QWERTY_D       LT(_SYMBOLS, KC_D)
    #define DEFAULT_QWERTY_E       LALT_T(KC_E)
    #define DEFAULT_QWERTY_F       LT(_ACTIONS, KC_F)
    #define DEFAULT_QWERTY_I       RALT_T(KC_I)
    #define DEFAULT_QWERTY_J       LT(_ACTIONS, KC_J)
    #define DEFAULT_QWERTY_K       LT(_SYMBOLS, KC_K)
    #define DEFAULT_QWERTY_L       LT(_ACCENTS, KC_L)
    #define DEFAULT_QWERTY_O       RCTL_T(KC_O)
    #define DEFAULT_QWERTY_R       LGUI_T(KC_R)
    #define DEFAULT_QWERTY_S       LT(_ACCENTS, KC_S)
    #define DEFAULT_QWERTY_U       RGUI_T(KC_U)
    #define DEFAULT_QWERTY_W       LCTL_T(KC_W)
    #define DEFAULT_QWERTY_Z       LSFT_T(KC_Z)
    #define DEFAULT_QWERTY_SCLN    LT(_NUMPAD_SOUND, KC_SCLN)
    #define DEFAULT_QWERTY_SLSH    RSFT_T(KC_SLSH)
#else
    #define DEFAULT_QWERTY_A       KC_A
    #define DEFAULT_QWERTY_D       KC_D
    #define DEFAULT_QWERTY_E       KC_E
    #define DEFAULT_QWERTY_F       KC_F
    #define DEFAULT_QWERTY_I       KC_I
    #define DEFAULT_QWERTY_J       KC_J
    #define DEFAULT_QWERTY_K       KC_K
    #define DEFAULT_QWERTY_L       KC_L
    #define DEFAULT_QWERTY_O       KC_O
    #define DEFAULT_QWERTY_R       KC_R
    #define DEFAULT_QWERTY_S       KC_S
    #define DEFAULT_QWERTY_U       KC_U
    #define DEFAULT_QWERTY_W       KC_W
    #define DEFAULT_QWERTY_Z       KC_Z
    #define DEFAULT_QWERTY_SCLN    KC_SCLN
    #define DEFAULT_QWERTY_SLSH    KC_SLSH
#endif // FARKANN_POWER_USER

#define ___DEFAULT_QWERTY_ROW_1___ DEFAULT_QWERTY_Q, DEFAULT_QWERTY_W, DEFAULT_QWERTY_E, DEFAULT_QWERTY_R, DEFAULT_QWERTY_T, DEFAULT_QWERTY_Y, DEFAULT_QWERTY_U, DEFAULT_QWERTY_I,      DEFAULT_QWERTY_O,  DEFAULT_QWERTY_P
#define ___DEFAULT_QWERTY_ROW_2___ DEFAULT_QWERTY_A, DEFAULT_QWERTY_S, DEFAULT_QWERTY_D, DEFAULT_QWERTY_F, DEFAULT_QWERTY_G, DEFAULT_QWERTY_H, DEFAULT_QWERTY_J, DEFAULT_QWERTY_K,      DEFAULT_QWERTY_L,  DEFAULT_QWERTY_SCLN
#define ___DEFAULT_QWERTY_ROW_3___ DEFAULT_QWERTY_Z, DEFAULT_QWERTY_X, DEFAULT_QWERTY_C, DEFAULT_QWERTY_V, DEFAULT_QWERTY_B, DEFAULT_QWERTY_N, DEFAULT_QWERTY_M, DEFAULT_QWERTY_COMM,   DEFAULT_QWERTY_DOT,DEFAULT_QWERTY_SLSH

#ifdef FARKANN_EXTRA_COLS
    #ifdef FARKANN_NUMBER_ROW
        #define ___DEFAULT_QWERTY_ROW_1___ KC_TAB,    ___DEFAULT_QWERTY_ROW_1___, KC_BSLS
    #else
        #define ___DEFAULT_QWERTY_ROW_1___ KC_TAB,    ___DEFAULT_QWERTY_ROW_1___, KC_BSPC
    #endif // FARKANN_NUMBER_ROW

    #define ___DEFAULT_QWERTY_ROW_2___ KC_CAPS,   ___DEFAULT_QWERTY_ROW_2___, KC_ENT
    #define ___DEFAULT_QWERTY_ROW_3___ KC_LSHFT,  ___DEFAULT_QWERTY_ROW_3___, KC_RSHFT
#endif // FARKANN_EXTRA_COLS
