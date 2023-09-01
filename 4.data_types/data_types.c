#include <stdbool.h>
#include <stdio.h>

// See: https://www.geeksforgeeks.org/data-types-in-c/?ref=lbp

int main() {
    char a = 'C';     // single character %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.1415; // 4 bytes (32 bits of precision) 6 - 7 digits %f (1.2E-38
    // to 3.4E+48)
    double d = 3.1415192653589793; // 8 bytes (64 bits of precision)  15 - 16
    // digits %lf (1.7E-308 to 1.7E+308)

    long double e = 3.1415555555555555555; // 16 bytes (128 bits of precision) %Lf
    // (3.4E-4932 to 1.1E+4932)

    // use stdbool header
    bool f = true; // 1 byte (true or false) %d

    // char esta relacionado con la tabla ascii
    char g = 100; // 1 byte (-128 to +127) %d or %c
    // also as: // signed char g=100;
    unsigned char h = 255; // 1 byte (0 to 255) %d or %c

    short int i = 32767;          // 2 bytes (-32,768 to +32,767) %d or %hd
    unsigned short int j = 65355; // 2 bytes (0 to +65,355) %d or %hu

    int k = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int l = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long int m = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %ld
    unsigned long int n = 4294967295; // 4 bytes (0 to +4,294,967,295) %lu

    long long int o = 81792734098735; // 8 bytes (-(2^63) to (2^63)-1, -9
    // quintillion to +9 quintillion) %lld
    unsigned long long int p =
        18446744073709551615U; // 8 bytes (0 to 18,446,744,073,709,551,615) %llu

    return 0;
}
