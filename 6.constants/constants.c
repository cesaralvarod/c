#include <stdio.h>

// there are two ways in C to define constants

// first way
#define PII 3.1416

int main() {

    // constants = fixed value that cannot be altered by the program during its
    // execution

    const float PI = 3.14159;

    printf("%f\n", PI);
    printf("%f", PII);

    return 0;
}
