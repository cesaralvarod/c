#include <stdio.h>

int main() {
    FILE *pF = fopen("test.txt", "r");

    if (pF == NULL) {
        printf("Unable to open file!\n");
    }

    char buffer[255];

    while (fgets(buffer, 255, pF) != NULL) {

        printf("%s", buffer);
    }

    fclose(pF);

    return 0;
}
