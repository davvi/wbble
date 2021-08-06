//
// Created by Davit Sargisyan on 05.08.21.
//

#include "led.h"

void ToggleRedLed() {
    HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_1);
}

void ToggleGreenLed() {
    HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
}

void ToggleBlueLed() {
    HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
}

void ToggleLed(enum LED_COLOR color) {

    switch (color) {
        case RED:
            ToggleRedLed();
            break;
        case BLUE:
            ToggleBlueLed();
            break;
        case GREEN:
            ToggleGreenLed();
            break;
        case ALL:
            ToggleRedLed();
            ToggleBlueLed();
            ToggleGreenLed();
            break;
        default:
            break;

    }
}

void LedTest() {

    ToggleRedLed();
    HAL_Delay(100);
    ToggleGreenLed();
    HAL_Delay(100);
    ToggleBlueLed();
    HAL_Delay(100);

    ToggleBlueLed();
    HAL_Delay(100);
    ToggleGreenLed();
    HAL_Delay(100);
    ToggleRedLed();
    HAL_Delay(100);

}


