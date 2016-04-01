/*
 * Sort.c
 *
 *  Created on: Apr 1, 2016
 *      Author: helmelig
 */

#include <cmocka.h>
#include <stdio.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

typedef unsigned char u8;

void swap(u8 testArray[], u8 index1, u8 index2);
void Sort_Insertion(u8 testArray[], u8 size);

void Sort_Insertion(u8 testArray[], u8 size) {
	u8 key, walker;

	for (key = 1; key < size; key++) {

		for (walker = key; walker > 0; walker--) {
			if (testArray[walker] < testArray[walker - 1])
				swap(testArray, walker, walker - 1);
			else
				break;
		}

	}
}

void SORT_INSERTION_TEST(void **state) {

	(void) state;

	u8 testArray[] = { 3, 7, 1, 2, 9, 5 };
	const u8 expcted[] = { 1, 2, 3, 5, 7, 9 };

	Sort_Insertion(testArray, (u8) NELEMS(testArray));

	u8 index = 0;
	for (index = 0; index < NELEMS(expcted); index++) {
		assert_int_equal(testArray[index], expcted[index]);
	}

}

void swap(u8 testArray[], u8 index1, u8 index2) {

	u8 temp = testArray[index1];
	testArray[index1] = testArray[index2];
	testArray[index2] = temp;

}
