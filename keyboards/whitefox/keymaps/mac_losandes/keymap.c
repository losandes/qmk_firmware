#include QMK_KEYBOARD_H

enum alt_keycodes {
    DFU_MOD, // Reboot Keyboard in DFU mode
    CKC_IDE, // Macos Open IDE (Atom, or with LCmd => VSCode)
    CKC_TRM, // Macos Open Terminal
    CKC_BRS, // Macos Open Browser (Firefox, or with LCmd => Safari)
    CKC_SLK, // Macos Open Slack (or with LCmd => Safari)
    CKC_FND, // Macos Open Finder (or with LCmd => Firefox)
    CKC_MSG, // Macos Open Messages
    CKC_MAL, // Macos Open Mail
    CKC_CAL, // Macos Open Calendar
    CKC_ZOM, // Macos Open ZOOM
};

#define SPOTLTE LGUI(KC_SPC)
#define CTL_CAP CTL_T(KC_CAPS)
#define DESKTP1 LCTL(KC_1)
#define DESKTP2 LCTL(KC_2)
#define ZOM_MIC LSFT(LGUI(KC_A))

/* Truefox Template
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
 * │    │    │    │                        │    │    │ │   │   │   │
 * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
 */

 /*
 [X] = LAYOUT(
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______, \
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, _______, \
     _______, _______, _______,                            _______,                   _______, _______,                   _______, _______, _______  \
 ),
 */

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* Layer 0: Default Layer
      * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
      * │Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |   │ \ │ ` │
      * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
      * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │Backs│Del│
      * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
      * │CtlCap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ Enter  │PgU│
      * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
      * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │ ↑ │PgD│
      * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
      * │Fn1 │LAlt│LCmd│         Space          │Fn3 │Fn2 │ │ ← │ ↓ │ → │
      * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
      */
    [0] = LAYOUT_truefox( \
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______, KC_BSLS, KC_GRV,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,      KC_BSPC,     KC_DEL,  \
        CTL_CAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,          KC_UP,   KC_PGDN, \
        TT(1),   KC_LALT, KC_LGUI,                            KC_SPC,                    TT(3),   TT(2),                     KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    /* Layer 1: Function Keys
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │DFU│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   │   │Pwr│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │     │   │   │   │   │   │   │   │   │   │   │   │   │ Del │Mut│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │      │   │   │   │   │   │ ← │ ↓ │ ↑ │ → │   │   │        │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │        │   │   │   │   │   │   │   │   │   │   │      │PgU│   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │    │    │    │                        │    │    │ │Hom│PgD│End│
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     */
    [1] = LAYOUT_truefox( \
      DFU_MOD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_PWR,   \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      KC_DEL,      KC__MUTE, \
      _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,          _______,  \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          KC_PGUP, _______,  \
      _______, _______, _______,                            _______,                   _______, _______,                   KC_HOME, KC_PGDN, KC_END    \
    ),
    /* LAYER 2: Media and Mouse
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │Mic│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │     │   │M↑ │   │   │   │   │   │   │   │>||│   │   │ Del │Mut│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │RClick│M← │M↓ │M→ │   │   │   │   │   │   │   │   │        │Vo↑│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │        │   │   │   │   │   │   │   │   │   │   │      │   │Vo↓│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │    │    │    │       Left Click       │    │    │ │Pre│   │Nxt│
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     */
     [2] = LAYOUT_truefox( \
       _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, ZOM_MIC,  \
       _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, _______, _______,      KC_DEL,      KC__MUTE, \
       KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          KC_VOLU,  \
       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, KC_VOLD,  \
       _______, _______, _______,                            KC_BTN1,                   _______, _______,                   KC_MRWD, _______, KC_MFFD   \
     ),
     /* LAYER 3: App Hotkeys
      * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
      * │   │Ds1│Ds2│   │   │   │   │   │   │   │   │   │   │   │   │   │
      * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
      * │     │   │   │   │   │Trm│   │   │   │   │   │Trm│IDE│Brows│   │
      * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
      * │      │Atm│Slk│   │Fnd│   │   │   │   │   │   │   │        │   │
      * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
      * │        │Zom│   │Cal│   │Brs│   │   │Msg│Mal│   │      │   │   │
      * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
      * │    │    │LCmd│        Spotlite        │    │    │ │   │   │   │
      * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
      */
     [3] = LAYOUT(
       _______, DESKTP1, DESKTP2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
       _______, _______, _______, _______, _______, CKC_TRM, _______, _______, _______, _______, _______, CKC_TRM, CKC_IDE,      CKC_BRS,     _______, \
       _______, CKC_IDE, CKC_SLK, _______, CKC_FND, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \
       _______, CKC_ZOM, _______, CKC_CAL, _______, CKC_BRS, _______, CKC_MSG, CKC_MAL, _______, _______,          _______,          _______, _______, \
       _______, _______, KC_LGUI,                            SPOTLTE,                   _______, _______,                   _______, _______, _______  \
     ),
};

#define MODS_GUI (get_mods() & MOD_BIT(KC_LGUI) || get_mods() & MOD_BIT(KC_RGUI))

bool open_app(keyrecord_t *record, char *appname) {
  SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
  send_string(appname);
  SEND_STRING(SS_TAP(X_ENTER));
  return false;  // Cancel further processing
}

bool open_app_or_alt(keyrecord_t *record, char *appname, char *altappname) {
  if (record->event.pressed && MODS_GUI) {
    return open_app(record, altappname);
  } else if (record->event.pressed) {
    return open_app(record, appname);
  }

  return false; // Cancel further processing
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case CKC_IDE:
          return open_app_or_alt(record, APP_IDE_AT, APP_IDE_VS);
        case CKC_TRM:
          return open_app(record, APP_TRM);
        case CKC_BRS:
          return open_app_or_alt(record, APP_BRS_FF, APP_BRS_SA);
        case CKC_SLK:
          return open_app_or_alt(record, APP_SLK, APP_BRS_SA);
        case CKC_FND:
          return open_app_or_alt(record, APP_FND, APP_BRS_FF);
        case CKC_MSG:
          return open_app(record, APP_MSG);
        case CKC_MAL:
          return open_app(record, APP_MAL);
        case CKC_CAL:
          return open_app(record, APP_CAL);
        case CKC_ZOM:
          return open_app(record, APP_ZOM);
        case DFU_MOD:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= BOOTKEY_HOLD_MS) {
                    reset_keyboard();
                }
            }
            return false; // Cancel further processing
        default:
            return true;  // Process all other keycodes normally
    }
}
