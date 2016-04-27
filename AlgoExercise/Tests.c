/*
 * Tests.c
 *
 *  Created on: Apr 2, 2016
 *      Author: helmelig
 */
#include <Util.h>
#include "Sort.h"

void ALED_vidInit_TEST(void **state) {

	(void) state;

	ALED_vidInit();

	assert_int_equal(ALED_u8DiagStatus1, 15);
	assert_int_equal(ALED_u8DiagStatus2, 25);
	assert_int_equal(ALED_u8DiagStatus3, 35);
	assert_int_equal(ALED_u8DiagStatus4, 30);
}

/*void SORT_MERGE_TEST(void **state) {

	(void) state;

	u8 testArray[] = { 3, 7, 1, 2, 9, 5, 4, 6 };
	const u8 expcted[] = { 1, 2, 3, 4, 5, 6, 7, 9 };

	Sort_Merge(testArray, NELEMS(testArray), 0);
#ifdef DEBUG
	u8 printIndex = 0;
	for (printIndex = 0; printIndex < NELEMS(testArray); printIndex++) {
		printf("%d ", testArray[printIndex]);
	}
#endif
	u8 index = 0;
	for (index = 0; index < NELEMS(expcted); index++) {
		assert_int_equal(testArray[index], expcted[index]);
	}
	//assert_int_equal(0,5);
}*/
