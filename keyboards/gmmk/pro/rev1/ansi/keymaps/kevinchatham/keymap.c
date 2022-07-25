#include QMK_KEYBOARD_H

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

enum led_location_map {
    LED_ESC   = 0,  // ESC, k13
    LED_GRV   = 1,  // ~, k16
    LED_TAB   = 2,  // Tab, k11
    LED_CAPS  = 3,  // Caps, k21
    LED_LSFT  = 4,  // Sh_L, k00
    LED_LCTL  = 5,  // Ct_L, k06
    LED_F1    = 6,  // F1, k26
    LED_1     = 7,  // 1, k17
    LED_Q     = 8,  // Q, k10
    LED_A     = 9,  // A, k12
    LED_Z     = 10, // Z, k14
    LED_LWIN  = 11, // Win_L, k90
    LED_F2    = 12, // F2, k36
    LED_2     = 13, // 2, k27
    LED_W     = 14, // W, k20
    LED_S     = 15, // S, k22
    LED_X     = 16, // X, k24
    LED_LALT  = 17, // Alt_L, k93
    LED_F3    = 18, // F3, k31
    LED_3     = 19, // 3, k37
    LED_E     = 20, // E, k30
    LED_D     = 21, // D, k32
    LED_C     = 22, // C, k34
    LED_F4    = 23, // F4, k33
    LED_4     = 24, // 4, k47
    LED_R     = 25, // R, k40
    LED_F     = 26, // F, k42
    LED_V     = 27, // V, k44
    LED_F5    = 28, // F5, k07
    LED_5     = 29, // 5, k46
    LED_T     = 30, // T, k41
    LED_G     = 31, // G, k43
    LED_B     = 32, // B, k45
    LED_SPC   = 33, // SPACE, k94
    LED_F6    = 34, // F6, k63
    LED_6     = 35, // 6, k56
    LED_Y     = 36, // Y, k51
    LED_H     = 37, // H, k53
    LED_N     = 38, // N, k55
    LED_F7    = 39, // F7, k71
    LED_7     = 40, // 7, k57
    LED_U     = 41, // U, k50
    LED_J     = 42, // J, k52
    LED_M     = 43, // M, k54
    LED_F8    = 44, // F8, k76
    LED_8     = 45, // 8, k67
    LED_I     = 46, // I, k60
    LED_K     = 47, // K, k62
    LED_COMM  = 48, // ,, k64
    LED_RALT  = 49, // Alt_R, k95
    LED_F9    = 50, // F9, ka6
    LED_9     = 51, // 9, k77
    LED_O     = 52, // O, k70
    LED_L     = 53, // L, k72
    LED_DOT   = 54, // ., k74
    LED_FN    = 55, // FN, k92
    LED_F10   = 56, // F10, ka7
    LED_0     = 57, // 0, k87
    LED_P     = 58, // P, k80
    LED_SCLN  = 59, // ;, k82
    LED_SLSH  = 60, // ?, k85
    LED_F11   = 61, // F11, ka3
    LED_MINS  = 62, // -, k86
    LED_LBRC  = 63, // [, k81
    LED_QUOT  = 64, // ", k83
    LED_RCTL  = 65, // Ctl_R, k04
    LED_F12   = 66, // F12, ka5
    LED_L1    = 67, // LED, l01
    LED_R1    = 68, // LED, l11
    LED_INS   = 69, // Prt, k97  -- remapped to INS -- remapped to HOME
    LED_L2    = 70, // LED, l02
    LED_R2    = 71, // LED, l12
    LED_DEL   = 72, // Del, k65
    LED_L3    = 73, // LED, l03
    LED_R3    = 74, // LED, l13
    LED_PGUP  = 75, // PgUp, k15
    LED_L4    = 76, // LED, l04
    LED_R4    = 77, // LED, l14
    LED_EQL   = 78, // =, k66
    LED_RIGHT = 79, // Right, k05
    LED_L5    = 80, // LED, l05
    LED_R5    = 81, // LED, l15
    LED_END   = 82, // End, k75
    LED_L6    = 83, // LED, l06
    LED_R6    = 84, // LED, l16
    LED_BSPC  = 85, // BSpc, ka1
    LED_PGDN  = 86, // PgDn, k25
    LED_L7    = 87, // LED, l07
    LED_R7    = 88, // LED, l17
    LED_RBRC  = 89, // ], k61
    LED_RSFT  = 90, // Sh_R, k91
    LED_L8    = 91, // LED, l08
    LED_R8    = 92, // LED, l18
    LED_BSLS  = 93, // \, ka2
    LED_UP    = 94, // Up, k35
    LED_LEFT  = 95, // Left, k03
    LED_ENT   = 96, // Enter, ka4
    LED_DOWN  = 97  // Down, k73
};

