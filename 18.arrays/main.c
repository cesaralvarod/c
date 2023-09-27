#include <stdio.h>

int main() {
    // array = a data structure that can store many values of the same data type
    // 2D array = an array, where each element is an entire array useful if you
    // need a matrix, grid, or tabler of data

    double prices[] = {5.0, 6.0, 10.0, 25.0, 20.0}; // 1D array
    char name[] = "Cesar Alvarado"; // array of characters (string)

    printf("%.2lf\n", prices[0]);

    printf("size: %d bytes\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("%.2lf\n", prices[i]);
    }

    int numbers[3][3] = {{1, 2, 3}, {2, 3, 4}, {4, 5, 6}}; // 2D array

    char cars[][20] = {"Mustang", "Aston Martin", "Camaro"};

    return 0;
}
