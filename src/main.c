#include<stdio.h>
#include "roman.h"

int main(int argc, char* argv[]) {
    char* result = roman_get_output(argv);
    printf("%s \n", result);
}


