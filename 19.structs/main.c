#include <stdio.h>
#include <string.h>

struct Player {
    char name[20];
    int age;
    int score;
};

int main() {
    // struct = collection of related members ("variables") they can be of
    // different data types listed under one name in block of memory VERY SIMILAR
    // to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;
    struct Player player3 = {"Messi", 10, 10};

    strcpy(player1.name, "Cristiano");
    player1.score = 4;
    player1.age = 36;

    printf("%s\n", player1.name);
    printf("%s\n", player3.name);

    return 0;
}
