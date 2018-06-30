#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E17A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Candy Kingdom"
#define PRODUCT_NAME "Firefly v2"
#define VOLUME_LABEL "FIREFLY-V2"


// TODO: Do we need our own VID/PID?
#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "SAMD21E17A-Firefly-v2"

#define LED_PIN PIN_PA17 // Not actually connected


// TODO: why doesn't this work?
// #define BOARD_NEOPIXEL_PIN PIN_PA07
// #define BOARD_NEOPIXEL_COUNT 4


#endif
