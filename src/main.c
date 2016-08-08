#include<stdio.h>
#include "roman.h"

int main(char* argv[]) {
    char* result = roman_get_output(argv);
    printf("%s \n", result);
}


