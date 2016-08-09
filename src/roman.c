#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include "roman.h"

typedef struct {
    int int_value;
    char roman_value;
} RomanToInt;

static const RomanToInt ROMAN_NUMERAL_VALUES[] = {
    {1000, 'M'},
    {500, 'D'},
    {100, 'C'},
    {50, 'L'},
    {10, 'X'},
    {5, 'V'},
    {1, 'I'}
};

static int get_int_value(char roman_char) {
    int num_value_elements = sizeof(ROMAN_NUMERAL_VALUES) / sizeof(ROMAN_NUMERAL_VALUES[0]);

    for (int i = 0; i < num_value_elements; i++) {
        char roman_value = ROMAN_NUMERAL_VALUES[i].roman_value;
        if (roman_value == roman_char) {
            return ROMAN_NUMERAL_VALUES[i].int_value;
        }
    }
    return 0;
}

char* roman_get_output(char* argv[]) {
    int left = roman_to_int(argv[0]);
    int right = roman_to_int(argv[2]);
    return roman_from_int(left + right);
}

int roman_to_int(char* roman) {
    int arabic_value = 0;
    int num_value_elements = sizeof(ROMAN_NUMERAL_VALUES) / sizeof(ROMAN_NUMERAL_VALUES[0]);

    int input_length = strlen(roman);
    for (int i = 0; i < input_length; i++) {
        char roman_char = roman[i];
        arabic_value += get_int_value(roman_char);
    }

    return arabic_value;
}

char* roman_from_int(int arabic) {
    char* buffer = malloc(sizeof(char) * ROMAN_MAX_LENGTH);

    for (int i = 0; i < arabic; i++) {
        buffer[i] = 'I';
    }

    return buffer;
}


