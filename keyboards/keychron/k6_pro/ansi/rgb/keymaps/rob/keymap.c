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
#include "tapdance.h"

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
  FN3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[MAC_BASE] = LAYOUT_ansi_68(
     KC_GRV,                KC_1,  KC_2,   KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL, LALT(KC_BSPC) ,         RGB_TOG,
     MT(MOD_LALT, KC_TAB),  KC_Q,  KC_W,   KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,               KC_VOLU,
     TD(TD_ESC_CAPS),       KC_A,  KC_S,   KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,    KC_SCLN,  KC_QUOT,  MT(MOD_RGUI, KC_ENT),      KC_VOLD,
     MT(MOD_LSFT, KC_DEL),  KC_Z,  KC_X,   KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,KC_DOT,  MT(MOD_RSFT,KC_SLSH),MT(MOD_RSFT, KC_BSPC),  KC_UP, KC_MPLY,
     KC_LCTL,  KC_LOPTN, KC_LCMMD, KC_SPC,                                            MO(FN2),MO(MAC_FN1),TG(FN3),          KC_LEFT,    KC_DOWN,   KC_RGHT),

[WIN_BASE] = LAYOUT_ansi_68(
     KC_GRV,                KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,   KC_7,  KC_8,   KC_9,   KC_0,     KC_MINS,    KC_EQL,      LCTL(KC_BSPC),    RGB_TOG,
     MT(MOD_LALT, KC_TAB),  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,     KC_LBRC,    KC_RBRC,     KC_BSLS,          KC_VOLU,
     TD(TD_ESC_CAPS),       KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,  KC_QUOT,    MT(MOD_RALT, KC_ENT),          KC_VOLD,
     MT(MOD_LSFT, KC_DEL),  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,   KC_M,  KC_COMM,KC_DOT, MT(MOD_RSFT,KC_SLSH), MT(MOD_RSFT, KC_BSPC), KC_UP,  KC_MPLY,
     KC_LALT ,  KC_LGUI,  TD(TD_CTRLZ),  KC_SPC,                                              MO(FN2), MO(WIN_FN1),TG(FN3),      KC_LEFT,  KC_DOWN,KC_RGHT),

[MAC_FN1] = LAYOUT_ansi_68(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  RGB_TOG,
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

     KC_NO,    KC_F1,       KC_F2,    KC_F3,    KC_F4,             KC_F5,       KC_F6,          KC_F7,         KC_F8,       KC_F9,          KC_F10,         KC_F11,        KC_F12,  KC_F13,   KC_F14,
     KC_TRNS,  KC_EXCLAIM,  KC_AT,    KC_HASH,  KC_DOLLAR,         KC_PERCENT,  KC_CIRCUMFLEX,  KC_AMPERSAND,  KC_ASTERISK, KC_LEFT_PAREN,  KC_RIGHT_PAREN, KC_UNDERSCORE, KC_PLUS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,  TD(TD_PGDN_PGUP),  KC_HOME,     KC_LEFT,        KC_DOWN,       KC_UP,       KC_RGHT,        KC_END,         KC_TRNS,            KC_TRNS,      KC_TRNS,
     KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS,       KC_TRNS,     KC_TRNS,                                    KC_TRNS,    RGB_VAI,  KC_TRNS,
     KC_TRNS,  KC_TRNS,     KC_TRNS,                               KC_TRNS,                                                       KC_TRNS,       KC_TRNS,     KC_TRNS,      RGB_HUD,RGB_VAD,  RGB_HUI),

[FN3] = LAYOUT_ansi_68(
     KC_NO,    KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_KP_0,  KC_MINUS, KC_EQUAL, KC_BSPC,  KC_DEL,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};


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

void rgb_for_style(visual_style_t style, uint8_t* r, uint8_t* g, uint8_t* b) {
    switch (style) {
        case STYLE_MOD:           *r = 0;   *g = 255; *b = 100; break;
        case STYLE_MEDIA:         *r = 255; *g = 100; *b = 255; break;
        case STYLE_MOUSE:         *r = 255; *g = 100; *b = 100; break;
        case STYLE_SYSTEM:        *r = 100; *g = 100; *b = 255; break;
        case STYLE_LAYER_SWITCH:  *r = 255; *g = 255; *b = 0;   break;
        case STYLE_TEXT:          *r = 255; *g = 255; *b = 255; break;
        case STYLE_SPECIAL:       *r = 0;   *g = 200; *b = 200; break;
        default:                  *r = 0;   *g = 0;   *b = 0;   break;
    }
}

static uint8_t last_layer = -1;
static uint32_t layer_switch_time = 0;
static bool layer_preview_active = false;

void highlight_layer(uint8_t layer ) {
    uint8_t dr, dg, db;
    const uint8_t WHITE[3] = { 64, 64, 64 };
    const uint8_t RED[3] = {180, 64, 64};

    bool is_preview = layer_preview_active && (timer_elapsed(layer_switch_time) > 400);
    if (is_preview) {
        layer_preview_active = false;
    }

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        if (row < 2) {
            // row 0,1    → black keycaps
            dr = WHITE[0];
            dg = WHITE[1];
            db = WHITE[2];
        } else {  //      → red keycaps
            dr = RED[0];
            dg = RED[1];
            db = RED[2];
        }

        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t led_index = g_led_config.matrix_co[row][col];
            if (led_index == NO_LED) continue;

            keypos_t pos = { .row = row, .col = col };
            uint16_t kc = keymap_key_to_keycode(layer, pos);
            if  (kc != KC_TRNS && kc != KC_NO)  {
                uint8_t r, g, b;
                visual_style_t style = visual_style_for_keycode(kc);
                rgb_for_style(style, &r, &g, &b);
                r = (r * dr) / 255;
                g = (g * dg) / 255;
                b = (b * db) / 255;
                rgb_matrix_set_color(led_index, r, g, b);
            } else if (! layer_preview_active) {
                // Dim the LEDs for keys that are not in the current layer
                rgb_matrix_set_color(led_index, 0, 0, 0);
            }
        }
    }
}

void matrix_scan_user(void) {
    uint8_t active_layer = get_highest_layer(layer_state);
    if (active_layer != last_layer) {
        last_layer = active_layer;
        layer_switch_time = timer_read32();
        layer_preview_active = true;
    }
    highlight_layer(active_layer);
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    //rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
//    rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
}
