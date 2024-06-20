#include QMK_KEYBOARD_H
#include "print.h"


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum layers { _BASE, _FIRST, _SECOND, _THIRD };

enum { TD_ESC_CAPS };

enum custom_keycodes {
    FIREFOX = SAFE_RANGE, // SAFE_RANGE prevents it from using a clashing keycode
	ITERM

};

void open_application(const char* app) {
    char buffer[100]; // Adjust the size as needed
    snprintf(buffer, sizeof(buffer), SS_LGUI(" ") SS_DELAY(100) "%s" SS_DELAY(500) SS_TAP(X_ENT), app);
    send_string(buffer);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FIREFOX:
            if (record->event.pressed) {
                open_application("firefox");
            } 
            break;
		case ITERM:
			if (record->event.pressed) {
                open_application("iterm");
            } 
            break;
		default:
			break;


    }
    return true;
}

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[_BASE] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TD(TD_ESC_CAPS),
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|

                                                                  KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT
                                                                  //`--------------------------'  `--------------------------'
                                                                  ),
                                                              [_FIRST] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, FIREFOX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ITERM, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

                                                                  KC_LGUI, _______, KC_SPC, KC_ENT, MO(3), KC_RALT
                                                                  //`--------------------------'  				`--------------------------'
                                                                  ),

                                                              [_SECOND] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                  KC_LGUI, MO(3), KC_SPC, KC_ENT, _______, KC_RALT
                                                                  //`--------------------------' 								 `--------------------------'
                                                                  ),

                                                              [_THIRD] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  QK_BOOT, QK_MAKE, QK_CLEAR_EEPROM, QK_REBOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, XXXXXXX, XXXXXXX,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

                                                                  KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
                                                                  //`--------------------------' 								 `--------------------------'
                                                                  )};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

typedef struct {
    uint8_t x;
    uint8_t y;
} Matrix;

Matrix matrixMap[54];
void   initializeMatrixMap(void) {
    // Initialize the matrix map with the given values
    matrixMap[6]  = (Matrix){3, 2}; // L SW19
    matrixMap[7]  = (Matrix){3, 1}; // L SW20
    matrixMap[8]  = (Matrix){3, 0}; // L SW21
    matrixMap[9]  = (Matrix){2, 5}; // L SW13
    matrixMap[10] = (Matrix){2, 4}; // L SW14
    matrixMap[11] = (Matrix){2, 3}; // L SW15
    matrixMap[12] = (Matrix){2, 2}; // L SW16
    matrixMap[13] = (Matrix){2, 1}; // L SW17
    matrixMap[14] = (Matrix){1, 5}; // L SW07
    matrixMap[15] = (Matrix){1, 4}; // L SW08
    matrixMap[16] = (Matrix){1, 3}; // L SW09
    matrixMap[17] = (Matrix){1, 2}; // L SW10
    matrixMap[18] = (Matrix){1, 1}; // L SW11
    matrixMap[19] = (Matrix){0, 5}; // L SW01
    matrixMap[20] = (Matrix){0, 4}; // L SW02
    matrixMap[21] = (Matrix){0, 3}; // L SW03
    matrixMap[22] = (Matrix){0, 2}; // L SW04
    matrixMap[23] = (Matrix){0, 1}; // L SW05
    matrixMap[24] = (Matrix){0, 0}; // L SW06
    matrixMap[25] = (Matrix){1, 0}; // L SW12
    matrixMap[26] = (Matrix){2, 0}; // L SW18
    matrixMap[33] = (Matrix){7, 2}; // R SW19
    matrixMap[34] = (Matrix){7, 1}; // R SW20
    matrixMap[35] = (Matrix){7, 0}; // R SW21
    matrixMap[36] = (Matrix){6, 5}; // R SW13
    matrixMap[37] = (Matrix){6, 4}; // R SW14
    matrixMap[38] = (Matrix){6, 3}; // R SW15
    matrixMap[39] = (Matrix){6, 2}; // R SW16
    matrixMap[40] = (Matrix){6, 1}; // R SW17
    matrixMap[41] = (Matrix){5, 5}; // R SW07
    matrixMap[42] = (Matrix){5, 4}; // R SW08
    matrixMap[43] = (Matrix){5, 3}; // R SW09
    matrixMap[44] = (Matrix){5, 2}; // R SW10
    matrixMap[45] = (Matrix){5, 1}; // R SW11
    matrixMap[46] = (Matrix){4, 5}; // R SW01
    matrixMap[47] = (Matrix){4, 4}; // R SW02
    matrixMap[48] = (Matrix){4, 3}; // R SW03
    matrixMap[49] = (Matrix){4, 2}; // R SW04
    matrixMap[50] = (Matrix){4, 1}; // R SW05
    matrixMap[51] = (Matrix){4, 0}; // R SW06
    matrixMap[52] = (Matrix){5, 0}; // R SW12
    matrixMap[53] = (Matrix){6, 0}; // R SW18
}

void f_row(uint8_t layer) {
    for (uint8_t index = 6; index < 27; index++) {
        if (keymap_key_to_keycode(layer, (keypos_t){matrixMap[index].y, matrixMap[index].x}) > KC_NO) {
            rgb_matrix_set_color(index, RGB_GREEN);
        } else {
            rgb_matrix_set_color(index, RGB_GOLDENROD);
        }
    }
    for (uint8_t index = 33; index < 54; index++) {
        if (keymap_key_to_keycode(layer, (keypos_t){matrixMap[index].y, matrixMap[index].x}) > KC_NO) {
            rgb_matrix_set_color(index, RGB_GREEN);
        } else {
            rgb_matrix_set_color(index, RGB_GOLDENROD);
        }
    }
}



// void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // If console is enabled, it will print the matrix position and status of each key pressed
// 	// #ifdef CONSOLE_ENABLE
//     //             uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
// 	// 			#endif

// 				switch (keycode) {
// 					case MO(1):
// 						rgb_matrix_disable_noeeprom();
//        					f_row(1);
// 						rgb_matrix_enable_noeeprom();
// 						#ifdef CONSOLE_ENABLE
// 						uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
// 						#endif
// 						break;
// 					default:
// 						break;

// 				}
// }

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

void test_row(uint8_t layer) {
	for (uint8_t index = 0; index < 37; index++) {
        rgb_matrix_set_color(index, RGB_GREEN);
    }
}


bool rgb_matrix_indicators_user(void) {
    rgblight_enable_noeeprom();
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);
        // f_row(layer);
		test_row(layer);

        // for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        //     for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
        //         uint8_t index = g_led_config.matrix_co[row][col];

        //         if (index >= led_min && index < led_max // && index != NO_LED
        // 		&& keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
        //             rgb_matrix_set_color(index, RGB_GREEN);
        //         }
        // 		else{
        // 			rgb_matrix_set_color(index, RGB_GOLDENROD);
        // 		}
        //     }
        // }
    }

    return true;
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_GRADIENT_LEFT_RIGHT);
    rgblight_sethsv_noeeprom(HSV_CORAL);
    initializeMatrixMap();

    // debug_enable=true;
    // debug_matrix=true;
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
    return state;
}
