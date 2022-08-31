#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_BSLASH,      KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRACKET,    KC_RBRACKET,    
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_GRAVE,       KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_RSHIFT,      
    OSL(1),         KC_LCTRL,       KC_LALT,        KC_LGUI,        LALT(LGUI(KC_ESCAPE)),KC_LANG2,                                                                                                       KC_LANG1,       KC_RGUI,        KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       LGUI(LCTL(KC_Q)),LGUI(LSFT(KC_4)),                LGUI(LCTL(KC_SPACE)),KC_ENTER,       KC_BSPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MOON_LED_LEVEL,                 KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {120,250,255}, {120,250,255}, {120,250,255}, {120,250,255}, {246,255,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {246,255,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {246,255,255}, {246,255,255}, {246,255,255}, {120,250,255}, {199,250,255}, {120,250,255}, {120,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {199,250,255}, {199,250,255}, {199,250,255}, {188,255,255}, {199,250,255}, {199,250,255}, {199,250,255}, {120,250,255}, {120,250,255}, {246,255,255}, {246,255,255} },

    [1] = { {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {246,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {20,255,255}, {20,255,255}, {246,255,255}, {246,255,255}, {246,255,255}, {20,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


