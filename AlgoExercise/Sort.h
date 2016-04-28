/*
 * Sort.h
 *
 *  Created on: Apr 28, 2016
 *      Author: snagi
 */

#ifndef SORT_H_
#define SORT_H_


/******************************************************************************/
/******************************** zone macros *********************************/
/******************************************************************************/
#define SORT_u8TRUTH_TABLE_OUTPUT (u8)16

/******************************************************************************/
/******************************** zone typedefs *******************************/
/******************************************************************************/
typedef enum
{
   SORT_ECE_VERSION = 0   /* ECE version                                      */
  ,SORT_SAE_VERSION       /* SAE version                                      */
  ,SORT_VERSION_NUM       /* Number of Version Modes                          */
} SORT_tenuAledVersion;

typedef enum
{
   SORT_TAIL_MODE_OFF = 0     /* TAIL_MODE: OFF                               */
  ,SORT_TAIL_MODE_TAIL_ECE    /* TAIL_MODE: TAIL_ECE                          */
  ,SORT_TAIL_MODE_TAIL_SAE    /* TAIL_MODE: TAIL_SAE                          */
  ,SORT_TAIL_MODE_STOP        /* TAIL_MODE: STOP                              */
  ,SORT_TAIL_MODE_BOOST_ECE   /* TAIL_MODE: BOOST_ECE                         */
  ,SORT_TAIL_MODE_BOOST_SAE   /* TAIL_MODE: BOOST_SAE                         */
  ,SORT_TAIL_NUM_MODES        /* Number of TAIL Modes                         */
} SORT_tenuTailMode;

typedef enum
{
   SORT_TAIL_FUNC1 = 0       /* TAIL Function1                                */
  ,SORT_TAIL_FUNC2           /* TAIL Function2                                */
  ,SORT_TAIL_FUNC3           /* TAIL_Function3                                */
  ,SORT_TAIL_NUM_FUNCTIONS   /* Number of TAIL functions                      */
} SORT_tenuTailFunctions;

/******************************************************************************/
/**************************** zone structs/unions *****************************/
/******************************************************************************/

/******************************************************************************/
/******************************** zone macros *********************************/
/******************************************************************************/

/******************************************************************************/
/****************************** zone variables ********************************/
/******************************************************************************/
extern u8 SORT_u8Value1;
extern u8 SORT_u8Value2;
extern u8 SORT_u8Value3;
extern u8 SORT_u8Value4;

extern u8 SORT_u8Value1ShR;
extern u8 SORT_u8Value2ShL;
extern u8 SORT_u8Value3AndValue4;
/******************************************************************************/
/******************************* zone function ********************************/
/******************************************************************************/
extern void SORT_vidInit(void);

#endif /* SORT_H_ */
