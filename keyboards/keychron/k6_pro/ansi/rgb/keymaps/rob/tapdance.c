#include QMK_KEYBOARD_H
#include "tapdance.h"


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
    [TD_PGDN_PGUP] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, KC_PGUP),
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};


