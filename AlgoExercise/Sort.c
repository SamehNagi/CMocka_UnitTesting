/*
 * Sort.c
 *
 *  Created on: Apr 1, 2016
 *      Author: helmelig
 */

/******************************************************************************/
/*                          Header Files included                             */
/******************************************************************************/
#include <Util.h>
#include "types.h"
#include "Sort_cfg.h"
#include "Sort.h"

/******************************************************************************/
/****************************** zone variables ********************************/
/******************************************************************************/
u8 SORT_u8Value1;
u8 SORT_u8Value2;
u8 SORT_u8Value3;
u8 SORT_u8Value4;

u8 SORT_u8Value1ShR;
u8 SORT_u8Value2ShL;
u8 SORT_u8Value3AndValue4;
/******************************************************************************/
/****************************** Public Functions ******************************/
/******************************************************************************/
void SORT_vidInit(void)
{
  SORT_u8Value1 = (u8)255;
  SORT_u8Value2 = (u8)15;
  SORT_u8Value3 = (u8)35;
  SORT_u8Value4 = (u8)30;

  SORT_u8Value1ShR = SORT_u8Value1 >> 4;
  SORT_u8Value2ShL = SORT_u8Value2 << 2;
  SORT_u8Value3AndValue4 = SORT_u8Value3 & SORT_u8Value4;

  return;
}

