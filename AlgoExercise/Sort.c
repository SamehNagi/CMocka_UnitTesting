/*
 * Sort.c
 *
 *  Created on: Apr 1, 2016
 *      Author: helmelig
 */

#include <Util.h>

void swap(u8 testArray[], u8 index1, u8 index2);
void Sort_Insertion(u8 testArray[], u8 size);
void Sort_Merge(u8 testArray[], u8 size, u8 leftStartIndex);
void merge(u8 testArray[], const u8 startIndex, const u8 size);

/*  Insertion sort:
 *  Stable
 *  O(1) extra space
 *  O(n2) comparisons and swaps
 *  Adaptive: O(n) time when nearly sorted
 *  Very low overhead
 */
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
/**
 * Algo: -If the input sequence has only one element, return.
 *       -Partition the input sequence into two halves.
 *       -Sort the two subsequences using the same algorithm.
 *       -Merge the two sorted subsequences to form the output sequence.
 *Props: -Stable
 *		 -O(lg(n)) extra space for linked lists
 *		 -O(n·lg(n)) time
 *		 -Not adaptive
 *		 -Does not require random access to data
 * */
void Sort_Merge(u8 testArray[], u8 size, u8 start) {
#ifdef DEBUG
	printf("size %d start %d\n", size, start);
#endif
	if (size == 1)
		return;
	u8 pivot = size / 2;
	Sort_Merge(testArray, pivot, start);
	Sort_Merge(testArray, pivot, start + pivot);
	merge(testArray, start, size);

	return;
}

void merge(u8 testArray[], const u8 startIndex, const u8 size) {

	int leftIndex = startIndex;
	int rightIndex = startIndex + size / 2;
	u8 mergeIndex = 0;
	while (mergeIndex < size) {
		if (testArray[leftIndex] > testArray[rightIndex]) {
			swap(testArray, leftIndex, rightIndex);
			rightIndex++;
		} else {
			leftIndex++;
		}
		mergeIndex++;
	}
}

void swap(u8 testArray[], u8 index1, u8 index2) {
	u8 temp = testArray[index1];
	testArray[index1] = testArray[index2];
	testArray[index2] = temp;
}

void SORT_MERGE_TEST(void **state) {

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

}
