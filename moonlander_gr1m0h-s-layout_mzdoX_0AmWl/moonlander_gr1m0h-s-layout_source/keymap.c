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
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
  MAC_SIRI,
  MAC_DND,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPACE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_MAC_PASTE,   KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRACKET,    KC_RBRACKET,    
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_MAC_COPY,    KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_BSLASH,      
    KC_HYPR,        KC_LCTRL,       KC_LALT,        KC_LGUI,        MO(3),          KC_LANG2,                                                                                                       KC_LANG1,       KC_MEH,         KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       LGUI(LSFT(KC_4)),LGUI(LCTL(KC_SPACE)),                MAC_DND,        MO(2),          MO(1)
  ),
  [1] = LAYOUT_moonlander(
    KC_GRAVE,       KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_MISSION_CONTROL,LGUI(KC_L),     MAC_SPOTLIGHT,  MAC_SIRI,                                       KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TILD,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_F16,                                         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_UP,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249}, {189,104,249} },

    [1] = { {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255}, {233,134,255} },

    [2] = { {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255}, {22,147,255} },

    [3] = { {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253}, {136,114,253} },

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
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_DND:
      HSS(0x9B);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



