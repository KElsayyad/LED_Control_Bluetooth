/*
 * main.c
 *
 *  Created on: 20 Feb 2021
 *      Author: Kareem
 */

#include "BT_Int.h"

void main(void)
{
	u8 Val;
	BT_Init(); //Initialize BT module
	while(1)
	{
		Val=BT_Read(); //Read value from BT device
		Send_Command(Val); //send to slave (SPI)
	}
}
