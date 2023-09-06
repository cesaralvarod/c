#include <stdio.h>

void greetings(char name[]);

int main() {
    // function prototype
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    char name[] = "Cesar";

    greetings(name);

    return 0;
}

void greetings(char name[]) {
    printf("Hello %s", name);
}
