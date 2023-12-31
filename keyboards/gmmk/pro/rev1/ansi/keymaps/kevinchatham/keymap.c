#include QMK_KEYBOARD_H
#include "structs.c"

// Preferences

// Color Wheel : https://camo.githubusercontent.com/97ff9111a8a19e15162113006634530128986a2f8d5342aee7859e1756a189de/68747470733a2f2f692e696d6775722e636f6d2f766b59566f36362e6a7067
const struct COLOR THEME[] = {
    {80, 200},  // green
    {22, 200},  // tan
    {155, 200}, // light blue
    {6, 220},   // island red
};

const int BRIGHTNESS = 255;      // 0-255

const int SIDE_BRIGHTNESS = 200; // 0-255

const int FADE_DELAY_MS = 1500;  // no more than 30 secs

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     /* Base Layout
     *
     * ,-------------------------------------------------------------------------------------------------------------.
     * | Esc  ||  F1  |  F2  |  F3  |  F4  ||  F5  |  F6  |  F7  |  F8  ||  F9  | F10  | F11  | F12  || Del ||  Mute |
     * |=============================================================================================================|
     * |  ` ~ |  1 ! |  2 @ |  3 # |  4 $ |  5 % |  6 ^ |  7 & |  8 * |  9 ( |  0 ) |  - _ |  = + |  Backspc || PgUp |
     * |------+------+------+------+------+------+------+------+------+------+------+------+------+----------++------|
     * |   Tab   |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | [ }  | ] }  |  \ |  || PgDn |
     * |---------+------+------+------+------+------+------+------+------+------+------+------+------+-------++------|
     * |  Capslock  |  A   |  S   |  D   |  F  |  G   |  H   |  J   |  K   |  L   | ; :  | ' "  |    Enter   || Home |
     * |------------+------+------+------+-----+------+------+------+------+------+------+------|----+========+------|
     * |    LShift    |  Z   |  X   |  C   |  V   |  B   |  N   |  M   | , <  | . >  | / ?  | RShift ||  Up  || End  |
     * |--------------+------+------+------+------+------+------+------+------+------+------+--+=====++------++======|
     * |  Ctrl  |   Win  |  LAlt  |               Space                  | RAlt |  Fn  | Ctrl || Left | Down | Rght  |
     * `-------------------------------------------------------------------------------------------------------------'
     */

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_HOME,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        EEPROM_RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______,      _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};

// End Preferences

struct LED side_leds[] = {
    {LED_R1,0,0,0,0},
    {LED_R2,0,0,0,0},
    {LED_R3,0,0,0,0},
    {LED_R4,0,0,0,0},
    {LED_R5,0,0,0,0},
    {LED_R6,0,0,0,0},
    {LED_R7,0,0,0,0},
    {LED_R8,0,0,0,0},
    {LED_L1,0,0,0,0},
    {LED_L2,0,0,0,0},
    {LED_L3,0,0,0,0},
    {LED_L4,0,0,0,0},
    {LED_L5,0,0,0,0},
    {LED_L6,0,0,0,0},
    {LED_L7,0,0,0,0},
    {LED_L8,0,0,0,0},
};

