/*
 * gpio_led.c
 *
 *  Created on: May 15, 2018
 *      Author: abel
 */


#include "gpio_led.h"


void init_gpio_pins(void)
{

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	GPIO_InitTypeDef GPIO_LED_InitStruct;

	GPIO_LED_InitStruct.GPIO_Mode   = GPIO_Mode_OUT;
	GPIO_LED_InitStruct.GPIO_OType  = GPIO_OType_PP;
	GPIO_LED_InitStruct.GPIO_Pin    = GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 ;
	GPIO_LED_InitStruct.GPIO_PuPd   = GPIO_PuPd_NOPULL;
	GPIO_LED_InitStruct.GPIO_Speed  = GPIO_Fast_Speed;

	GPIO_Init(GPIOD,&GPIO_LED_InitStruct);



}
