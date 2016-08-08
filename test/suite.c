#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

START_TEST(I_plus_I_returns_II) {
    char* input[] = {"I", "+", "I"};
    char* result = roman_get_output(input);
    ck_assert_str_eq("II", result);
}
END_TEST

Suite* roman_calculator_suite() {
    Suite* test_suite = suite_create("Roman-Numberal-Calculator");

    TCase* calculator_test_case = tcase_create("Calculator-Tests");
    tcase_add_test(calculator_test_case, I_plus_I_returns_II);

    suite_add_tcase(test_suite, calculator_test_case);
    
    return test_suite;
}

int main() {
    Suite* test_suite = roman_calculator_suite();

    SRunner* test_runner = srunner_create(test_suite);
    srunner_run_all(test_runner, CK_NORMAL);
    
    int failure_count = srunner_ntests_failed(test_runner);
    srunner_free(test_runner);

    return failure_count; // exit status will be 0 if no tests fail
}
