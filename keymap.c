#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,  // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap 0: Basic layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | ESC    | 1, ! | 2, " | 3, # | 4, $ | 5, % |      |           |      | 6, & | 7, ' | 8, ( | 9, ) |   0  | -, =   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  | TG (1) |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  | :, * |Bacspace|
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | LAlt | Lang2|                                       | Lang1|      | ;, + | @, ` |  _   |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       | Left | Right|
     *                                 ,------|------|------|       |------+--------+------.
     *                                 | Space|      | LCtrl|       | Up   |        |      |
     *                                 | LCmd |LShift|------|       |------|        |Enter |
     *                                 | /Win |      | LAlt |       | Down |        |      |
     *                                 `--------------------'       `----------------------'
     */
    [0] = LAYOUT_ergodox(  //
        /*
         * left hand
         */
        KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT,            //
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT,               //
        KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G,                             //
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRANSPARENT,            //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT, KC_LANG2,  //
        //
        KC_TRANSPARENT, KC_TRANSPARENT,  //
        KC_LCTRL,                        //
        LGUI_T(KC_SPACE), KC_LSHIFT,     //
        KC_LALT,                         //
        /*
         * right hand
         */
        KC_TRANSPARENT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,             //
        KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, TG(1),                //
        KC_H, KC_J, KC_K, KC_L, JP_COLN, KC_BSPACE,                         //
        KC_TRANSPARENT, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT,  //
        KC_LANG1, KC_TRANSPARENT, KC_SCLN, JP_AT, JP_BSLS,                  //
        //
        KC_LEFT, KC_RIGHT, KC_UP, KC_DOWN,  //
        KC_TRANSPARENT, KC_KP_ENTER),       //

    /* Keymap 1: Symbol Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |  F6    |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |  Up  |      |      |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      | Left | Down | Right|      |------|           |------| Down |   4  |   5  |   6  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Reset|      |      |      |      |                                       |      |    . |   0  |   =  |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [1] = LAYOUT_ergodox(  //
        /*
         * left hand
         */
        KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT,                                               //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                  //
        RESET, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                           //
        //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  //
        KC_LBRACKET, KC_RBRACKET,                        //
        KC_TRANSPARENT,                                  //
        /*
         * right hand
         */
        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,                  //
        KC_TRANSPARENT, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_TRANSPARENT,    //
        KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRANSPARENT,                  //
        KC_TRANSPARENT, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRANSPARENT,  //
        KC_TRANSPARENT, KC_DOT, KC_0, KC_EQL, KC_TRANSPARENT,                //
        //
        KC_TRANSPARENT, KC_TRANSPARENT,                 //
        KC_TRANSPARENT,                                 //
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT  //
        ),                                              //

};

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
