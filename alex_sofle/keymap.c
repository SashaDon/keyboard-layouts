#include QMK_KEYBOARD_H

// make redo, mouse layer, gamer layer and figure out whats wrong with my screens!!!
// its probably jumpers lines under the elite-c microcontroller!!! 

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _DVORAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _MOUSE,
    _GAMER,
    _NUMPAD
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DVORAK,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_SCRNSHT,
    KC_LANG,
    KC_CLPB,
    KC_MOUSE,
    KC_GAMER,
    KC_UNTAB,
    KC_COMMENT,
    KC_FINDER,
    KC_NUMPAD,
    KC_REDO,
    KC_ALTTAB
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY           
 * ,-----------------------------------------.                               ,-----------------------------------------.
 * |       |   1  |   2  |   3  |   4  |  5  |                               |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                               |------+------+------+------+------+------|
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |                               |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                               |------+------+------+------+------+------|
 * |  Tab |   A  |   S  |   D  |   F  |   G  |-------.               ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |               |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|               |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /                \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | / BkSpc /                  \Space \  |RAISE | RCTR | RAlt |ADJUST|
 *            |      |      |      |      |/       /                    \      \ |      |      |      |      |
 *            `----------------------------------'                      '------''---------------------------'
 */
  
[_QWERTY] = LAYOUT( 
  KC_ALTTAB,    KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_LANG,  \
   KC_ESC,      KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRACKET, \
   KC_TAB,      KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, \
  KC_LSFT,      KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,         XXXXXXX,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, \
                KC_LCTRL,_______,KC_LALT, KC_LOWER,KC_BSPC,               KC_SPC ,    KC_RAISE,KC_RCTRL,_______, _______ \
),
/*
 * DVORAK
 * ,-----------------------------------------.                                    ,-----------------------------------------.
 * | ESC` |      |      |      |      |      |                                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                    |------+------+------+------+------+------|
 * | TAB  |   ;  |   ,  |   .  |   P  |   Y  |                                    |   F  |   G  |   C  |   R  |   L  |      |
 * |------+------+------+------+------+------|                                    |------+------+------+------+------+------|
 * |      |   A  |   O  |   E  |   U  |   I  |-------.                    ,-------|   D  |   H  |   T  |   N  |   S  |Enter |
 * |------+------+------+------+------+------|  MUTE |                    |       |------+------+------+------+------+------|
 * |LShift|   '  |   Q  |   J  |   K  |   X  |-------|                    |-------|   B  |   M  |   W  |   V  |   Z  |RShift|
 * `-----------------------------------------/       /                     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | / Bspc  /                       \Space \  |RAISE | RCTR | RAlt |ADJUST|
 *            |      |      |      |      |/       /                         \      \ |      |      |      |      |
 *            `----------------------------------'                           '------''---------------------------'
 */

[_DVORAK] = LAYOUT( \
GRAVE_ESC,  _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______,  _______, \
   KC_TAB,  KC_SCLN, KC_COMM, KC_DOT,     KC_P,    KC_Y,                           KC_F,    KC_G,    KC_C,    KC_R,    KC_L,  _______, \
  _______,     KC_A,    KC_O,   KC_E,     KC_U,    KC_I,                           KC_D,    KC_H,    KC_T,    KC_N,    KC_S,  KC_ENT,  \
  KC_LSFT,  KC_QUOT,    KC_Q,   KC_J,     KC_K,    KC_X, KC_MUTE,      XXXXXXX,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,  KC_RSFT, \
                     KC_LGUI,KC_LALT, KC_LCTRL,KC_LOWER, KC_BSPC,       KC_SPC, KC_RAISE,KC_RCTRL, KC_RALT, KC_ADJUST \
),
/* LOWER
 * ,-----------------------------------------.                                         ,-----------------------------------------.
 * |      |      |      |      |      |      |                                         |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                                         |   6  |   7  |   8  |   9  |   0  | Win  |
 * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
 * |   &  |   @  |   ?  |   {  |   }  |   -  |-------.                         ,-------|   "  |   (  |   )  |   $  |   !  |   |  |
 * |------+------+------+------+------+------|       |                         |       |------+------+------+------+------+------|
 * |  ~   |   #  |   %  |   <  |   >  |   +  |-------|                         |-------|   _  |  [  |   ]  |   =   |   \  |  `   |
 * `-----------------------------------------/       /                          \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /  Bspc /                            \Enter \  |RAISE | mouse| RAlt |ADJUST|
 *            |      |      |      |      |/       /                              \      \ |      |      |      |      |
 *            `----------------------------------'                                '------''---------------------------'
 */ 
