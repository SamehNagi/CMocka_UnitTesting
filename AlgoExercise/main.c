#ifndef NULL
#define NULL 0
#endif

#include <Util.h>

extern void SORT_INSERTION_TEST(void **state);
extern void SORT_MERGE_TEST(void **state);

int main(void) {

	const struct CMUnitTest tests[] = {
	cmocka_unit_test(SORT_INSERTION_TEST),
	cmocka_unit_test(SORT_MERGE_TEST) };
	return cmocka_run_group_tests(tests, NULL, NULL);

}
