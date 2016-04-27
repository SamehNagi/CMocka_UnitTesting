/*
 * Sort.c
 *
 *  Created on: Apr 1, 2016
 *      Author: helmelig
 */

#include <Util.h>
#include "Sort.h"

u8 ALED_u8DiagStatus1;
u8 ALED_u8DiagStatus2;
u8 ALED_u8DiagStatus3;
u8 ALED_u8DiagStatus4;

void ALED_vidInit(void)
{
  ALED_u8DiagStatus1 = (u8)15;
  ALED_u8DiagStatus2 = (u8)25;
  ALED_u8DiagStatus3 = (u8)35;
  ALED_u8DiagStatus4 = (u8)30;
}

