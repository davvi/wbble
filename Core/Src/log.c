#include <stdbool.h>
#include "log.h"

extern UART_HandleTypeDef huart1;

void uart_log(enum LOG_TYPE logType) {
    uint8_t hhhh[] = "Hello World!\r\n";
    HAL_UART_Transmit_DMA(&huart1, (uint8_t *)&hhhh, sizeof(hhhh) -1);
}