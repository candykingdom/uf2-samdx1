#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E17A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Candy Kingdom"
#define PRODUCT_NAME "RF Remote"
#define VOLUME_LABEL "RF-REMOTE"


// TODO: Do we need our own VID/PID?
#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "SAMD21E17A-RF-Remote"

#define LED_PIN PIN_PA27

// There aren't any neopixels on this board

#endif
