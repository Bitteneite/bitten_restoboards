// Copyright 2023 Abdullah (@BittenEite)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <config.h>

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

// Vial
#define VIAL_KEYBOARD_UID {0xD7, 0x66, 0x33, 0xD8, 0xBC, 0x42, 0x3B, 0x54}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// 2KRO
#define MATRIX_HAS_GHOST

// Soldenoid
#define SOLENOID_DEFAULT_DWELL 14 
#define SOLENOID_MAX_DWELL 20
#define SOLENOID_MIN_DWELL 6
#define SOLENOID_PIN B1

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
