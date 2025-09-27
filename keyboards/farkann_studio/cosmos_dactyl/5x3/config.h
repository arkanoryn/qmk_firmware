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

// #if THUMBCLUSTER == "2_2"
//     #define LAYOUT LAYOUT_5x3_2x2
// #elif THUMBCLUSTER == "2_3"
//     #define LAYOUT LAYOUT_5x3_2x3
// #elif THUMBCLUSTER == "2_4"
//     #define LAYOUT LAYOUT_5x3_2x4
// #elif THUMBCLUSTER == "2_5"
//     #define LAYOUT LAYOUT_5x3_2x5
// #elif THUMBCLUSTER == "2_6"
//     #define LAYOUT LAYOUT_5x3_2x6
// #elif THUMBCLUSTER == "3_2"
//     #define LAYOUT LAYOUT_5x3_3x2
// #elif THUMBCLUSTER == "3_3"
//     #define LAYOUT LAYOUT_5x3_3x3
// #elif THUMBCLUSTER == "3_4"
//     #define LAYOUT LAYOUT_5x3_3x4
// #elif THUMBCLUSTER == "3_5"
//     #define LAYOUT LAYOUT_5x3_3x5
// #elif THUMBCLUSTER == "3_6"
//     #define LAYOUT LAYOUT_5x3_3x6
// #elif THUMBCLUSTER == "4_2"
//     #define LAYOUT LAYOUT_5x3_4x2
// #elif THUMBCLUSTER == "4_3"
//     #define LAYOUT LAYOUT_5x3_4x3
// #elif THUMBCLUSTER == "4_4"
//     #define LAYOUT LAYOUT_5x3_4x4
// #elif THUMBCLUSTER == "4_5"
//     #define LAYOUT LAYOUT_5x3_4x5
// #elif THUMBCLUSTER == "4_6"
//     #define LAYOUT LAYOUT_5x3_4x6
// #elif THUMBCLUSTER == "5_2"
//     #define LAYOUT LAYOUT_5x3_5x2
// #elif THUMBCLUSTER == "5_3"
//     #define LAYOUT LAYOUT_5x3_5x3
// #elif THUMBCLUSTER == "5_4"
//     #define LAYOUT LAYOUT_5x3_5x4
// #elif THUMBCLUSTER == "5_5"
//     #define LAYOUT LAYOUT_5x3_5x5
// #elif THUMBCLUSTER == "5_6"
//     #define LAYOUT LAYOUT_5x3_5x6
// #elif THUMBCLUSTER == "6_2"
//     #define LAYOUT LAYOUT_5x3_6x2
// #elif THUMBCLUSTER == "6_3"
//     #define LAYOUT LAYOUT_5x3_6x3
#if THUMBCLUSTER_LEFT == 6
#if THUMBCLUSTER_RIGHT == 4
    #define LAYOUT(...) LAYOUT_5x3_6x4(__VA_ARGS__)
// #elif THUMBCLUSTER == "6_5"
//     #define LAYOUT LAYOUT_5x3_6x5
// #elif THUMBCLUSTER == "6_6"
//     #define LAYOUT LAYOUT_5x3_6x6
#endif // THUMBCLUSTER_LEFT
#endif // THUMBCLUSTER_RIGHT
