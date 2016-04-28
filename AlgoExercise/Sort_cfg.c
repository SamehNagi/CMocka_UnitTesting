/*
 * Sort_cfg.c
 *
 *  Created on: Apr 28, 2016
 *      Author: snagi
 */

/******************************************************************************/
/*                          Header Files included                             */
/******************************************************************************/
#include "Sort_cfg.h"

/******************************************************************************/
/******************************** zone constants ******************************/
/******************************************************************************/
const u16 SORT_kau16TailModes[SORT_VERSION_NUM][SORT_u8TRUTH_TABLE_OUTPUT] =
{    /* !Comment: ECE Version                                                 */
    {/*                      INPUT                        |       OUTPUT      */
     /*  Signal_1  |  Signal_2  |  Signal_3  |  Signal_4  |    Output_Mode    */
     /*     0      |      0     |      0     |      0     |*/   SORT_TAIL_MODE_OFF
     /*     0      |      0     |      0     |      1     |*/  ,SORT_TAIL_MODE_TAIL_ECE
     /*     0      |      0     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     0      |      0     |      1     |      1     |*/  ,SORT_TAIL_MODE_TAIL_ECE
     /*     0      |      1     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     0      |      1     |      0     |      1     |*/  ,SORT_TAIL_MODE_BOOST_ECE
     /*     0      |      1     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     0      |      1     |      1     |      1     |*/  ,SORT_TAIL_MODE_TAIL_ECE
     /*     1      |      0     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      0     |      1     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      1     |      1     |*/  ,SORT_TAIL_MODE_TAIL_ECE
     /*     1      |      1     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      1     |      0     |      1     |*/  ,SORT_TAIL_MODE_BOOST_ECE
     /*     1      |      1     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      1     |      1     |      1     |*/  ,SORT_TAIL_MODE_TAIL_ECE
    },
    /* !Comment: SAE Version                                                  */
    {/*                      INPUT                        |       OUTPUT      */
     /*  Signal_1  |  Signal_2  |  Signal_3  |  Signal_4  |    Output_Mode    */
     /*     0      |      0     |      0     |      0     |*/   SORT_TAIL_MODE_OFF
     /*     0      |      0     |      0     |      1     |*/  ,SORT_TAIL_MODE_TAIL_SAE
     /*     0      |      0     |      1     |      0     |*/  ,SORT_TAIL_MODE_STOP
     /*     0      |      0     |      1     |      1     |*/  ,SORT_TAIL_MODE_STOP
     /*     0      |      1     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     0      |      1     |      0     |      1     |*/  ,SORT_TAIL_MODE_BOOST_SAE
     /*     0      |      1     |      1     |      0     |*/  ,SORT_TAIL_MODE_STOP
     /*     0      |      1     |      1     |      1     |*/  ,SORT_TAIL_MODE_STOP
     /*     1      |      0     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      0     |      1     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      0     |      1     |      1     |*/  ,SORT_TAIL_MODE_TAIL_SAE
     /*     1      |      1     |      0     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      1     |      0     |      1     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      1     |      1     |      0     |*/  ,SORT_TAIL_MODE_OFF
     /*     1      |      1     |      1     |      1     |*/  ,SORT_TAIL_MODE_BOOST_SAE
    }
};
