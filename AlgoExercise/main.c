#ifndef NULL
#define NULL 0
#endif

#include <Util.h>

extern void ALED_vidInit_TEST(void **state);

int main(void) {

	cmocka_set_message_output(CM_OUTPUT_TAP);

	const struct CMUnitTest tests[] = {
	cmocka_unit_test(ALED_vidInit_TEST)};
	return cmocka_run_group_tests(tests, NULL, NULL);
}
