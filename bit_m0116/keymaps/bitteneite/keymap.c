/*
                                ▓▒░ BittenEite's Keymap ░▒▓
╔══════════════════════════════════════════════════════════════════════════════════════════╗
║                         ┌───────┐                                                        ║
║                         │       │                                                        ║
║                         └───────┘                                                        ║
║     ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐    ┌───┬───┬───┬───┐     ║
║     │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ + │     │    │Num│ = │ / │ * │     ║
║     ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤    ├───┼───┼───┼───┤     ║
║     │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │   │    │ 7 │ 8 │ 9 │ + │     ║
║     ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘   │    ├───┼───┼───┼───┤     ║
║     │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │      │    │ 4 │ 5 │ 6 │ - │     ║
║     ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤    ├───┼───┼───┼───┤     ║
║     │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │        │    │ 1 │ 2 │ 3 │   │     ║
║     ├───┬───┬┴───┴─┬─┴─┬─┴───┴───┴───┴───┴┬──┴┬──┴┬──┴┬───┬───┤    ├───┴───┼───┤   │     ║
║     │   │   │      │   │                  │   │   │   │   │   │    │   0   │ . │   │     ║
║     └───┴───┴──────┴───┴──────────────────┴───┴───┴───┴───┴───┘    └───────┴───┴───┘     ║
╚══════════════════════════════════════════════════════════════════════════════════════════╝

├─────────  ◒ General Bittens Electrics Incorporated © 1992. No Rights Reserved  ──────────┤
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Base Layer: The basic stuff... duh!
	[0] = LAYOUT_m0116(
	
		// Row 0
		OSL(2),
		
		// Row 1
		KC_GESC,
		KC_1,
		KC_2,
		KC_3,
		KC_4,
		KC_5,
		KC_6,
		KC_7,
		KC_8,
		KC_9,
		KC_0,
		KC_MINS,
		KC_EQL,
		KC_BSPC,
		KC_PSCREEN,
		KC_DEL,
		KC_KP_SLASH,
		KC_KP_ASTERISK,
		
		// Row 2
		KC_TAB,
		KC_Q,
		KC_W,
		KC_E,
		KC_R,
		KC_T,
		KC_Y,
		KC_U,
		KC_I,
		KC_O,
		KC_P,
		KC_LBRC,
		KC_RBRC,
		KC_ENT,
		KC_7,
		KC_8,
		KC_9,
		KC_PMNS,
		
		// Row 3
		KC_LCTL,
		KC_A,
		KC_S,
		KC_D,
		KC_F,
		KC_G,
		KC_H,
		KC_J,
		KC_K,
		KC_L,
		KC_SCLN,
		KC_QUOT,
		KC_NO,
		KC_4,
		KC_5,
		KC_6,
		KC_PPLS,
		
		// Row 4
		KC_LSFT,
		KC_NO,
		KC_Z,
		KC_X,
		KC_C,
		KC_V,
		KC_B,
		KC_N,
		KC_M,
		KC_COMM,
		KC_DOT,
		KC_SLASH,
		KC_RSHIFT,
		KC_NO,
		KC_1,
		KC_2,
		KC_3,
		KC_PENT,
		
		// Row 5
		MO(1),
		KC_LCTL,
		KC_LGUI,
		KC_LALT,
		
		KC_SPC,
		
		KC_BSLASH,
		KC_LEFT,
		KC_DOWN,
		KC_UP,
		KC_RIGHT,
		KC_0,
		KC_DOT
	),
	
	// Layer 1: The missing stuff. 40% Enjoyers love those!
	[1] = LAYOUT_m0116(
	
		// Row 0
		KC_TRNS,
		
		// Row 1
		KC_TRNS,
		KC_F1,
		KC_F2,
		KC_F3,
		KC_F4,
		KC_F5,
		KC_F6,
		KC_F7,
		KC_F8,
		KC_F9,
		KC_F10,
		KC_F11,
		KC_F12,
		LCTL(KC_W),
		RCS(KC_PGUP),
		RCS(KC_SPACE),
		RCS(KC_PGDOWN),
		LCTL(KC_T),
		
		// Row 2
		KC_TRNS,
		KC_TRNS,
		KC_UP,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		RCS(KC_TAB),
		KC_F6,
		LCTL(KC_TAB),
		KC_TRNS,
		
		// Row 3
		KC_TRNS,
		KC_LEFT,
		KC_DOWN,
		KC_RIGHT,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_PPLS,
		
		// Row 4
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		// Row 5
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		KC_TRNS,
		
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS
	),
	
	// Layer 2: The scary basement. No one comes down here often!
	[2] = LAYOUT_m0116(
	
		// Row 0
		LALT(KC_F4),
		
		// Row 1
		QK_BOOTLOADER,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_NUM,
		KC_CALC,
		KC_TRNS,
		KC_TRNS,
		
		// Row 2
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_INSERT, 
		KC_HOME, 
		KC_PGUP,
		KC_TRNS,
		
		// Row 3
		KC_CAPS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_DELETE, 
		KC_END,  
		KC_PGDOWN,
		KC_TRNS,
		
		// Row 4
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		// Row 5
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		KC_TRNS,
		
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS
	)
};
