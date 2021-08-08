#include "stm32wbxx_hal.h"

enum LOG_TYPE {LT_ERROR, LT_INFO, LT_DEBUG};

void LOG_INIT(UART_HandleTypeDef huart);

void uart_log(enum LOG_TYPE logType);