struct LED_Key led_keys[] = {
    // Modifiers
    {KC_ESC,LED_ESC,0,0,0,0},
    {KC_TAB,LED_TAB,0,0,0,0},
    {KC_LSFT,LED_LSFT,0,0,0,0},
    {KC_LCTL,LED_LCTL,0,0,0,0},
    {KC_LGUI,LED_LWIN,0,0,0,0},
    {KC_LALT,LED_LALT,0,0,0,0},
    {KC_RALT,LED_RALT,0,0,0,0},
    {KC_RCTL,LED_RCTL,0,0,0,0},
    {KC_RSFT,LED_RSFT,0,0,0,0},
    {KC_BSPC,LED_BSPC,0,0,0,0},
    {KC_SPC,LED_SPC,0,0,0,0},
    {KC_ENT,LED_ENT,0,0,0,0},
    {KC_DEL,LED_INS,0,0,0,0},
    // Navigation
    {KC_PGUP, LED_DEL,0,0,0,0},
    {KC_PGDN,LED_PGUP,0,0,0,0},
    {KC_HOME,LED_PGDN,0,0,0,0},
    {KC_END,LED_END,0,0,0,0},
    {KC_UP,LED_UP,0,0,0,0},
    {KC_DOWN,LED_DOWN,0,0,0,0},
    {KC_LEFT,LED_LEFT,0,0,0,0},
    {KC_RIGHT,LED_RIGHT,0,0,0,0},
    // Function
    {KC_F1,LED_F1,0,0,0,0},
    {KC_F2,LED_F2,0,0,0,0},
    {KC_F3,LED_F3,0,0,0,0},
    {KC_F4,LED_F4,0,0,0,0},
    {KC_F5,LED_F5,0,0,0,0},
    {KC_F6,LED_F6,0,0,0,0},
    {KC_F7,LED_F7,0,0,0,0},
    {KC_F8,LED_F8,0,0,0,0},
    {KC_F9,LED_F9,0,0,0,0},
    {KC_F10,LED_F10,0,0,0,0},
    {KC_F11,LED_F11,0,0,0,0},
    {KC_F12,LED_F12,0,0,0,0},
    // Letters
    {KC_A,LED_A,0,0,0,0},
    {KC_B,LED_B,0,0,0,0},
    {KC_C,LED_C,0,0,0,0},
    {KC_D,LED_D,0,0,0,0},
    {KC_E,LED_E,0,0,0,0},
    {KC_F,LED_F,0,0,0,0},
    {KC_G,LED_G,0,0,0,0},
    {KC_H,LED_H,0,0,0,0},
    {KC_I,LED_I,0,0,0,0},
    {KC_J,LED_J,0,0,0,0},
    {KC_K,LED_K,0,0,0,0},
    {KC_L,LED_L,0,0,0,0},
    {KC_M,LED_M,0,0,0,0},
    {KC_N,LED_N,0,0,0,0},
    {KC_O,LED_O,0,0,0,0},
    {KC_P,LED_P,0,0,0,0},
    {KC_Q,LED_Q,0,0,0,0},
    {KC_R,LED_R,0,0,0,0},
    {KC_S,LED_S,0,0,0,0},
    {KC_T,LED_T,0,0,0,0},
    {KC_U,LED_U,0,0,0,0},
    {KC_V,LED_V,0,0,0,0},
    {KC_W,LED_W,0,0,0,0},
    {KC_X,LED_X,0,0,0,0},
    {KC_Y,LED_Y,0,0,0,0},
    {KC_Z,LED_Z,0,0,0,0},
    // Numbers
    {KC_1,LED_1,0,0,0,0},
    {KC_2,LED_2,0,0,0,0},
    {KC_3,LED_3,0,0,0,0},
    {KC_4,LED_4,0,0,0,0},
    {KC_5,LED_5,0,0,0,0},
    {KC_6,LED_6,0,0,0,0},
    {KC_7,LED_7,0,0,0,0},
    {KC_8,LED_8,0,0,0,0},
    {KC_9,LED_9,0,0,0,0},
    {KC_0,LED_0,0,0,0,0},
    // Specials
    {KC_GRV,LED_GRV,0,0,0,0},
    {KC_BSLS,LED_BSLS,0,0,0,0},
    {KC_EQL,LED_EQL,0,0,0,0},
    {KC_MINS,LED_MINS,0,0,0,0},
    {KC_LBRC,LED_LBRC,0,0,0,0},
    {KC_RBRC,LED_RBRC,0,0,0,0},
    {KC_QUOT,LED_QUOT,0,0,0,0},
    {KC_SLSH,LED_SLSH,0,0,0,0},
    {KC_SCLN,LED_SCLN,0,0,0,0},
    {KC_DOT,LED_DOT,0,0,0,0},
    {KC_COMM,LED_COMM,0,0,0,0},
    // {KC_CAPS,LED_CAPS,0,0,0,0}, // ignore caps lock
};

const int MAP_COUNT = sizeof led_keys / sizeof led_keys[0];

const int SIDE_MAP_COUNT = sizeof side_leds / sizeof side_leds[0];

const int THEME_COUNT = sizeof THEME / sizeof THEME[0];

void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_NONE);
    rgb_matrix_sethsv(HSV_OFF);
}

void encoder_scroll(bool clockwise) {
    if (clockwise){
        tap_code(KC_DOWN);
    } else{
        tap_code(KC_UP);
    }
}

void encoder_volume(bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    switch(biton32(layer_state)){
        case 0:
            encoder_volume(clockwise);
            break;
        case 1:
            encoder_scroll(clockwise);
            break;
        default:
            break;
        }
    }
    return false;
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    switch (biton32(layer_state)) {
        case 0:
            break;
        case 1:
            rgb_matrix_sethsv(HSV_OFF);
            rgb_matrix_set_color(LED_FN, RGB_RED);
            rgb_matrix_set_color(LED_ESC, RGB_RED);
            rgb_matrix_set_color(LED_BSLS, RGB_RED);
            return;
        default:
            break;
    }

    if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(LED_CAPS, 255, 0, 0);
    }

    uint16_t now = timer_read();

    for (int i = 0; i < MAP_COUNT; i++) {
        if (led_keys[i].key == KC_CAPS) continue;

        bool expired = timer_expired(now, led_keys[i].expires_on);

        if (expired) {
            if (led_keys[i].v > 0) led_keys[i].v -= 1;
            else led_keys[i].expires_on = 0;
        }

        HSV hsv = {.h = led_keys[i].h, .s = led_keys[i].s, .v = led_keys[i].v};
        RGB rgb = hsv_to_rgb(hsv);
        RGB_MATRIX_INDICATOR_SET_COLOR(led_keys[i].led, rgb.r, rgb.g, rgb.b);
    }

    for (int i = 0; i < SIDE_MAP_COUNT; i++)
    {
        bool expired = timer_expired(now, side_leds[i].expires_on);

        if (expired) {
            if (side_leds[i].v > 0) side_leds[i].v -= 1;
            else side_leds[i].expires_on = 0;
        }

        HSV hsv = {.h = side_leds[i].h, .s = side_leds[i].s, .v = side_leds[i].v};
        RGB rgb = hsv_to_rgb(hsv);
        RGB_MATRIX_INDICATOR_SET_COLOR(side_leds[i].led, rgb.r, rgb.g, rgb.b);
    }
}

