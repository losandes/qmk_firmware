#include QMK_KEYBOARD_H
#include "config.h"
#include "led_matrix.h"
#include "my_led_programs.c"

enum alt_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase
    L_BRD,              //LED Brightness Decrease
    L_EDG_I,            //LED Edge Brightness Increase
    L_EDG_D,            //LED Edge Brightness Decrease
    L_EDG_M,            //LED Edge lighting mode
    L_PTN,              //LED Pattern Select Next
    L_PTP,              //LED Pattern Select Previous
    L_PSI,              //LED Pattern Speed Increase
    L_PSD,              //LED Pattern Speed Decrease
    L_T_MD,             //LED Toggle Mode
    L_T_ONF,            //LED Toggle On / Off
    L_ON,               //LED On
    L_OFF,              //LED Off
    L_T_BR,             //LED Toggle Breath Effect
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction and effect
    U_T_AGCR,           //USB Toggle Automatic GCR control
    DBG_TOG,            //DEBUG Toggle On / Off
    DBG_MTRX,           //DEBUG Toggle Matrix Prints
    DBG_KBD,            //DEBUG Toggle Keyboard Prints
    DBG_MOU,            //DEBUG Toggle Mouse Prints
    DBG_FAC,            //DEBUG Factory light testing (All on white)
    MD_BOOT,            //Restart into bootloader after hold timeout
    // losandes keycodes start here
    CKC_DS1,            //Desktop 1
    CKC_DS2,            //Desktop 2
    CKC_IDE,            //Macos Open IDE
    CKC_TRM,            //Macos Open Terminal
    CKC_BRS,            //Macos Open Browser
    CKC_SLK,            //Macos Open Slack
    CKC_FND,            //Macos Open Finder
    CKC_MSG,            //Macos Open Messages
    CKC_MAL,            //Macos Open Mail
    CKC_CAL,            //Macos Open Calendar
    CKC_ZOM,            //Macos Open ZOOM
    CKC_MIC,            //Zoom Toggle Mic
};

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_GRV,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_BSLS, \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        MO(1),   KC_LALT, KC_LGUI,                            KC_SPC,                             MO(3),   MO(2),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT(
        MD_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_PWR,   \
        L_T_BR,  L_PSD,   L_BRI,   L_PSI,   L_EDG_I, _______, _______, _______, U_T_AGCR,_______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC__MUTE, \
        L_T_PTD, L_PTP,   L_BRD,   L_PTN,   L_EDG_D, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______, _______,  \
        _______, L_T_MD,  L_T_ONF, _______, L_EDG_M, MD_BOOT, TG_NKRO, _______, _______, _______, _______, _______,          L_BRI,   L_T_ONF,  \
        _______, _______, _______,                            DBG_FAC,                            _______, _______, KC_HOME, L_BRD,   KC_END    \
    ),
    [2] = LAYOUT(
        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL , CKC_MIC,  \
        _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC__MUTE, \
        KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_VOLD,  \
        _______, _______, _______,                            KC_BTN1,                            _______, _______, KC_MRWD, _______, KC_MFFD   \
    ),
    [3] = LAYOUT(
        _______, CKC_DS1, CKC_DS2, CKC_IDE, CKC_TRM, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, CKC_TRM, _______, _______, CKC_IDE, _______, _______, _______, _______, _______, _______, \
        _______, _______, CKC_SLK, _______, CKC_FND, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, CKC_ZOM, _______, CKC_CAL, _______, CKC_BRS, _______, CKC_MSG, CKC_MAL, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    */
};

