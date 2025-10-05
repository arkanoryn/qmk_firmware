SERIAL_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3389

CONSOLE_ENABLE = yes

QUANTUM_PAINTER_DRIVERS += st7735_spi surface

VPATH += keyboards/farkann_studio/cosmos_dactyl/common

SRC += lcd/lcd.c
