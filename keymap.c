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

// Custom key labels
#define __ KC_TRANSPARENT


// Layer names
#define L_MAIN 0
#define L_RGB 1
#define L_MEDIA 2
#define L_ARROWS 3
#define L_SYMBOLS 4

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_MAIN] = LAYOUT_moonlander(
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LALT(KC_LSHIFT),                                MEH_T(KC_EQUAL),KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_1),                                    TD(DANCE_4),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    MO(3),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TD(DANCE_2),                                    TD(DANCE_5),    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLASH,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
                                                                                                                      // Thumb L         // Thumb R
    KC_LCTRL,       __,             KC_PSCREEN,     KC_LEFT,        KC_RIGHT,                                       TD(DANCE_3),    MT(MOD_LCTL, KC_ENTER),                         KC_DOWN,        KC_UP,          KC_LBRACKET,    KC_RBRACKET,    MT(MOD_LCTL, KC_ENTER),
                                                                            // Piano L1          // Piano L2         // Piano L3             // Piano R3         // Piano R2     // Piano R1
                                                                             KC_SPACE,       MT(MOD_RSFT, KC_DELETE), KC_LCTRL,          MT(MOD_RALT, KC_TAB),LT(4,KC_BSPACE),MT(MOD_LSFT, KC_SPACE)
  ),
  [L_RGB] = LAYOUT_moonlander(
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    KC_ESCAPE,     KC_F1,           KC_F2,          KC_F3,          KC_F4,          KC_F5,          __,                                             __,             KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,            KC_EXLM,         KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        TD(DANCE_6),                                    __,             KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,            KC_HASH,         KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       __,                                             __,             KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,            __,              KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
                                                                                                                     // Thumb L         // Thumb R
    __,            KC_COMMA,        __,             RGB_VAD,                                                       RGB_VAI,RGB_MOD,       RGB_TOG,                                  __,             KC_DOT,         KC_0,           KC_EQUAL,       __,
                                                                            // Piano L1          // Piano L2         // Piano L3             // Piano R3         // Piano R2     // Piano R1
                                                                              RGB_SPI,           RGB_SPD,            RGB_SLD,              TOGGLE_LAYER_COLOR,      RGB_HUD,        RGB_HUI
  ),
  [L_MEDIA] = LAYOUT_moonlander(
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    AU_TOG,         __,             __,             __,             __,             __,             __,                                             __,             __,             __,             __,             __,             __,             RESET,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    MU_TOG,         __,             __,             KC_MS_UP,       __,             __,             __,                                             TD(DANCE_7),    __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    __,             __,                                             __,             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             __,             __,             __,             __,                                                                             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
                                                                                                                     // Thumb L         // Thumb R
    __,             __,             __,             KC_MS_BTN1,     KC_MS_BTN2,                                         __,         KC_MEDIA_PLAY_PAUSE,            LCTL(KC_KP_MINUS),LCTL(KC_KP_PLUS),KC_MEDIA_PREV_TRACK,         KC_MEDIA_NEXT_TRACK,        __,
                                                                            // Piano L1          // Piano L2         // Piano L3             // Piano R3         // Piano R2     // Piano R1
                                                                                __,                 __,                 __,                 KC_AUDIO_MUTE,     KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP
  ),
  [L_ARROWS] = LAYOUT_moonlander(
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          __,                                             __,             KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             KC_UP,          __,             __,             __,             __,                                             __,             __,             __,             __,             __,             __,             KC_F12,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             KC_LEFT,        KC_DOWN,        KC_RIGHT,       __,             __,             __,                                             __,             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             __,             __,             __,             __,                                                                             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
                                                                                                                     // Thumb L         // Thumb R
    __,             __,             __,             __,             __,                                                 __,                 __,                                                     __,         __,         __,         __,         __,
                                                                             // Piano L1          // Piano L2         // Piano L3             // Piano R3         // Piano R2     // Piano R1
                                                                                __,                    __,              __,                         __,              __,              __
  ),
  [L_SYMBOLS] = LAYOUT_moonlander(
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             __,             __,             __,             __,             __,                                             __,             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             __,             __,             __,             __,             __,                                             __,             __,             ST_MACRO_1,     ST_MACRO_2,     __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             ST_MACRO_0,     __,             __,             __,             __,                                             __,             __,             __,             __,             __,             __,             ST_MACRO_3,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
    __,             __,             __,             __,             __,             __,                                                                             __,             __,             __,             __,             __,             __,
// |---------------|---------------|---------------|---------------|---------------|---------------|---------------|                               |---------------|---------------|---------------|---------------|---------------|---------------|---------------|
                                                                                                                     // Thumb L         // Thumb R
    __,             __,             __,             __,             __,                                                 __,                 __,                                     __,             __,             __,             __,             __,
                                                                             // Piano L1          // Piano L2         // Piano L3             // Piano R3         // Piano R2     // Piano R1
                                                                                  __,                  __,                __,                     __,                  __,             __
  ),
};


