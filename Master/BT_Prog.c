/*
 * BT_Prog.c
 *
 *  Created on: 20 Mar 2021
 *      Author: Kareem
 */
#include "UART_Int.h"
#include "SPI_Int.h"
#include "BT_Int.h"

void BT_Init(void)
{
	UART_Init();
	SPI_InitMaster();
}
u8 BT_Read(void)
{
	u8 Val;
	Val = UART_Receive();
	return (Val);
}
void Send_Command(u8 Val)
{
	if (Val == '1')
	SPI_SendByte(ON);
	else if (Val == '2')
	SPI_SendByte(OFF);
	else if (Val == '3')
	SPI_SendByte(TOG);
}
