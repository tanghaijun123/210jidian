/*
 * led.h
 *
 *  Created on: Apr 18, 2024
 *      Author: tom
 */

#ifndef BSP_LED_LED_H_
#define BSP_LED_LED_H_
#include "main.h"

#define led(x)    x? HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET) :HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET)

#endif /* BSP_LED_LED_H_ */
