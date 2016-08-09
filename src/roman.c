#include<string.h>
#include<stdlib.h>
#include "roman.h"

char* roman_get_output(char* argv[]) {
    int left = roman_to_int(argv[0]);
    int right = roman_to_int(argv[2]);
    return roman_from_int(left + right);
}

int roman_to_int(char* roman) {
    return strlen(roman);
}

char* roman_from_int(int arabic) {
    char* buffer = malloc(sizeof(char) * ROMAN_MAX_LENGTH);

    for (int i = 0; i < arabic; i++) {
        buffer[i] = 'I';
    }

    return buffer;
}

