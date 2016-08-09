
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

START_TEST(X_is_converted_to_10) {
    ck_assert_int_eq(10, roman_to_int("X"));
}
END_TEST

START_TEST(L_is_converted_to_50) {
    ck_assert_int_eq(50, roman_to_int("L"));
}
END_TEST

START_TEST(C_is_converted_to_100) {
    ck_assert_int_eq(100, roman_to_int("C"));
}
END_TEST

START_TEST(D_is_converted_to_500) {
    ck_assert_int_eq(500, roman_to_int("D"));
}
END_TEST

START_TEST(M_is_converted_to_1000) {
    ck_assert_int_eq(1000, roman_to_int("M"));
}
END_TEST

START_TEST(MDCLXVI_is_converted_to_1666) {
    ck_assert_int_eq(1666, roman_to_int("MDCLXVI"));
}
END_TEST

START_TEST(IV_is_converted_to_4) {
    ck_assert_int_eq(4, roman_to_int("IV"));
}
END_TEST

START_TEST(IX_is_converted_to_9) {
    ck_assert_int_eq(9, roman_to_int("IX"));
}
END_TEST

START_TEST(XC_is_converted_to_90) {
    ck_assert_int_eq(90, roman_to_int("XC"));
}
END_TEST


TCase* create_roman_to_int_tests() {
    TCase* tests = tcase_create("Roman-To-Int-Tests");
    tcase_add_test(tests, I_is_converted_to_1);
    tcase_add_test(tests, II_is_converted_to_2);
    tcase_add_test(tests, V_is_converted_to_5);
    tcase_add_test(tests, X_is_converted_to_10);
    tcase_add_test(tests, L_is_converted_to_50);
    tcase_add_test(tests, C_is_converted_to_100);
    tcase_add_test(tests, D_is_converted_to_500);
    tcase_add_test(tests, M_is_converted_to_1000);
    tcase_add_test(tests, MDCLXVI_is_converted_to_1666);
    tcase_add_test(tests, IV_is_converted_to_4);
    tcase_add_test(tests, IX_is_converted_to_9);
    tcase_add_test(tests, XC_is_converted_to_90);

    return tests;
}