[_LOWER] = LAYOUT( \
  _______,   _______, _______, _______,  _______, _______,                         _______, _______, _______, _______,  _______,   _______, \
  _______,      KC_1,    KC_2,    KC_3,     KC_4,    KC_5,                            KC_6,    KC_7,    KC_8, KC_9,     KC_0,      KC_LGUI, \
  KC_AMPR,   KC_AT,   KC_QUES, KC_LCBR,  KC_RCBR, KC_PMNS,                         KC_DQUO, KC_LPRN, KC_RPRN, KC_DLR,   KC_EXLM,   KC_PIPE, \
  KC_TILD,   KC_HASH, KC_PERC, KC_LABK,  KC_RABK, KC_PPLS, _______,       _______, KC_UNDS, KC_LBRC, KC_RBRC, KC_EQUAL, KC_BSLASH, KC_GRAVE, \
                       _______, _______, _______, _______, _______,       KC_ENT,  _______, _______, _______, _______\
),
/* RAISE
 * ,----------------------------------------.                                          ,-----------------------------------------.
 * |      |      |      |      |      |      |                                         |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                                         |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
 * | Caps | Cut  | Undo | Copy | Paste|      |-------.                         ,-------| PgDn | Left | Down |  Up  | Rigth|      |
 * |------+------+------+------+------+------|       |                         |       |------+------+------+------+------+------|.
 * | Cmmt |ScrnSH| Redo | Find |ClBr  |Untab |-------|                         |-------| PgUp | LStr | PWrd | NWrd | LEnd |      |
 * `-----------------------------------------/       /                          \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /  Del  /                            \Space \  |RAISE | RCTR | RAlt |ADJUST|
 *            |      |      |      |      |/       /                              \      \ |      |      |      |      |
 *            `----------------------------------'                                '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
  _______,    _______,    _______, _______,   _______,  _______,                           _______,  _______,  _______,  _______,  _______,  _______, \
  KC_F1,      KC_F2,      KC_F3,   KC_F4,     KC_F5,    KC_F6,                             KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12, \
  KC_CAPS,    KC_CUT,     KC_UNDO, KC_COPY,   KC_PASTE, _______,                           KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_PGUP,  _______, \
  KC_COMMENT, KC_SCRNSHT, KC_REDO, KC_FINDER, KC_CLPB,  KC_UNTAB, _______,        _______, KC_LSTRT, KC_PRVWD, KC_NXTWD, KC_LEND,  KC_PGDN,  _______, \
                          _______, _______,   _______,  _______,  KC_DEL,        _______,  _______,  _______,  _______,  _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | RESET|      |QWERTY|DVORAK|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt |ADJUST|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
  CG_TOGG , XXXXXXX, XXXXXXX ,  XXXXXXX , XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX,  XXXXXXX, KC_QWERTY,KC_DVORAK,XXXXXXX,KC_F14,                           KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GAMER, \
  XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    KC_MOUSE,  KC_F13,                        XXXXXXX, KC_NUMPAD, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_WBAK, KC_WFWD, KC_WSCH, XXXXXXX, XXXXXXX, \
                   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______ \
  ),
    /* mouse
    * ,----------------------------------------.                                          ,-----------------------------------------.
    * |      |      |      |      |      |      |                                         |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |accel1|accel2|      |                                         |      |      | msup |      |      |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |msbtn1|msbtn2|      |-------.                         ,-------|wheelu|msleft|msdown|msrght|      |      |
    * |------+------+------+------+------+------|       |                         |       |------+------+------+------+------+------|
    * |      |      |      |      |      |      |-------|                         |-------|wheeld|      |      |      |      |      |
    * `-----------------------------------------/       /                          \      \-----------------------------------------'
    *            | LGUI | LAlt | LCTR |LOWER | /  Del  /                            \Space \  |RAISE | RCTR | RAlt |ADJUST|
    *            |      |      |      |      |/       /                              \      \ |      |      |      |      |
    *            `----------------------------------'                                '------''---------------------------'
    */
    [_MOUSE] = LAYOUT( \
    _______, _______,   _______, _______,  _______, _______,                           _______, _______,  _______,  _______,  _______,  _______, \
    _______, _______,   _______, KC_MS_ACCEL1,  KC_MS_ACCEL2, _______,                _______, _______,  KC_MS_UP,  _______,  _______,  _______, \
    _______, _______,    _______, KC_MS_BTN1, KC_MS_BTN2, _______,                    KC_MS_WH_UP, KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  _______,  _______, \
    _______,  _______,_______, _______,  _______,  _______, _______,         _______,  KC_MS_WH_DOWN, _______, _______, _______, _______,  _______, \
                        _______, _______,  _______, _______,  KC_QWERTY,        _______,  _______, _______,  _______,  _______ \
    ),
    /* gamer
    * ,----------------------------------------.                                          ,-----------------------------------------.
    * |      |      |      |      |      |      |                                         |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                                         |      |      |        |      |      |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |      |      |      |-------.                         ,-------|      |      |      |      |      |      |
    * |------+------+------+------+------+------|       |                         |       |------+------+------+------+------+------|
    * |      |      |      |      |      |      |-------|                         |-------|      |      |      |      |      |      |
    * `-----------------------------------------/       /                          \      \-----------------------------------------'
    *            | LGUI | LAlt | LCTR |LOWER | / Space  /                            \Space \  |RAISE | RCTR | RAlt |ADJUST|
    *            |      |      |      |      |/       /                              \      \ |      |      |      |      |
    *            `----------------------------------'                                '------''---------------------------'
    */
    [_GAMER] = LAYOUT( \
    KC_ESC, _______, _______, _______, _______, _______,                           _______, _______,  _______,  _______,  _______,  _______, \
    KC_TAB, _______, _______, _______, _______, _______,                           _______, _______,  _______,  _______,  _______,  _______, \
    _______, _______, _______, _______, _______, _______,                           _______, _______,  _______,  _______,  _______,  KC_QWERTY, \
    KC_LSFT, _______, _______, _______, _______, _______, _______,         _______, _______, _______,  _______,  _______,  _______,  _______, \
             _______, KC_LALT, KC_LCTRL,_______,  KC_SPC,                  KC_BSPC, _______, KC_ENT,  _______,  _______ \
    ),
    /* numpad
    * ,----------------------------------------.                                          ,-----------------------------------------.
    * |      |      |      |      |      |      |                                         | NmLk |      |      |   /  |      |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                                         |      |  7   |   8  |  9   |   *  |      |
    * |------+------+------+------+------+------|                                         |------+------+------+------+------+------|
    * |      |      |      |      |      |      |-------.                         ,-------| BkSpc|   4  |   5  |   6  |   +  |      |
    * |------+------+------+------+------+------|       |                         |       |------+------+------+------+------+------|
    * |      |      |      |      |      |      |-------|                         |-------|  0   |  1   |   2  |   3  |   -  |      |
    * `-----------------------------------------/       /                          \      \-----------------------------------------'
    *            | LGUI | LAlt | LCTR |LOWER | / Space  /                            \Space \  |RAISE | RCTR | RAlt |ADJUST|
    *            |      |      |      |      |/       /                              \      \ |      |      |      |      |
    *            `----------------------------------'                                '------''---------------------------'
    */
    [_NUMPAD] = LAYOUT( \
    _______, _______,   _______, _______,  _______, _______,                           KC_NLCK, _______,  _______,  KC_PSLS,  _______,  _______, \
    _______, _______,   _______, _______,  _______, _______,                           _______, KC_P7,  KC_P8,  KC_P9,  KC_PAST,  _______, \
    _______, _______,    _______, _______, _______, _______,                           KC_BSPC, KC_P4,  KC_P5,  KC_P6,  KC_PPLS,  _______, \
    _______,  _______,_______, _______,  _______,  _______, _______,         _______,  KC_P0, KC_P1,  KC_P2, KC_P3, KC_PMNS,  _______, \
                        _______, _______,  _______, _______,  KC_QWERTY,     KC_PENT,  _______, _______,  _______,  _______ \
    )
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _DVORAK:
            oled_write_ln_P(PSTR("Dvorak"), false);
            break;
        case _MOUSE:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case _GAMER:
            oled_write_ln_P(PSTR("Game"), false);
            break;
        case _NUMPAD:
            oled_write_ln_P(PSTR("Nump"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _DVORAK:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
        case KC_MOUSE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_MOUSE);
            }
            return false;
        case KC_GAMER:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAMER);
            }
            return false;
        case KC_NUMPAD:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_NUMPAD);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
        case KC_CLPB:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_V);
            } else {
                unregister_code(KC_LGUI);
                unregister_code(KC_V);
            }
            return false;
        case KC_SCRNSHT:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_LSHIFT);
                register_code(KC_S);
            } else {
                unregister_code(KC_LGUI);
                unregister_code(KC_LSHIFT);
                unregister_code(KC_S);
            }
            return false;
        case KC_LANG:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_SPACE);
            } else {
                unregister_code(KC_LGUI);
                unregister_code(KC_SPACE);
            }
            return false;
        case KC_UNTAB:
            if (record->event.pressed) {
                register_code(KC_LSHIFT);
                register_code(KC_TAB);
            } else {
                unregister_code(KC_LSHIFT);
                unregister_code(KC_TAB);
            }
            return false;
        case KC_COMMENT:
            if (record->event.pressed) {
                register_code(KC_LCTRL);
                register_code(KC_SLASH);
            } else {
                unregister_code(KC_LCTRL);
                unregister_code(KC_SLASH);
            }
            return false;
        case KC_FINDER:
            if (record->event.pressed) {
                register_code(KC_LCTRL);
                register_code(KC_F);
            } else {
                unregister_code(KC_LCTRL);
                unregister_code(KC_F);
            }
            return false;
        case KC_REDO:
            if (record->event.pressed) {
                register_code(KC_LCTRL);
                register_code(KC_LSHIFT);
                register_code(KC_Z);
            } else {
                unregister_code(KC_LCTRL);
                unregister_code(KC_LSHIFT);
                unregister_code(KC_Z);
            }
            return false;
        case KC_ALTTAB:
            if (record->event.pressed) {
                register_code(KC_LALT);
                register_code(KC_TAB);
            } else {
                unregister_code(KC_LALT);
                unregister_code(KC_TAB);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code16(C(S(KC_Z)));
        } else {
            tap_code16(C(KC_Z));
        }
    }
    return true;
}

#endif
