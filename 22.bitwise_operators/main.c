#include <stdio.h>

int main() {
    // BITWISE OPERATORS = special operators used in bit level programming (
    // knowing binary is important for this topic)

    // & == AND
    // | == OR
    // ^ == XOR
    // << left shift
    // >> right shift

    int x = 6;  // to binary -> 00000110
    int y = 12; // to binary -> 00001100
    int z = 0;  // to binary -> 00000000

    z = x & y;

    printf("AND: x & y = %d\n", z); // 00000110 & 00001100 = 00000100 (4)

    z = x | y;

    printf("OR: x | y = %d\n", z); // 00000110 | 00001100 = 00001110 (14)

    z = x ^ y;

    printf("XOR: x ^ y = %d\n", z); // 00000110 | 00001100 = 00001010 (10)

    z = x << 5;

    printf("LEFT SHIFT: x << 5 = %d\n",
           z); // 00000110 << 5 = 0000011000000 (192) -> desplaza los bits hacia
    // la izquierda 5 posiciones

    z = y >> 2;

    printf("RIGHT SHIFT: x >> 2 = %d",
           z); // 00001100 >> 2 = 00000011 (3) -> desplaza a los bits hacia la
    // derecha 3 posiciones

    return 0;
}
