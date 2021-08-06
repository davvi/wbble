//
// Created by Davit Sargisyan on 05.08.21.
//

#ifndef WBBLE_LED_H
#define WBBLE_LED_H

#endif //WBBLE_LED_H

#include "stm32wbxx_hal.h"

enum LED_COLOR{RED, GREEN, BLUE, ALL};

void ToggleRedLed();

void ToggleGreenLed() ;

void ToggleBlueLed();

/**
 * Turn on/off lend with specified color
 * @param color target color
 */
void ToggleLed(enum LED_COLOR color);

/**
 * Turn on and then then off all led
 */
void LedTest();
