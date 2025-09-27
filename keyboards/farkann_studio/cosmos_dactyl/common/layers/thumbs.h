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
** This file contains the different possibilities our keyboards can have for the Thumb Clusters.
*/

#pragma once

#include QMK_KEYBOARD_H

#ifdef FARKANN_POWER_USER
#define L1 LSFT_T(MAGIC)
#define L2 MEH_T(KC_SPC)
#define L3 LGUI_T(KC_ESC)
#define L4 LCTL_T(S(KC_TAB))
#define L5 LALT_T(KC_TAB)
#define L6 KC_PGDN
#define R1 RSFT_T(KC_BSPC)
#define R2 RALT_T(KC_ENT)
#define R3 RCTL_T(ARCANE)
#define R4 RGUI_T(KC_DEL)
#define R5 KC_HOME
#define R6 KC_END
#else
#define L1 KC_SPC
#define L2 KC_ESC
#define L3 KC_PGUP
#define L4 S(KC_TAB)
#define L5 KC_TAB
#define L6 KC_PGDN // RAISE | LOWER
#define R1 KC_BSPC
#define R2 KC_ENT
#define R3 KC_LSFT
#define R4 KC_RCTL
#define R5 KC_RALT
#define R6 KC_RGUI
#endif // FARKANN_POWER_USER

// #if THUMBCLUSTER == 2x2
// #define __THUMBS__________ L1, L2, R1, R2
// #elif THUMBCLUSTER == 2x3
// #define __THUMBS__________ L1, L2, R1, R2, R3
// #elif THUMBCLUSTER == 2x4
// #define __THUMBS__________ L1, L2, R1, R2, R3, R4
// #elif THUMBCLUSTER == 2x5
// #define __THUMBS__________ L1, L2, R1, R2, R3, R4, R5
// #elif THUMBCLUSTER == 2x6
// #define __THUMBS__________ L1, L2, R1, R2, R3, R4, R5, R6
// #elif THUMBCLUSTER == 3x2
// #define __THUMBS__________ L1, L2, L3, R1, R2
// #elif THUMBCLUSTER == 3x3
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3
// #elif THUMBCLUSTER == 3x4
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, R4
// #elif THUMBCLUSTER == 3x5
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, R4, R5
// #elif THUMBCLUSTER == 3x6
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, R4, R5, R6
// #elif THUMBCLUSTER == 4x2
// #define __THUMBS__________ L1, L2, L3, R1, R2, L4
// #elif THUMBCLUSTER == 4x3
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4,
// #elif THUMBCLUSTER == 4x4
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, R4
// #elif THUMBCLUSTER == 4x5
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, R4, R5
// #elif THUMBCLUSTER == 4x6
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, R4, R5, R6
// #elif THUMBCLUSTER == 5x2
// #define __THUMBS__________ L1, L2, L3, R1, R2, L4, L5
// #elif THUMBCLUSTER == 5x3
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5
// #elif THUMBCLUSTER == 5x4
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, R4
// #elif THUMBCLUSTER == 5x5
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, R4, R5
// #elif THUMBCLUSTER == 5x6
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, R4, R5, R6
// #elif THUMBCLUSTER == 6x2
// #define __THUMBS__________ L1, L2, L3, R1, R2, L5, L6
// #elif THUMBCLUSTER == 6x3
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, L6
#if THUMBCLUSTER_LEFT == 6
#if THUMBCLUSTER_RIGHT == 4
#define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, L6, R4
// #elif THUMBCLUSTER == 6x5
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, L6, R4, R5
// #elif THUMBCLUSTER == 6x6
// #define __THUMBS__________ L1, L2, L3, R1, R2, R3, L4, L5, L6, R4, R5, R6
#endif // THUMBCLUSTER_LEFT
#endif // THUMBCLUSTER_RIGHT
