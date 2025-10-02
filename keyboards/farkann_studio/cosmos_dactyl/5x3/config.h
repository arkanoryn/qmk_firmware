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

#define THUMBCLUSTER_LEFT 6
#define THUMBCLUSTER_RIGHT 4

#define FARKANN_SCREEN_ROTATION         QP_ROTATION_0
#define FARKANN_SCREEN_WIDTH            128
#define FARKANN_SCREEN_HEIGHT           160
#define FARKANN_SCREEN_SPI_DIVISOR      0
#define FARKANN_SCREEN_SPI_MODE         4

#define FARKANN_SCREEN_2_ROTATION       QP_ROTATION_90
#define FARKANN_SCREEN_2_WIDTH          128
#define FARKANN_SCREEN_2_HEIGHT         160
#define FARKANN_SCREEN_2_SPI_DIVISOR    0
#define FARKANN_SCREEN_2_SPI_MODE       4

#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 10000

#if THUMBCLUSTER_LEFT == 2
#   if THUMBCLUSTER_RIGHT == 2
#       define LAYOUT(...) LAYOUT_5x3_2x2(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 3
#       define LAYOUT(...) LAYOUT_5x3_2x3(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 4
#       define LAYOUT(...) LAYOUT_5x3_2x4(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 5
#       define LAYOUT(...) LAYOUT_5x3_2x5(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 6
#       define LAYOUT(...) LAYOUT_5x3_2x6(__VA_ARGS__)
#   endif // THUMBCLUSTER_RIGHT
#elif THUMBCLUSTER_LEFT == 3
#   if THUMBCLUSTER_RIGHT == 2
#       define LAYOUT(...) LAYOUT_5x3_3x2(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 3
#       define LAYOUT(...) LAYOUT_5x3_3x3(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 4
#       define LAYOUT(...) LAYOUT_5x3_3x4(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 5
#       define LAYOUT(...) LAYOUT_5x3_3x5(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 6
#       define LAYOUT(...) LAYOUT_5x3_3x6(__VA_ARGS__)
#   endif // THUMBCLUSTER_RIGHT
#elif THUMBCLUSTER_LEFT == 4
#   if THUMBCLUSTER_RIGHT == 2
#       define LAYOUT(...) LAYOUT_5x3_4x2(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 3
#       define LAYOUT(...) LAYOUT_5x3_4x3(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 4
#       define LAYOUT(...) LAYOUT_5x3_4x4(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 5
#       define LAYOUT(...) LAYOUT_5x3_4x5(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 6
#       define LAYOUT(...) LAYOUT_5x3_4x6(__VA_ARGS__)
#   endif // THUMBCLUSTER_RIGHT
#elif THUMBCLUSTER_LEFT == 5
#   if THUMBCLUSTER_RIGHT == 2
#       define LAYOUT(...) LAYOUT_5x3_5x2(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 3
#       define LAYOUT(...) LAYOUT_5x3_5x3(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 4
#       define LAYOUT(...) LAYOUT_5x3_5x4(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 5
#       define LAYOUT(...) LAYOUT_5x3_5x5(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 6
#       define LAYOUT(...) LAYOUT_5x3_5x6(__VA_ARGS__)
#   endif // THUMBCLUSTER_RIGHT
#elif THUMBCLUSTER_LEFT == 6
#   if THUMBCLUSTER_RIGHT == 2
#       define LAYOUT(...) LAYOUT_5x3_6x2(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 3
#       define LAYOUT(...) LAYOUT_5x3_6x3(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 4
#       define LAYOUT(...) LAYOUT_5x3_6x4(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 5
#       define LAYOUT(...) LAYOUT_5x3_6x5(__VA_ARGS__)
#   elif THUMBCLUSTER_RIGHT == 6
#       define LAYOUT(...) LAYOUT_5x3_6x6(__VA_ARGS__)
#   endif // THUMBCLUSTER_RIGHT
#endif // THUMBCLUSTER_LEFT