const uint8_t LED_LIST_WASD[] = {
    LED_W,
    LED_A,
    LED_S,
    LED_D
};

const uint8_t LED_LIST_ARROWS[] = {
    LED_LEFT,
    LED_RIGHT,
    LED_UP,
    LED_DOWN
};

const uint8_t LED_LIST_FUNCROW[] = {
    LED_ESC,
    LED_F1,
    LED_F2,
    LED_F3,
    LED_F4,
    LED_F5,
    LED_F6,
    LED_F7,
    LED_F8,
    LED_F9,
    LED_F10,
    LED_F11,
    LED_F12,
    LED_INS
};

const uint8_t LED_LIST_NUMROW[] = {
    LED_GRV,
    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_5,
    LED_6,
    LED_7,
    LED_8,
    LED_9,
    LED_0,
    LED_MINS,
    LED_EQL,
    LED_BSPC,
    LED_DEL
};

const uint8_t LED_LIST_LETTERS[] = {
/*    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_5,
    LED_6,
    LED_7,
    LED_8,
    LED_9,
    LED_0, */
    LED_Q,
    LED_W,
    LED_E,
    LED_R,
    LED_T,
    LED_Y,
    LED_U,
    LED_I,
    LED_O,
    LED_P,
    LED_A,
    LED_S,
    LED_D,
    LED_F,
    LED_G,
    LED_H,
    LED_J,
    LED_K,
    LED_L,
    LED_Z,
    LED_X,
    LED_C,
    LED_V,
    LED_B,
    LED_N,
    LED_M
};

const uint8_t LED_LIST_NUMPAD[] = {
    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_5,
    LED_6,
    LED_7,
    LED_8,
    LED_9,
    LED_0,
    LED_MINS,
    LED_EQL,
    LED_U,
    LED_I,
    LED_O,
    LED_P,
    LED_J,
    LED_K,
    LED_L,
    LED_SCLN,
    LED_ENT,
    LED_M,
    LED_COMM,
    LED_DOT,
    LED_SLSH,
    LED_END,
    LED_RIGHT
};

const uint8_t LED_SIDE_LEFT[] = {
    LED_L1,
    LED_L2,
    LED_L3,
    LED_L4,
    LED_L5,
    LED_L6,
    LED_L7,
    LED_L8
};

const uint8_t LED_SIDE_RIGHT[] = {
    LED_R1,
    LED_R2,
    LED_R3,
    LED_R4,
    LED_R5,
    LED_R6,
    LED_R7,
    LED_R8
};

struct HSV {
    int h;
    int s;
    int v;
};

struct key_to_led
{
    int key;
    int led;
    int h;
    int s;
    int v;
    int  expires_on;
};

struct led
{
    int led;
    int h;
    int s;
    int v;
    int  expires_on;
};

// Color Wheel : https://shorturl.at/gnqS9
static struct HSV _theme[] = {
    {127, 255, 255},
    {255, 255, 255},
};

int THEME_COUNT = sizeof _theme / sizeof _theme[0];

static struct led _right_side_map[] = {
    {LED_R1,0,0,0,0},
    {LED_R2,0,0,0,0},
    {LED_R3,0,0,0,0},
    {LED_R4,0,0,0,0},
    {LED_R5,0,0,0,0},
    {LED_R6,0,0,0,0},
    {LED_R7,0,0,0,0},
    {LED_R8,0,0,0,0},
};

