/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers { BASE1, BASE2, MEDIA, NAV, MOUSE, SYM, NUM, FUN };

void rgb_matrix_indicators_user(void) {

	if(IS_LAYER_ON(BASE2)) {
		rgb_matrix_set_color(5,  128, 64, 0);
		rgb_matrix_set_color(6,   128, 64, 0);
		rgb_matrix_set_color(17,   128, 64, 0);
		rgb_matrix_set_color(18, 128, 64, 0);
		rgb_matrix_set_color(29,  128, 64, 0);
		rgb_matrix_set_color(30,   128, 64, 0);
		rgb_matrix_set_color(41,  128, 64, 0);
	}

	if(IS_LAYER_ON(MEDIA)) {
		rgb_matrix_set_color(5,  50, 10, 20);
		rgb_matrix_set_color(6,  50, 10, 20);
		rgb_matrix_set_color(17, 50, 10, 20);
		rgb_matrix_set_color(18, 50, 10, 20);
		rgb_matrix_set_color(29, 50, 10, 20);
		rgb_matrix_set_color(30, 50, 10, 20);
		rgb_matrix_set_color(41, 50, 10, 20);
	}

	if(IS_LAYER_ON(NAV)) {
		rgb_matrix_set_color(5,  0, 40, 50);
		rgb_matrix_set_color(6,  0, 40, 50);
		rgb_matrix_set_color(17, 0, 40, 50);
		rgb_matrix_set_color(18, 0, 40, 50);
		rgb_matrix_set_color(29, 0, 40, 50);
		rgb_matrix_set_color(30, 0, 40, 50);
		rgb_matrix_set_color(41, 0, 40, 50);
	}

	if(IS_LAYER_ON(MOUSE)) {
		rgb_matrix_set_color(5,  0, 0, 50);
		rgb_matrix_set_color(6,  0, 0, 50);
		rgb_matrix_set_color(17, 0, 0, 50);
		rgb_matrix_set_color(18, 0, 0, 50);
		rgb_matrix_set_color(29, 0, 0, 50);
		rgb_matrix_set_color(30, 0, 0, 50);
		rgb_matrix_set_color(41, 0, 0, 50);
	}

	if(IS_LAYER_ON(SYM)) {
		rgb_matrix_set_color( 5, 0, 50, 1.9);
		rgb_matrix_set_color( 6, 0, 50, 1.9);
		rgb_matrix_set_color(17, 0, 50, 1.9);
		rgb_matrix_set_color(18, 0, 50, 1.9);
		rgb_matrix_set_color(29, 0, 50, 1.9);
		rgb_matrix_set_color(30, 0, 50, 1.9);
		rgb_matrix_set_color(41, 0, 50, 1.9);
	}

	if(IS_LAYER_ON(NUM)) {
		rgb_matrix_set_color(5, 10, 0, 50);
		rgb_matrix_set_color(6, 10, 0, 50);
		rgb_matrix_set_color(17, 10, 0, 50);
		rgb_matrix_set_color(18, 10, 0, 50);
		rgb_matrix_set_color(29, 10, 0, 50);
		rgb_matrix_set_color(30, 10, 0, 50);
		rgb_matrix_set_color(41, 10, 0, 50);
	}

	if(IS_LAYER_ON(FUN)) {
		rgb_matrix_set_color(5, 50, 0, 0);
		rgb_matrix_set_color(6, 50, 0, 0);
		rgb_matrix_set_color(17, 50, 0, 0);
		rgb_matrix_set_color(18, 50, 0, 0);
		rgb_matrix_set_color(29, 50, 0, 0);
		rgb_matrix_set_color(30, 50, 0, 0);
		rgb_matrix_set_color(41, 50, 0, 0);
	}
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[BASE1] = LAYOUT_planck_mit(
		KC_Q,   KC_W,   KC_E,               KC_R,             KC_T,               TG(BASE2),  KC_NO,  KC_Y,             KC_U,              KC_I,             KC_O,    KC_P,
		KC_A,   KC_S,   KC_D,               KC_F,             KC_G,               KC_NO,      KC_NO,  KC_H,             KC_J,              KC_K,             KC_L,    KC_QUOT,
		KC_Z,   KC_X,   KC_C,               KC_V,             KC_B,               KC_NO,      KC_NO,  KC_N,             KC_M,              KC_COMM,          KC_DOT,  KC_SLSH,
		KC_NO,  KC_NO,  LT(MEDIA, KC_ESC),  LT(NAV, KC_SPC),  LT(MOUSE, KC_TAB),         KC_NO,       LT(SYM, KC_ENT),  LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),  KC_NO,   KC_NO
	),

	[BASE2] = LAYOUT_planck_mit(
		KC_Q,          KC_W,          KC_E,               KC_R,             KC_T,               TG(BASE2),  KC_NO,  KC_Y,             KC_U,              KC_I,             KC_O,            KC_P,
		LGUI_T(KC_A),  LALT_T(KC_S),  LCTL_T(KC_D),       LSFT_T(KC_F),     KC_G,               KC_NO,      KC_NO,  KC_H,             LSFT_T(KC_J),      LCTL_T(KC_K),     LALT_T(KC_L),    LGUI_T(KC_QUOT),
		KC_Z,          KC_X,          KC_C,               KC_V,             KC_B,               KC_NO,      KC_NO,  KC_N,             KC_M,              KC_COMM,          KC_DOT,          KC_SLSH,
		KC_NO,         KC_NO,         LT(MEDIA, KC_ESC),  LT(NAV, KC_SPC),  LT(MOUSE, KC_TAB),        KC_NO,        LT(SYM, KC_ENT),  LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),  KC_NO,           KC_NO
	),

	[MEDIA] = LAYOUT_planck_mit(
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,
		KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,
		KC_NO,    KC_ALGR,  KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,        KC_NO,         KC_MSTP,  KC_MPLY,  KC_MUTE,  KC_NO,    KC_NO
	),

	[NAV] = LAYOUT_planck_mit(
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    C(KC_S),  C(KC_V),  C(KC_C),  C(KC_X),  C(KC_Z),
		KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,   KC_NO,    KC_NO,    KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,
		KC_NO,    KC_ALGR,  KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,        KC_NO,         KC_ENT,   KC_BSPC,  KC_DEL,   KC_NO,    KC_NO
	),

	[MOUSE] = LAYOUT_planck_mit(
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    C(KC_S),  C(KC_V),  C(KC_C),  C(KC_X),  C(KC_Z),
		KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,
		KC_NO,    KC_ALGR,  KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_WH_R,
		KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,        KC_NO,         KC_BTN1,  KC_BTN3,  KC_BTN2,  KC_NO,    KC_NO
	),

	[SYM] = LAYOUT_planck_mit(
		KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RCBR,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BSPC,
		KC_COLN,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,   KC_NO,    KC_NO,    KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,
		KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ALGR,  KC_NO,
		KC_NO,    KC_NO,    KC_LPRN,  KC_RPRN,  KC_UNDS,        KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	),

	[NUM] = LAYOUT_planck_mit(
		KC_LBRC,  KC_7,   KC_8,    KC_9,  KC_RBRC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BSPC,
		KC_SCLN,  KC_4,   KC_5,    KC_6,  KC_EQL,    KC_NO,    KC_NO,    KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,
		KC_GRV,   KC_1,   KC_2,    KC_3,  KC_BSLS,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ALGR,  KC_NO,
		KC_NO,    KC_NO,  KC_DOT,  KC_0,  KC_MINS,        KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	),

	[FUN] = LAYOUT_planck_mit(
		KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    RESET,
		KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,   KC_NO,    KC_NO,    KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,
		KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ALGR,  KC_NO,
		KC_NO,   KC_NO,   KC_APP,  KC_SPC,  KC_TAB,         KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
	)

};

