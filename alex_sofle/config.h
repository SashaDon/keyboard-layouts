#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

/* communication between sides */
#define SERIAL_USE_MULTI_TRANSACTION
#define SPLIT_OLED_ENABLE

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 25

#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD