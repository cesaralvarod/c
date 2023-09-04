#include <stdio.h>
#include <string.h>

int main() {
    char name[25];
    int age;

    printf("What's your name?\n");
    // scanf("%s", name);
    // si la variable va a contener espacios (string) entonces usamos:
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you?\n");

    // &age -> address of operator
    scanf("%d", &age); // declaramos la variable con un & al inicio para decir que
    // se va a cambiar

    printf("Hello %s", name);
    printf("You are %d years old\n", age);

    return 0;
}
