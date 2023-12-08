/*
                                ▓▒░ M0118 Default Keymap ░▒▓
╔══════════════════════════════════════════════════════════════════════════════════════════╗
║                         ┌───────┐                                                        ║
║                         │       │                                                        ║
║                         └───────┘                                                        ║
║     ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐    ┌───┬───┬───┬───┐     ║
║     │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ + │     │    │Num│ = │ / │ * │     ║
║     ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤    ├───┼───┼───┼───┤     ║
║     │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │   │    │ 7 │ 8 │ 9 │ + │     ║
║     ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │    ├───┼───┼───┼───┤     ║
║     │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │  │    │ 4 │ 5 │ 6 │ - │     ║
║     ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬┴──┤    ├───┼───┼───┼───┤     ║
║     │    │   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    │   │    │ 1 │ 2 │ 3 │   │     ║
║     ├────┼───┴─┬─┴───┴┬──┴───┴───┴───┴───┴─┬─┴───┴┬──┴┬───┼───┤    ├───┴───┼───┤   │     ║
║     │    │     │      │                    │      │   │   │   │    │   0   │ . │   │     ║
║     └────┴─────┴──────┴────────────────────┴──────┴───┴───┴───┘    └───────┴───┴───┘     ║
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
		KC_ESCAPE,
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
		KC_NUMLOCK,
		KC_KP_EQUAL,
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
		KC_KP_7,
		KC_KP_8,
		KC_KP_9,
		KC_KP_PLUS,
		
		// Row 3
		MO(1),
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
		KC_NONUS_HASH,
		KC_KP_4,
		KC_KP_5,
		KC_KP_6,
		KC_KP_MINUS,
		
		// Row 4
		KC_LSFT,
		KC_NONUS_BSLASH,
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
		KC_UP,
		KC_KP_1,
		KC_KP_2,
		KC_KP_3,
		KC_KP_ENTER,
		
		// Row 5
		KC_LCTL,
		KC_LGUI,
		KC_NO,
		KC_LALT,
		
		KC_SPC,
		
		KC_NO,
		KC_RALT,
		KC_LEFT,
		KC_RIGHT,
		KC_DOWN,
		KC_KP_0,
		KC_KP_DOT
	),
	
	// Layer 1: The missing stuff. 40% Enjoyers love those!
	[1] = LAYOUT_m0116(
	
		// Row 0
		KC_PSCREEN,
		
		// Row 1
		KC_GRAVE,
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
		KC_DELETE,
		KC_CALC,
		KC_TRNS,
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
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		// Row 3
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
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		// Row 4
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
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		
		// Row 5
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		
		KC_TRNS,
		
		KC_NO,
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
		HPT_RST,
		KC_TRNS,
		KC_TRNS,
		HPT_FBK,
		
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
		KC_TRNS, 
		KC_TRNS, 
		KC_TRNS,
		HPT_DWLI,
		
		// Row 3
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
		KC_TRNS,  
		KC_TRNS,
		HPT_DWLD,
		
		// Row 4
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
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		HPT_TOG,
		
		// Row 5
		KC_TRNS,
		KC_TRNS,
		KC_NO,
		KC_TRNS,
		
		KC_TRNS,
		
		KC_NO,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS,
		KC_TRNS
	)
};
