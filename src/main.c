#include<stdlib.h>
#include<stdio.h>
#include "roman.h"

int main(int argc, char* argv[]) {
    char** roman_arithmetic_inputs = &argv[1];
    char* result = roman_get_output(roman_arithmetic_inputs);
    printf("%s \n", result);
    free(result);
}


