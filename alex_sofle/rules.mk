# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes

LTO_ENABLE = yes

OLED_DRIVER_ENABLE = yes

SPLIT_KEYBOARD = yes

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes

CAPS_WORD_ENABLE = yes
COMMAND_ENABLE = no

TAP_DANCE_ENABLE = yes

VPATH += keyboards/gboards/
COMBO_ENABLE = yes
