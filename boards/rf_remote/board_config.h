#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E17A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Candy Kingdom"
#define PRODUCT_NAME "RF Remote"
#define VOLUME_LABEL "RF-REMOTE"


#define USB_VID 0xF182   // LeapMotion
#define USB_PID 0x8003

#define BOARD_ID "SAMD21E17A-RF-Remote"

#define LED_PIN PIN_PA27

// There aren't any neopixels on this board

#endif
