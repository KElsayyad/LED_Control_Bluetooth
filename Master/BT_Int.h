/*
 * BT_Int.h
 *
 *  Created on: 20 Mar 2021
 *      Author: Kareem
 */

#ifndef BT_INT_H_
#define BT_INT_H_
#include "Std_Types.h"
void BT_Init(void);
u8 BT_Read(void);
void Send_Command(u8 Val);


#define ON  1
#define OFF 2
#define TOG 3

#endif /* BT_INT_H_ */
