#include <stdio.h>

int main() {
    // variable = Allocated space in memory to store a value
    //            We refer to a variable's name to access the stored value
    //            That variable now behaves as if it was the value it contains
    //            BUT we need to declare what type of data we are storing.

    int x; // declaration
    x = 5; // initilization

    int y = 321; // declaration and initilization

    int age = 21;          // integer
    float gpa = 2.05;      // floating point number
    char grade = 'a';      // single character
    char name[] = "Cesar"; // array of characters = String

    printf("You are %d years old \n", age); // %d represents decimal variable
    printf("Your name is: %s\n", name);     // %s represents string variable
    printf("Your average grade is: %c\n",
           grade);                  // %c represents character variable
    printf("Your gpa is: %f", gpa); // %f represents float variable

    return 0;
}
