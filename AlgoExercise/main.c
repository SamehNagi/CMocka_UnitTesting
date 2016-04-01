#ifndef NULL
#define NULL 0
#endif

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>

extern void SORT_INSERTION_TEST(void **state);

int main(void) {

    const struct CMUnitTest tests[] = {
        cmocka_unit_test(SORT_INSERTION_TEST),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);

}
