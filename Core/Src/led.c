//
// Created by Davit Sargisyan on 05.08.21.
//

#include "led.h"

void ToggleLed(enum LED_COLOR color) {

    switch (color) {
        case RED:
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_1);
            break;
        case BLUE:
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
            break;
        case GREEN:
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
        case ALL:
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_1);
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
            HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
        default:
            break;

    }

}


