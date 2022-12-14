/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 200

#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"5wBwe/gEb33"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define RGB_MATRIX_STARTUP_SPD 60

#define UNICODE_SELECTED_MODES UC_LNX
#define UNICODE_KEY_LNX LCTL(LALT(LGUI(KC_0)))