// This assumes there are 11 values in the `led_setups` array
// in 'qmk_firmware/tmk_core/protocol/arm_atsam/led_matrix_programs.c'
uint8_t my_led_setups_count = 11;

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  led_animation_id = 1;      // initial background color
  gcr_desired = 20;          // set the default brightness (GCR increment/decrement value is 10 per step, 0 is off)
  led_edge_brightness = 0.1; // set the default edge brightness to be less bright than default
  // set the default color pattern (L_T_PTD)
  led_animation_direction = 0;
  led_animation_orientation = 0;
  led_animation_circular = 1;

  // There are a max of 10 led_setups that can be overridden
  // led_setups is defined in 'qmk_firmware/tmk_core/protocol/arm_atsam/led_matrix_programs.c'
  // and consumed by 'qmk_firmware/tmk_core/protocol/arm_atsam/led_matrix.c'
  led_setups[0] = leds_rainbow_s_override;
  led_setups[1] = leds_rainbow_ns_override;
  led_setups[2] = leds_purple;
  led_setups[3] = leds_teal_salmon_override;
  led_setups[4] = leds_green_override;
  led_setups[5] = leds_irish_s;
  led_setups[6] = led_purple_rainbow_s;
  led_setups[7] = leds_bwo_s;
  led_setups[8] = leds_rainbow_burst_s;
  led_setups[9] = leds_trolls_dance_party_s;
  led_setups[10] = leds_off_override;
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;
    static uint8_t scroll_effect = 0;

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                else gcr_desired += LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                else gcr_desired -= LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_EDG_M:
            if (record->event.pressed) {
                led_edge_mode++;
                if (led_edge_mode > LED_EDGE_MODE_MAX) {
                    led_edge_mode = LED_EDGE_MODE_ALL;
                }
            }
            return false;
        case L_EDG_I:
            if (record->event.pressed) {
                led_edge_brightness += 0.1;
                if (led_edge_brightness > 1) { led_edge_brightness = 1; }
            }
            return false;
        case L_EDG_D:
            if (record->event.pressed) {
                led_edge_brightness -= 0.1;
                if (led_edge_brightness < 0) { led_edge_brightness = 0; }
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = my_led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == my_led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                I2C3733_Control_Set(!I2C3733_Control_Get());
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                I2C3733_Control_Set(1);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                I2C3733_Control_Set(0);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                scroll_effect++;
                if (scroll_effect == 1) {               //Patterns with scroll move horizontal (Right to left)
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                } else if (scroll_effect == 2) {        //Patterns with scroll move vertical (Top to bottom)
                    led_animation_direction = 1;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 3) {        //Patterns with scroll move vertical (Bottom to top)
                    led_animation_direction = 0;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 4) {        //Patterns with scroll explode from center
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else if (scroll_effect == 5) {        //Patterns with scroll implode on center
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else {                                //Patterns with scroll move horizontal (Left to right)
                    scroll_effect = 0;
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                }
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_FAC:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                led_lighting_mode = LED_MODE_NORMAL;
                led_edge_brightness = 1;
                led_edge_mode = LED_EDGE_MODE_ALL;
                led_animation_breathing = 0;
                led_animation_id = 7; //led_programs.c led_setups leds_white index
                gcr_desired = LED_GCR_MAX;
                I2C3733_Control_Set(1);
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= BOOTKEY_HOLD_MS) {
                    reset_keyboard();
                }
            }
            return false;
        // losandes keycodes start here
        // ====================================================================
        case CKC_DS1:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("1"));
            return false;
          }
        case CKC_DS2:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTRL("2"));
            return false;
          }
        case CKC_IDE:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_IDE);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_TRM:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_TRM);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_BRS:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_BRS);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_SLK:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_SLK);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_FND:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_FND);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_MSG:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_MSG);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_MAL:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_MAL);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_CAL:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_CAL);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_ZOM:
          if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            send_string(APP_ZOM);
            SEND_STRING(SS_TAP(X_ENTER));
            return false;
          }
        case CKC_MIC:
          if (record->event.pressed) {
            // zoom mic on/off keystroke
            SEND_STRING(SS_LGUI(SS_LSFT("a")));
          }
        default:
            return true; //Process all other keycodes normally
    }
}

led_instruction_t led_instructions[] = {
  //All LEDs use the user's selected pattern (this is the factory default)
  { .flags = LED_FLAG_USE_ROTATE_PATTERN },

  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 0, .id1 = 240, .r = 127, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = 1, .id2 = 4294967288, .id3 = 511 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = 1, .id0 = 2147483648, .id1 = 50348034, .id2 = 2 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 1, .id0 = 16385, .r = 0, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 1, .id0 = 8190, .r = 254, .g = 119, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 1, .id0 = 8192, .r = 255, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 1, .id1 = 67108864, .r = 127, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 1, .id0 = 2147450880, .id1 = 4177510397, .id2 = 5, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 2, .id0 = 3758243840, .id1 = 570427395, .id2 = 4294967293, .id3 = 511, .r = 30, .g = 136, .b = 229 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 2, .id0 = 8192, .r = 255, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 2, .id1 = 2147483648, .r = 127, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 2, .id0 = 536715263, .id1 = 1577056252, .id2 = 2, .r = 0, .g = 0, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 3, .id0 = 9437214, .id1 = 1744901, .id2 = 4294967288, .id3 = 511, .r = 254, .g = 119, .b = 0 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 3, .id1 = 1073741824, .r = 127, .g = 0, .b = 255 },
  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = 3, .id0 = 4285530081, .id1 = 3219480570, .id2 = 7, .r = 0, .g = 0, .b = 0 },

  //end must be set to 1 to indicate end of instruction set
  { .end = 1 }
};
