// Copyright 2023 Abdullah (@BittenEite)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <config.h>

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

// Vial
#define VIAL_KEYBOARD_UID {0x40, 0xBF, 0x1F, 0xCB, 0xD1, 0x06, 0xC3, 0xEA}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Soldenoid
// #define SOLENOID_DEFAULT_DWELL 10 
// #define SOLENOID_MAX_DWELL 20
// #define SOLENOID_MIN_DWELL 5
// #define SOLENOID_PIN 

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
