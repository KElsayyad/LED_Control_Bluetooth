/*
 * main.c
 *
 *  Created on: 20 Feb 2021
 *      Author: Kareem
 */

#include "Actuator_Int.h"

void main(void)
{
	Actuator_Init(); //Initialize Actuator (LED)
	while(1)
	{
		Actuator_Control(); //Control (LED) from BT value
	}
}
