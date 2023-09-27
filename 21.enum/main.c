#include <stdio.h>

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {

    // enum = a user defined type of named integer identifieres helps to make a
    // programa more readable

    enum Day today = Sunday;

    printf("%d", today);

    return 0;
}
