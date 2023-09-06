#include <stdio.h>

void greetings(char name[], int age) {
    printf("Hello %s, you are %d years old", name, age);
}

void birthday() {
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
}

double square(double x) {
    return x * x;
}

int main() {
    birthday();
    greetings("Cesar", 21);
    square(3.14);

    return 0;
}
