/*
 * Tests.c
 *
 *  Created on: Apr 2, 2016
 *      Author: helmelig
 */
#include <Util.h>
#include "Sort.h"
#include "Sort_cfg.h"

void SORT_vidInit_TEST(void **state) {

	(void) state;

	SORT_vidInit();

	assert_int_equal(SORT_u8Value1, 255);
	assert_int_equal(SORT_u8Value2, 15);
	assert_int_equal(SORT_u8Value3, 35);
	assert_int_equal(SORT_u8Value4, 30);

	assert_int_equal(SORT_u8Value1ShR, 15);
	assert_int_equal(SORT_u8Value2ShL, 60);
	assert_int_equal(SORT_u8Value3AndValue4, 2);
}