int RIGHT_SIDE_MAP_COUNT = sizeof _right_side_map / sizeof _right_side_map[0];

static struct led _left_side_map[] = {
    {LED_L1,0,0,0,0},
    {LED_L2,0,0,0,0},
    {LED_L3,0,0,0,0},
    {LED_L4,0,0,0,0},
    {LED_L5,0,0,0,0},
    {LED_L6,0,0,0,0},
    {LED_L7,0,0,0,0},
    {LED_L8,0,0,0,0},
};

int LEFT_SIDE_MAP_COUNT = sizeof _left_side_map / sizeof _left_side_map[0];

static struct led _side_map[] = {
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

int SIDE_MAP_COUNT = sizeof _side_map / sizeof _side_map[0];

static struct key_to_led _map[] = {
    // {KC_CAPS,LED_CAPS,0,0,0,0}, // covered by other lighting effect

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

    {KC_DEL,LED_INS,0,0,0,0},
    {KC_PGUP, LED_DEL,0,0,0,0},
    {KC_PGDN,LED_PGUP,0,0,0,0},
    {KC_HOME,LED_PGDN,0,0,0,0},
    {KC_END,LED_END,0,0,0,0},

    {KC_UP,LED_UP,0,0,0,0},
    {KC_DOWN,LED_DOWN,0,0,0,0},
    {KC_LEFT,LED_LEFT,0,0,0,0},
    {KC_RIGHT,LED_RIGHT,0,0,0,0},

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
};

int MAP_COUNT = sizeof _map / sizeof _map[0];

void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_NONE);
    rgb_matrix_sethsv(HSV_OFF);
}

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    switch(biton32(layer_state)){
        case 0:
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
            break;
        case 1:
            if (clockwise){
                tap_code(KC_WH_D);
            } else{
                tap_code(KC_WH_U);
            }
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

    for (int i = 0; i < SIDE_MAP_COUNT; i++)
    {
        bool expired = timer_expired(timer_read(), _side_map[i].expires_on);

        if (expired) {
            if (_side_map[i].v > 0) _side_map[i].v -= 1;
            else _side_map[i].expires_on = 0;
        }

        HSV hsv = {.h = _side_map[i].h, .s = _side_map[i].s, .v = _side_map[i].v/2};
        RGB rgb = hsv_to_rgb(hsv);
        RGB_MATRIX_INDICATOR_SET_COLOR(_side_map[i].led, rgb.r, rgb.g, rgb.b);
    }

    for (int i = 0; i < MAP_COUNT; i++)
    {
        if (_map[i].key == KC_CAPS) continue;

        bool expired = timer_expired(timer_read(), _map[i].expires_on);

        if (expired) {
            if (_map[i].v > 0) _map[i].v -= 1;
            else _map[i].expires_on = 0;
        }

        HSV hsv = {.h = _map[i].h, .s = _map[i].s, .v = _map[i].v};
        RGB rgb = hsv_to_rgb(hsv);
        RGB_MATRIX_INDICATOR_SET_COLOR(_map[i].led, rgb.r, rgb.g, rgb.b);
    }
}

bool process_record_user(uint16_t key, keyrecord_t *record) {
    for (int i = 0; i < MAP_COUNT; i++)
    {
        // * on when pressed. off when released
        // if _map[i].key == key && record->event.pressed

        // * off when pressed. on when released
        // if _map[i].key == key && !record->event.pressed

        // * on when pressed. on when released
        // if _map[i].key == key

        if (_map[i].key == key){
            int index = rand() % THEME_COUNT;
            int side_index = rand() % SIDE_MAP_COUNT;
            int expires_on = (record->event.time+1500)|1;
            // _theme[index].h
            // rand() % 256 // any in 0 -> 255
            _map[i].h        = rand() % 256;
            _map[i].s        = _theme[index].s;
            _map[i].v        = _theme[index].v;
            _map[i].expires_on      = expires_on;
            _side_map[side_index].h = _map[i].h;
            _side_map[side_index].s = _map[i].s;
            _side_map[side_index].v = _map[i].v;
            _side_map[i].expires_on = expires_on;
        }
    }
    return true;
}
