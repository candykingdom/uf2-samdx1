#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD21E17A__ 1

#define CRYSTALLESS    1

#define VENDOR_NAME "Candy Kingdom"
#define PRODUCT_NAME "Firefly v2"
#define VOLUME_LABEL "FIREFLY-V2"


#define USB_VID 0xF182   // LeapMotion
#define USB_PID 0x8001

#define BOARD_ID "SAMD21E17A-Firefly-v2"

#define LED_PIN PIN_PA27


// TODO: why doesn't this work?
#define BOARD_NEOPIXEL_PIN PIN_PA07
#define BOARD_NEOPIXEL_COUNT 4


#endif
