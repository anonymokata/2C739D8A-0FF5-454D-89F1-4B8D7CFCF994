#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include "roman.h"

typedef struct {
    int int_value;
    char* roman_value;
} RomanToInt;

static const RomanToInt ROMAN_NUMERAL_VALUES[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};

static bool starts_with(char* string, char* prefix) {
    int prefix_length = strlen(prefix);
    return strncmp(string, prefix, prefix_length) == 0;
}

static const RomanToInt* find_next_mapping(char* roman_string) {
    int num_value_elements = sizeof(ROMAN_NUMERAL_VALUES) / sizeof(ROMAN_NUMERAL_VALUES[0]);

    for (int i = 0; i < num_value_elements; i++) {
        char* roman_value = ROMAN_NUMERAL_VALUES[i].roman_value;
        if (starts_with(roman_string, roman_value)) {
            return &ROMAN_NUMERAL_VALUES[i];
        }
    }
    return NULL;
}

char* roman_get_output(char* argv[]) {
    int left = roman_to_int(argv[0]);
    int right = roman_to_int(argv[2]);
    return roman_from_int(left + right);
}

int roman_to_int(char* roman_input) {
    int arabic_value = 0;

    while (*roman_input != '\0') {
        const RomanToInt* value = find_next_mapping(roman_input);
        arabic_value += value->int_value;
        roman_input += strlen(value->roman_value);
    }

    return arabic_value;
}

static void push_string(char* buffer, char* to_append) {
    int buffer_length = strlen(buffer);
    int suffix_length = strlen(to_append);

    for (int i = 0; i < suffix_length; i++) {
        buffer[buffer_length + i] = to_append[i];
    }

    buffer[buffer_length + suffix_length] = '\0';
}

char* roman_from_int(int arabic) {
    char* buffer = malloc(sizeof(char) * ROMAN_MAX_LENGTH);

    int buffer_position = 0;

    if (arabic >= 4) {
        arabic -= 4;
        push_string(buffer, "IV");
    }

    while (arabic >= 1) {
        arabic--;
        push_string(buffer, "I");
    }

    return buffer;
}


