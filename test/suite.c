#include <stdlib.h>
#include <check.h>
#include "../src/roman.h"

#include "roman-to-int-tests.h"
#include "int-to-roman-tests.h"

START_TEST(I_plus_I_returns_II) {
    char* input[] = {"I", "+", "I"};
    char* result = roman_get_output(input);
    ck_assert_str_eq("II", result);
    free(result);
}
END_TEST

START_TEST(II_plus_I_returns_III) {
    char* input[] = {"II", "+", "I"};
    char* result = roman_get_output(input);
    ck_assert_str_eq("III", result);
    free(result);
}
END_TEST

START_TEST(MMMDLV_plus_CDXLIV_returns_MMMCMXCIX) {
    char* input[] = {"MMMDLV", "+", "CDXLIV"};
    char* result = roman_get_output(input);
    ck_assert_str_eq("MMMCMXCIX", result);
    free(result);
}
END_TEST

Suite* roman_calculator_suite() {
    Suite* test_suite = suite_create("Roman-Numberal-Calculator");

    TCase* calculator_test_case = tcase_create("Calculator-Tests");
    tcase_add_test(calculator_test_case, I_plus_I_returns_II);
    tcase_add_test(calculator_test_case, II_plus_I_returns_III);
    tcase_add_test(calculator_test_case, MMMDLV_plus_CDXLIV_returns_MMMCMXCIX);

    suite_add_tcase(test_suite, calculator_test_case);

    TCase* roman_to_int_tests = create_roman_to_int_tests();
    suite_add_tcase(test_suite, roman_to_int_tests);

    TCase* int_to_roman_tests = create_int_to_roman_tests();
    suite_add_tcase(test_suite, int_to_roman_tests);
    
    return test_suite;
}

int main() {
    Suite* test_suite = roman_calculator_suite();

    SRunner* test_runner = srunner_create(test_suite);
    srunner_run_all(test_runner, CK_VERBOSE);
    
    int failure_count = srunner_ntests_failed(test_runner);
    srunner_free(test_runner);

    return failure_count; // exit status will be 0 if no tests fail
}
