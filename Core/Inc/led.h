#include "stm32wbxx_hal.h"

#ifndef LED_H
#define LED_H

enum LED_COLOR{RED, GREEN, BLUE, ALL};

#endif


void ToggleRedLed();

void ToggleGreenLed();

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
