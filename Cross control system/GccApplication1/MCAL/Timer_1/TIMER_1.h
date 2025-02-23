﻿/*
 * TIMER_1.h
 *
 * Created: 17/04/2022 10:10:04 ص
 *  Author: HOSSAM MOSTAFA
 */ 


#ifndef TIMER_1_H_
#define TIMER_1_H_

#include "STD.h"
#include "REG.h"
#include "BIT_MATH.h"
#include "TIMER_1_CFG.h"

void M_Pwm1Init(void);
void M_Pwm1SetFrequancy(u32);
void M_Pwm1SetDutyCycle(fl64);
void M_Pwm1Start(void);
void M_Pwm1Stop(void);

#endif /* TIMER_1_H_ */