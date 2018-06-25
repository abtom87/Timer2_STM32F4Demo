/*
 * timer2_drv.h
 *
 *  Created on: May 15, 2018
 *      Author: abel
 */

#ifndef TIMER2_DRV_H_
#define TIMER2_DRV_H_

#include "stm32f4xx_tim.h"

void init_timer2(void);

void enable_timer_irq(void);

void enable_alt_func_gpio(void);



#endif /* TIMER2_DRV_H_ */
