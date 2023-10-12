#include <stdio.h>

int main() {
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);

    /*
    if (remove("test.txt") == 0) {
        printf("That file was deleted succesfully\n");
    } else {
        printf("That file was NOT deleted \n");
    }
    */

    return 0;
}
