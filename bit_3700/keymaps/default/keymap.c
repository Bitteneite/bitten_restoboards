// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*
	*
	*/

	[0] = LAYOUT_3700(
	
		KC_ESCAPE,
		KC_LCTRL,
		KC_LALT,
		KC_BSPACE,
		
		KC_NUMLOCK,
		KC_KP_SLASH,
		KC_KP_ASTERISK,
		KC_KP_MINUS,
		
		KC_KP_7,
		KC_KP_8,
		KC_KP_9,
		KC_KP_PLUS,
		
		KC_KP_4,
		KC_KP_5,
		KC_KP_6,
		
		KC_KP_1,
		KC_KP_2,
		KC_KP_3,
		KC_KP_ENTER,
		
		KC_KP_0,
		KC_KP_DOT
	)
};
