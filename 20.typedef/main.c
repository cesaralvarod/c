#include <stdio.h>
#include <string.h>

typedef char user[25];

// Struct as typedef
typedef struct Personal {
    char name[25];
    char password[25];
    int id;
} Personal;

struct Student {
    char name[25];
    float gpa;
};

int main() {

    // typedef = reserved keywork that gives an existing datatype a "nickname"

    user user1 = "Bro";

    Personal personal1 = {"Bro", "password", 1};

    struct Student students[] = {
        {"Cesar", 1.0}, {"Andres", 20.0}, {"renata", 30.0}
    };

    return 0;
}
