#include "gpio.h"

#include <stm32g4xx_hal.h>

void GPIO_init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = GPIO_PIN_3;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void GPIO_toggle_heartbeat(void) {
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_3);
}