#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum layers {
    _BASE,
    _FIRST,
    _SECOND,
    _THIRD
};

// #   define RGBLIGHT_EFFECT_SNAKE

enum {
    TD_ESC_CAPS,
	TD_SFT_CWRD
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
	[TD_SFT_CWRD] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT,CW_TOGG)
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x6_3(
		  	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
			KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                     						KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		  	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
			 KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                   						KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
			//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
			TD(TD_SFT_CWRD), KC_Z, KC_X, KC_C, KC_V, KC_B,                    						KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TD(TD_ESC_CAPS),
			//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
			
				                    				KC_LGUI, MO(1), KC_SPC,              KC_ENT, MO(2), KC_RALT
			                                      //`--------------------------'  `--------------------------'
												  										),
	[_FIRST] = LAYOUT_split_3x6_3(
			//,-----------------------------------------------------.                    ,-----------------------------------------------------.
			KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                     					KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, 
	        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,          				 XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, 
  			//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|				
			KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
			
		                    KC_LGUI, _______, KC_SPC,                     KC_ENT, MO(3), KC_RALT
							//`--------------------------'  				`--------------------------'
							),
							
	[_SECOND] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, 
  		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, 
  		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD, 
		//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                    KC_LGUI, MO(3), KC_SPC,                                         KC_ENT, _______, KC_RALT
						//`--------------------------' 								 `--------------------------'
						),

	[_THIRD] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		QK_BOOT, QK_MAKE, QK_CLEAR_EEPROM, QK_REBOOT, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
  		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                          XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, XXXXXXX, XXXXXXX, 
  		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
					  
                    KC_LGUI, _______, KC_SPC,                                         KC_ENT, _______, KC_RALT
					 //`--------------------------' 								 `--------------------------'
					 )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
	for (int i = 6; i < 9; i++) {
    rgb_matrix_set_color(i, RGB_AZURE);
	}
	for (int i = 33; i < 36; i++) {
    rgb_matrix_set_color(i, RGB_AZURE);
	}
	return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {
		
	switch (get_highest_layer(state)) {
    case _BASE:
        rgblight_enable_noeeprom();
    	rgblight_sethsv_noeeprom(HSV_CORAL);
		
        break;
    case _FIRST:
        rgblight_enable_noeeprom();	
		rgblight_sethsv_noeeprom(HSV_GOLDENROD);
        break;
    case _SECOND:
        rgblight_enable_noeeprom();
    	rgblight_sethsv_noeeprom(HSV_SPRINGGREEN);
        break;
    case _THIRD:
        rgblight_enable_noeeprom();
    	rgblight_sethsv_noeeprom(HSV_TURQUOISE);
        break;
    default: //  for any other layers, or the default layer
        rgblight_enable_noeeprom();
    	rgblight_sethsv_noeeprom(HSV_WHITE);
        break;
    }
	// rgblight_setrgb_range(255, 255, 255, 6, 9); 
  return state;
}