//
//// RGB //////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [L_MAIN] = { {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239}, {95,220,239} },

    [L_RGB] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {17,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {138,255,255}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {138,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [L_MEDIA] = { {217,218,204}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {217,218,204}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {217,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {0,0,0}, {217,218,204}, {217,218,204}, {217,218,204}, {217,218,204} },

    [L_ARROWS] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {74,255,139}, {0,0,0}, {0,0,0}, {133,255,255}, {74,255,139}, {74,255,139}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {74,255,139}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {133,255,255}, {0,0,0}, {0,0,0}, {245,255,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [L_SYMBOLS] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case L_MAIN:
      set_layer_color(L_MAIN);
      break;
    case L_RGB:
      set_layer_color(L_RGB);
      break;
    case L_MEDIA:
      set_layer_color(L_MEDIA);
      break;
    case L_ARROWS:
      set_layer_color(L_ARROWS);
      break;
    case L_SYMBOLS:
      set_layer_color(L_SYMBOLS);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

//
//// Custom Keycodes //////////////////////////////////////////////////////////////////////////////////////////////////
//

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_9) ));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_0) ));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_1) ));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_6) ));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}


//
//// Tap Dances ///////////////////////////////////////////////////////////////////////////////////////////////////////
//

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    TRIPLE_TAP,
    TRIPLE_HOLD,
    TRIPLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[9];
uint8_t dance_step(qk_tap_dance_state_t *state);
uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    } else if (state->count == 3) {
        if (state->interrupted) return TRIPLE_SINGLE_TAP;
        else if (state->pressed) return TRIPLE_HOLD;
        else return TRIPLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);
void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}

void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);
void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[2].step = 0;
}

void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);
void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
    }
    if(state->count > 3) {
        tap_code16(KC_LGUI);
    }
}
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_LGUI); break;
        case SINGLE_HOLD: register_code16(KC_LALT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_TAB)); break;
        case DOUBLE_HOLD: register_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LGUI); register_code16(KC_LGUI);
    }
}
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_LGUI); break;
        case SINGLE_HOLD: unregister_code16(KC_LALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_TAB)); break;
        case DOUBLE_HOLD: unregister_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LGUI); break;
    }
    dance_state[3].step = 0;
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
    }
    dance_state[4].step = 0;
}

void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);
void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[5].step = 0;
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
    }
    dance_state[6].step = 0;
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
    }
    dance_state[7].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_7_finished, dance_7_reset),
};


//
//// Combos ///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

enum combo_events {
  CAPS_WORD_ON_PIANOS,
  COMBO_LENGTH
};

int16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM space_lshift[] = {KC_SPACE, MT(MOD_LSFT, KC_SPACE), COMBO_END};

combo_t key_combos[] = {
  [CAPS_WORD_ON_PIANOS] = COMBO_ACTION(space_lshift),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CAPS_WORD_ON_PIANOS:
      if (pressed) {
        caps_word_on();
      }
      break;
  }
}
