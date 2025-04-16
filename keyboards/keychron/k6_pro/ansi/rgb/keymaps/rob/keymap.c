/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
  FN3,
};

enum {
  TD_PGUP_PGDN = 0,
  TD_CTRLZ,
  TD_ESC_CAPS,
};
/*
DdgfdfsISFJsgF* fsad sad fasdf jkkj fdas j
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[MAC_BASE] = LAYOUT_ansi_68(
     KC_GRV,                KC_1,  KC_2,   KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL, LALT(KC_BSPC) ,         RGB_TOG,
     KC_TAB,       KC_Q,  KC_W,   KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,               KC_VOLU,
     MT(MOD_LCTL, KC_ESC),  KC_A,  KC_S,   KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,    KC_SCLN,  KC_QUOT,       MT(MOD_RGUI, KC_ENT),      KC_VOLD,
     MT(MOD_LSFT, KC_DEL),  KC_Z,  KC_X,   KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,KC_DOT,  MT(MOD_RSFT,KC_SLSH),MT(MOD_RSFT, KC_BSPC),  KC_UP, KC_MPLY,
     KC_LCTL,  KC_LOPTN, KC_LCMMD, KC_SPC,                                            MO(FN2),MO(MAC_FN1),TG(FN2),          KC_LEFT,    KC_DOWN,   KC_RGHT),

[WIN_BASE] = LAYOUT_ansi_68(
     KC_GRV,                KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,   KC_7,  KC_8,   KC_9,   KC_0,     KC_MINS,    KC_EQL,  LCTL(KC_BSPC) ,       RGB_TOG,
     MT(MOD_LALT, KC_TAB),  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,             KC_VOLU,
     TD(TD_ESC_CAPS),       KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,  KC_QUOT,    MT(MOD_RALT, KC_ENT),          KC_VOLD,
     MT(MOD_LSFT, KC_DEL),  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,   KC_M,  KC_COMM,KC_DOT, MT(MOD_RSFT,KC_SLSH), MT(MOD_RSFT, KC_BSPC), KC_UP,  KC_MPLY,
     KC_LALT ,  KC_LGUI,  TD(TD_CTRLZ),  KC_SPC,                                              MO(FN2), MO(WIN_FN1),TG(FN3),       KC_LEFT,  KC_DOWN,KC_RGHT),

[MAC_FN1] = LAYOUT_ansi_68(
     KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_FN1] = LAYOUT_ansi_68(
     KC_GRV,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[FN2] = LAYOUT_ansi_68(

     KC_NO,    KC_F1,       KC_F2,  KC_F3,    KC_F4,      KC_F5,       KC_F6,          KC_F7,         KC_F8,  KC_F9,  KC_F10,   KC_F11,    KC_F12,    KC_F13,   KC_F14,
     KC_TRNS,  KC_EXCLAIM,  KC_AT,  KC_HASH,  KC_DOLLAR,  KC_PERCENT,  KC_CIRCUMFLEX,  KC_AMPERSAND,  KC_ASTERISK,  KC_LEFT_PAREN,  KC_RIGHT_PAREN,  KC_UNDERSCORE,  KC_PLUS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TD(TD_PGUP_PGDN),  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_VAI,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_HUD,  RGB_VAD  ,  RGB_HUI),

[FN3] = LAYOUT_ansi_68(
     KC_NO,    KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_KP_0,  KC_MINUS, KC_EQUAL, KC_BSPC, KC_DEL,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};

bool ctrlz_held = false;

void td_ctrlz_finished(tap_dance_state_t *state, void *user_data) {
  if (state->pressed && !state->interrupted && state->count == 1) {
    ctrlz_held = true;
    register_code(KC_LCTL);
  } else if (state->count == 1) {
    // Tap = Ctrl+Z
    register_code(KC_LCTL);
    tap_code(KC_Z);
    unregister_code(KC_LCTL);
  }
}

void td_ctrlz_reset(tap_dance_state_t *state, void *user_data) {
  if (ctrlz_held) {
    ctrlz_held = false;
    unregister_code(KC_LCTL);
  }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_CTRLZ] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_ctrlz_finished, td_ctrlz_reset),
    [TD_PGUP_PGDN] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, KC_PGUP),
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};


static uint8_t last_hue = 0;
static uint8_t last_sat = 0;
static uint8_t last_val = 0;

void set_rgb(uint8_t h, uint8_t s, uint8_t v) {
    if (h != last_hue || s != last_sat || v != last_val) {
        rgb_matrix_sethsv_noeeprom(h, s, v);
        last_hue = h;
        last_sat = s;
        last_val = v;
    }
}

typedef enum {
    STYLE_NONE,
    STYLE_TEXT,
    STYLE_MOD,
    STYLE_MEDIA,
    STYLE_MOUSE,
    STYLE_SYSTEM,
    STYLE_LAYER_SWITCH,
    STYLE_SPECIAL,
} visual_style_t;

visual_style_t visual_style_for_keycode(uint16_t kc) {
    if (IS_MODIFIER_KEYCODE(kc)) return STYLE_MOD;
    if (IS_CONSUMER_KEYCODE(kc)) return STYLE_MEDIA;
    if (IS_MOUSE_KEYCODE(kc)) return STYLE_MOUSE;
    if (IS_SYSTEM_KEYCODE(kc)) return STYLE_SYSTEM;
    if ( IS_BASIC_KEYCODE(kc)) return STYLE_TEXT;
    if ( IS_QK_LAYER_TAP(kc) || IS_QK_MOD_TAP(kc) || IS_QK_MOMENTARY(kc) || IS_QK_LAYER_TAP_TOGGLE(kc)) {
        return STYLE_LAYER_SWITCH;
    }
    return STYLE_SPECIAL;
}

void rgb_for_style(visual_style_t style, uint8_t* r, uint8_t* g, uint8_t* b, uint8_t dr, uint8_t dg, uint8_t db) {
    switch (style) {
        case STYLE_MOD:           *r = 0;   *g = 255; *b = 100; break;
        case STYLE_MEDIA:         *r = 255; *g = 100; *b = 255; break;
        case STYLE_MOUSE:         *r = 255; *g = 100; *b = 100; break;
        case STYLE_SYSTEM:        *r = 100; *g = 100; *b = 255; break;
        case STYLE_LAYER_SWITCH:  *r = 255; *g = 255; *b = 0;   break;
        case STYLE_TEXT:          *r = 255; *g = 255; *b = 255; break;
        case STYLE_SPECIAL:       *r = 0;   *g = 200; *b = 200; break;
        default:                  *r = dr;   *g = dg;   *b = db;   break;
    }
}


void highlight_layer(uint8_t layer, uint8_t dr, uint8_t dg, uint8_t db) {

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            keypos_t pos = { .row = row, .col = col };
            uint16_t kc = keymap_key_to_keycode(layer, pos);
            if (kc != KC_TRNS && kc != KC_NO) {
                uint8_t led_index = row * MATRIX_COLS + col;

                uint8_t r, g, b;
                visual_style_t style = visual_style_for_keycode(kc);
                rgb_for_style(style, &r, &g, &b, dr, dg, db);
                r = (r * dr) / 255;
                g = (g * dg) / 255;
                b = (b * db) / 255;

                rgb_matrix_set_color(led_index, r, g, b);
            }
        }
    }
}

bool led_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        set_rgb(0, 255, 0);
    } else {
        set_rgb(0, 0, 0);
    }
    return false;
}

void matrix_scan_user(void) {

    if (layer_state_is(FN2)) {
        highlight_layer(FN2, 240, 80, 0);
    } else if (layer_state_is(FN3)) {
        highlight_layer(FN3, 0, 255, 0);
    } else if (layer_state_is(MAC_FN1) || layer_state_is(WIN_FN1)) {
        highlight_layer(WIN_FN1,200,255,255);
    } else {
        highlight_layer(MAC_BASE, 0, 0, 255);
    }
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv(0, 0, 100);
}

