/*
 * xianshi.c
 *
 *  Created on: Apr 26, 2024
 *      Author: tom
 */
#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "xianshi.h"
void thj(void)
{
	  char message[]="Opening degree:75%";
	 __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2,14000);
	 HAL_UART_Transmit(&huart1, (uint8_t*)message, sizeof(message), HAL_MAX_DELAY);
	}
void thj1(void)
{
	char message1[]="Opening degree:50%";
  __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2,20000);
HAL_UART_Transmit(&huart1, (uint8_t*)message1, sizeof(message1), HAL_MAX_DELAY);
}
void thj2(void)
{
	char message2[]="Opening degree:25%";
  __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2,25000);
HAL_UART_Transmit(&huart1, (uint8_t*)message2, sizeof(message2), HAL_MAX_DELAY);
}
void thj3(void)
{
	char message3[]="CLOSE";
  __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2,33000);
HAL_UART_Transmit(&huart1, (uint8_t*)message3, sizeof(message3), HAL_MAX_DELAY);
}
