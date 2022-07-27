struct COLOR
{
    int h;
    int s;
};

struct LED
{
    int led;
    int h;
    int s;
    int v;
    int expires_on;
};

struct LED_Key
{
    int key;
    int led;
    int h;
    int s;
    int v;
    int expires_on;
};

enum LED_Location {
    LED_ESC,   // ESC, k13
    LED_GRV,   // ~, k16
    LED_TAB,   // Tab, k11
    LED_CAPS,  // Caps, k21
    LED_LSFT,  // Sh_L, k00
    LED_LCTL,  // Ct_L, k06
    LED_F1,    // F1, k26
    LED_1,     // 1, k17
    LED_Q,     // Q, k10
    LED_A,     // A, k12
    LED_Z,     // Z, k14
    LED_LWIN,  // Win_L, k90
    LED_F2,    // F2, k36
    LED_2,     // 2, k27
    LED_W,     // W, k20
    LED_S,     // S, k22
    LED_X,     // X, k24
    LED_LALT,  // Alt_L, k93
    LED_F3,    // F3, k31
    LED_3,     // 3, k37
    LED_E,     // E, k30
    LED_D,     // D, k32
    LED_C,     // C, k34
    LED_F4,    // F4, k33
    LED_4,     // 4, k47
    LED_R,     // R, k40
    LED_F,     // F, k42
    LED_V,     // V, k44
    LED_F5,    // F5, k07
    LED_5,     // 5, k46
    LED_T,     // T, k41
    LED_G,     // G, k43
    LED_B,     // B, k45
    LED_SPC,   // SPACE, k94
    LED_F6,    // F6, k63
    LED_6,     // 6, k56
    LED_Y,     // Y, k51
    LED_H,     // H, k53
    LED_N,     // N, k55
    LED_F7,    // F7, k71
    LED_7,     // 7, k57
    LED_U,     // U, k50
    LED_J,     // J, k52
    LED_M,     // M, k54
    LED_F8,    // F8, k76
    LED_8,     // 8, k67
    LED_I,     // I, k60
    LED_K,     // K, k62
    LED_COMM,  // ,, k64
    LED_RALT,  // Alt_R, k95
    LED_F9,    // F9, ka6
    LED_9,     // 9, k77
    LED_O,     // O, k70
    LED_L,     // L, k72
    LED_DOT,   // ., k74
    LED_FN,    // FN, k92
    LED_F10,   // F10, ka7
    LED_0,     // 0, k87
    LED_P,     // P, k80
    LED_SCLN,  // ;, k82
    LED_SLSH,  // ?, k85
    LED_F11,   // F11, ka3
    LED_MINS,  // -, k86
    LED_LBRC,  // [, k81
    LED_QUOT,  // ", k83
    LED_RCTL,  // Ctl_R, k04
    LED_F12,   // F12, ka5
    LED_L1,    // LED, l01
    LED_R1,    // LED, l11
    LED_INS,   // Prt, k97  -- remapped to INS -- remapped to HOME
    LED_L2,    // LED, l02
    LED_R2,    // LED, l12
    LED_DEL,   // Del, k65
    LED_L3,    // LED, l03
    LED_R3,    // LED, l13
    LED_PGUP,  // PgUp, k15
    LED_L4,    // LED, l04
    LED_R4,    // LED, l14
    LED_EQL,   // =, k66
    LED_RIGHT, // Right, k05
    LED_L5,    // LED, l05
    LED_R5,    // LED, l15
    LED_END,   // End, k75
    LED_L6,    // LED, l06
    LED_R6,    // LED, l16
    LED_BSPC,  // BSpc, ka1
    LED_PGDN,  // PgDn, k25
    LED_L7,    // LED, l07
    LED_R7,    // LED, l17
    LED_RBRC,  // ], k61
    LED_RSFT,  // Sh_R, k91
    LED_L8,    // LED, l08
    LED_R8,    // LED, l18
    LED_BSLS,  // \, ka2
    LED_UP,    // Up, k35
    LED_LEFT,  // Left, k03
    LED_ENT,   // Enter, ka4
    LED_DOWN  // Down, k73
};
