#include <stdio.h>

int findMax(int x, int y) {
    return (x >= y) ? x : y;
}

int main() {
    int max = findMax(45, 123);

    printf("Max number is: %d", max);

    return 0;
}
