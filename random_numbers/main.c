#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // pseudo random numbers = a set of values or elements that are statistically
    // random (don't use these for any sort of cryptographic security)

    srand(time(0)); // inicializa la funcion rand, en este caso le estamos pasando
    // el numero maximo y ese es la fecha de ahora

    int number1 = rand() % 10 + 1; // rand() -> genera un numero random

    printf("Fecha en numeros: %ld\n", time(0));
    printf("Genera un numero random: %d", rand());

    return 0;
}
