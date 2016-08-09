#include<stdlib.h>
#include<check.h>
#include "../src/roman.h"

START_TEST(arabic_1_is_converted_to_I) {
    char* result = roman_from_int(1);
    ck_assert_str_eq("I", result);
    free(result);
}
END_TEST

START_TEST(arabic_2_is_converted_to_II) {
    char* result = roman_from_int(2);
    ck_assert_str_eq("II", result);
    free(result);
}
END_TEST

START_TEST(arabic_3_is_converted_to_III) {
    char* result = roman_from_int(3);
    ck_assert_str_eq("III", result);
    free(result);
}
END_TEST

START_TEST(arabic_4_is_converted_to_IV) {
    char* result = roman_from_int(4);
    ck_assert_str_eq("IV", result);
    free(result);
}
END_TEST

TCase* create_int_to_roman_tests() {
    TCase* tests = tcase_create("Int-To-Roman-Tests");

    tcase_add_test(tests, arabic_1_is_converted_to_I);
    tcase_add_test(tests, arabic_2_is_converted_to_II);
    tcase_add_test(tests, arabic_3_is_converted_to_III);
    tcase_add_test(tests, arabic_4_is_converted_to_IV);

    return tests;
}