bool process_record_user(uint16_t key, keyrecord_t *record) {
    int t = rand() % THEME_COUNT;
    int s = rand() % SIDE_MAP_COUNT;
    int expires_on = (record->event.time + FADE_DELAY_MS) | 1;

    if (side_leds[s].expires_on == 0) {
        side_leds[s].h = THEME[t].h;
        side_leds[s].s = THEME[t].s;
        side_leds[s].v = SIDE_BRIGHTNESS;
        side_leds[s].expires_on = expires_on;
    }

    for (int i = 0; i < MAP_COUNT; i++)
    {
        // * on when pressed. off when released
        // if led_keys[i].key == key && record->event.pressed

        // * off when pressed. on when released
        // if led_keys[i].key == key && !record->event.pressed

        // * on when pressed. on when released
        // if led_keys[i].key == key

        if (led_keys[i].key == key){
            led_keys[i].h        = THEME[t].h; // THEME[index].h OR rand() % 256
            led_keys[i].s        = THEME[t].s;
            led_keys[i].v        = BRIGHTNESS;
            led_keys[i].expires_on = expires_on;
        }
    }

    return true;
}

// * EXTRA MAPS / MAY BE USED IN FUTURE

// const uint8_t LED_LIST_WASD[] = {
//     LED_W,
//     LED_A,
//     LED_S,
//     LED_D
// };

// const uint8_t LED_LIST_ARROWS[] = {
//     LED_LEFT,
//     LED_RIGHT,
//     LED_UP,
//     LED_DOWN
// };

// const uint8_t LED_LIST_FUNCROW[] = {
//     LED_ESC,
//     LED_F1,
//     LED_F2,
//     LED_F3,
//     LED_F4,
//     LED_F5,
//     LED_F6,
//     LED_F7,
//     LED_F8,
//     LED_F9,
//     LED_F10,
//     LED_F11,
//     LED_F12,
//     LED_INS
// };

// const uint8_t LED_LIST_NUMROW[] = {
//     LED_GRV,
//     LED_1,
//     LED_2,
//     LED_3,
//     LED_4,
//     LED_5,
//     LED_6,
//     LED_7,
//     LED_8,
//     LED_9,
//     LED_0,
//     LED_MINS,
//     LED_EQL,
//     LED_BSPC,
//     LED_DEL
// };

// const uint8_t LED_LIST_LETTERS[] = {
// /*    LED_1,
//     LED_2,
//     LED_3,
//     LED_4,
//     LED_5,
//     LED_6,
//     LED_7,
//     LED_8,
//     LED_9,
//     LED_0, */
//     LED_Q,
//     LED_W,
//     LED_E,
//     LED_R,
//     LED_T,
//     LED_Y,
//     LED_U,
//     LED_I,
//     LED_O,
//     LED_P,
//     LED_A,
//     LED_S,
//     LED_D,
//     LED_F,
//     LED_G,
//     LED_H,
//     LED_J,
//     LED_K,
//     LED_L,
//     LED_Z,
//     LED_X,
//     LED_C,
//     LED_V,
//     LED_B,
//     LED_N,
//     LED_M
// };

// const uint8_t LED_LIST_NUMPAD[] = {
//     LED_1,
//     LED_2,
//     LED_3,
//     LED_4,
//     LED_5,
//     LED_6,
//     LED_7,
//     LED_8,
//     LED_9,
//     LED_0,
//     LED_MINS,
//     LED_EQL,
//     LED_U,
//     LED_I,
//     LED_O,
//     LED_P,
//     LED_J,
//     LED_K,
//     LED_L,
//     LED_SCLN,
//     LED_ENT,
//     LED_M,
//     LED_COMM,
//     LED_DOT,
//     LED_SLSH,
//     LED_END,
//     LED_RIGHT
// };

// const uint8_t LED_SIDE_LEFT[] = {
//     LED_L1,
//     LED_L2,
//     LED_L3,
//     LED_L4,
//     LED_L5,
//     LED_L6,
//     LED_L7,
//     LED_L8
// };

// const uint8_t LED_SIDE_RIGHT[] = {
//     LED_R1,
//     LED_R2,
//     LED_R3,
//     LED_R4,
//     LED_R5,
//     LED_R6,
//     LED_R7,
//     LED_R8
// };
