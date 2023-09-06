#include <stdio.h>

int main() {

    int age = 16;

    if (age < 18) {
        printf("You are a child");
    } else {
        printf("Yeah!");
    }

    char option = 'a';

    switch (option) {
    case 'a':
        printf("Option a selected");
        break;
    case 'b':
        printf("Option b selected");
        break;
    default:
        printf("Option invalid");
        break;
    }

    return 0;
}
