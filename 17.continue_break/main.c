#include <stdio.h>

int main() {
    // continue = skips rest of code & forces the next iteration of the loop
    // break= exists a loop/switch

    for (int i = 0; i < 20; i++) {
        if (i == 10) {
            printf("dont print 10\n");
            continue;
        }

        if (i == 16) {
            printf("skip code");
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
