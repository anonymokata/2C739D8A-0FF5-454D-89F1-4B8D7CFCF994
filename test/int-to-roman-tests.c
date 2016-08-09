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

START_TEST(arabic_5_is_converted_to_V) {
    char* result = roman_from_int(5);
    ck_assert_str_eq("V", result);
    free(result);
}
END_TEST

START_TEST(arabic_10_is_converted_to_X) {
    char* result = roman_from_int(10);
    ck_assert_str_eq("X", result);
    free(result);
}
END_TEST

START_TEST(arabic_25_is_converted_to_XXV) {
    char* result = roman_from_int(25);
    ck_assert_str_eq("XXV", result);
    free(result);
}
END_TEST

START_TEST(arabic_50_is_converted_to_L) {
    char* result = roman_from_int(50);
    ck_assert_str_eq("L", result);
    free(result);
}
END_TEST

START_TEST(arabic_66_is_converted_to_LXVI) {
    char* result = roman_from_int(66);
    ck_assert_str_eq("LXVI", result);
    free(result);
}
END_TEST

START_TEST(arabic_90_is_converted_to_XC) {
    char* result = roman_from_int(90);
    ck_assert_str_eq("XC", result);
    free(result);
}
END_TEST

START_TEST(arabic_100_is_converted_to_C) {
    char* result = roman_from_int(100);
    ck_assert_str_eq("C", result);
    free(result);
}
END_TEST

START_TEST(arabic_291_is_converted_to_CCXCI) {
    char* result = roman_from_int(291);
    ck_assert_str_eq("CCXCI", result);
    free(result);
}
END_TEST

START_TEST(arabic_400_is_converted_to_CD) {
    char* result = roman_from_int(400);
    ck_assert_str_eq("CD", result);
    free(result);
}
END_TEST

START_TEST(arabic_404_is_converted_to_CDIV) {
    char* result = roman_from_int(404);
    ck_assert_str_eq("CDIV", result);
    free(result);
}
END_TEST

START_TEST(arabic_500_is_converted_to_D) {
    char* result = roman_from_int(500);
    ck_assert_str_eq("D", result);
    free(result);
}
END_TEST

START_TEST(arabic_555_is_converted_to_DLV) {
    char* result = roman_from_int(555);
    ck_assert_str_eq("DLV", result);
    free(result);
}
END_TEST

START_TEST(arabic_900_is_converted_to_CM) {
    char* result = roman_from_int(900);
    ck_assert_str_eq("CM", result);
    free(result);
}
END_TEST

START_TEST(arabic_1000_is_converted_to_M) {
    char* result = roman_from_int(1000);
    ck_assert_str_eq("M", result);
    free(result);
}
END_TEST

START_TEST(arabic_3999_is_converted_to_MMMCMXCIX) {
    char* result = roman_from_int(3999);
    ck_assert_str_eq("MMMCMXCIX", result);
    free(result);
}
END_TEST

TCase* create_int_to_roman_tests() {
    TCase* tests = tcase_create("Int-To-Roman-Tests");

    tcase_add_test(tests, arabic_1_is_converted_to_I);
    tcase_add_test(tests, arabic_2_is_converted_to_II);
    tcase_add_test(tests, arabic_3_is_converted_to_III);
    tcase_add_test(tests, arabic_4_is_converted_to_IV);
    tcase_add_test(tests, arabic_5_is_converted_to_V);
    tcase_add_test(tests, arabic_10_is_converted_to_X);
    tcase_add_test(tests, arabic_25_is_converted_to_XXV);
    tcase_add_test(tests, arabic_50_is_converted_to_L);
    tcase_add_test(tests, arabic_66_is_converted_to_LXVI);
    tcase_add_test(tests, arabic_90_is_converted_to_XC);
    tcase_add_test(tests, arabic_100_is_converted_to_C);
    tcase_add_test(tests, arabic_291_is_converted_to_CCXCI);
    tcase_add_test(tests, arabic_400_is_converted_to_CD);
    tcase_add_test(tests, arabic_404_is_converted_to_CDIV);
    tcase_add_test(tests, arabic_500_is_converted_to_D);
    tcase_add_test(tests, arabic_555_is_converted_to_DLV);
    tcase_add_test(tests, arabic_900_is_converted_to_CM);
    tcase_add_test(tests, arabic_1000_is_converted_to_M);
    tcase_add_test(tests, arabic_3999_is_converted_to_MMMCMXCIX);

    return tests;
}
