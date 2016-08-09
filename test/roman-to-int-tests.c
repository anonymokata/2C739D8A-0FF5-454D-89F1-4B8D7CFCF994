
#include<check.h>
#include "../src/roman.h"

START_TEST(I_is_converted_to_1) {
    ck_assert_int_eq(1, roman_to_int("I"));
}
END_TEST

START_TEST(II_is_converted_to_2) {
    ck_assert_int_eq(2, roman_to_int("II"));
}
END_TEST

START_TEST(V_is_converted_to_5) {
    ck_assert_int_eq(5, roman_to_int("V"));
}
END_TEST

TCase* create_roman_to_int_tests() {
    TCase* tests = tcase_create("Roman-To-Int-Tests");
    tcase_add_test(tests, I_is_converted_to_1);
    tcase_add_test(tests, II_is_converted_to_2);
    tcase_add_test(tests, V_is_converted_to_5);

    return tests;
}


