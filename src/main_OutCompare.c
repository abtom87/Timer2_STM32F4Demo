/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "gpio_led.h"
#include "usart2_comm.h"
#include "timer2_drv.h"

volatile unsigned long msTicks = 0;
void Delay_ms(unsigned long del_count)
{
	del_count *= 1000;
	msTicks = del_count;
	while (msTicks != 0)
		;
}
void SysTick_Init(void)
{
	/****************************************
	 *SystemFrequency/1000      1ms         *
	 *SystemFrequency/100000    10us        *
	 *SystemFrequency/1000000   1us         *
	 *****************************************/

	//SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK);
	while (SysTick_Config(SystemCoreClock / 1000000) != 0)
	{
	}

}

int main(void)
{
	SystemInit();
	SysTick_Init();

	init_gpio_pins();
	init_USART2();

	init_timer2();
	enable_timer_irq();
	enable_alt_func_gpio();

  
	GPIO_ToggleBits(GPIOD,GPIO_Pin_12);

	TIM2->CCR3 = 2;
	while(1);
}

void SysTick_Handler()
{}


