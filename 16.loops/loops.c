#include <stdio.h>
#include <string.h>

int main() {

    for (int i = 0; i < 10; i++) {
        printf("Hello for %d time\n", i);
    }

    char name[25], lastname[25];

    printf("\n What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) {
        printf("You did not enter your name");

        printf("\n What's your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    do {
        printf("\n What's your lastname?\n");
        fgets(lastname, 25, stdin);
        lastname[strlen(lastname) - 1] = '\0';
    } while (strlen(lastname) == 0);

    printf("Hello %s", lastname);

    return 0;
}
