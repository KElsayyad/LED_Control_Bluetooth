/*
 * Actuator_Prog.c
 *
 *  Created on: 20 Mar 2021
 *      Author: Kareem
 */
#include "DIO_Int.h"
#include "SPI_Int.h"
#include "Actuator_Int.h"
void Actuator_Init(void)
{
	Dio_SetPinDirection(GroupB, 0, OUTPUT);
	SPI_InitSlave();
}
void Actuator_Control(void)
{
	u8 val;
	val=SPI_ReceiveByte();
	if (val == ON)
		SET_BIT(PORTB,0);
	else if (val == OFF)
		CLR_BIT(PORTB,0);
	else if (val == TOG)
		TOG_BIT(PORTB,0);
}
