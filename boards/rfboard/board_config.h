#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E17A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Candy Kingdom"
#define PRODUCT_NAME "rfboard"
#define VOLUME_LABEL "RFBOARD"


// TODO: Do we need our own VID/PID?
#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "SAMD21E17A-rfboard"

#define LED_PIN PIN_PA27

#define BOARD_NEOPIXEL_PIN PIN_PA07
// Board has 1 LED, also use next LED so it's easy to test attached lights
#define BOARD_NEOPIXEL_COUNT 2


#endif
