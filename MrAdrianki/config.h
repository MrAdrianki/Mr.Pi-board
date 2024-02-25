// Copyright 2024 MrAdrianki (@MrAdrianki)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// key matrix size
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

// Bootmagic_Lite key position
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed 
#define DEBOUNCE 5

// Audio Piezo Buzzer
#define NO_MUSIC_MODE

#ifdef AUDIO_ENABLE
#define AUDIO_PIN GP0
#define AUDIO_PWM_DRIVER PWMD0
#define AUDIO_PWM_CHANNEL 1
#define STARTUP_SONG SONG(Q__NOTE(_G5), Q__NOTE(_FS5), Q__NOTE(_DS5), Q__NOTE(_A4), Q__NOTE(_GS4), Q__NOTE(_E5), Q__NOTE(_GS5), HD_NOTE(_C6))
#endif



// Oled screen
#ifdef OLED_ENABLE
#define I2C1_SDA_PIN GP27
#define I2C1_SCL_PIN GP26
#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 31000
#endif