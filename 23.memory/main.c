#include <stdio.h>

int main() {
    // memory: an array of bytes within RAM (street)
    // memory block: a single unit (byte) within memory, used to hold some value
    // (person)
    // memory address: the address of where a memory block is located (house
    // address)

    char a = 'X';
    char b = 'Z';
    short c = 'A';    // short type is 2 length bytes
    int d = 10;       // int type is 4 length bytes
    double e = 10.12; // double type is 8 length bytes
    char f = 'Y';
    char g[1];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("%d bytes\n", sizeof(f));
    printf("%d bytes\n", sizeof(g));

    // print memory addresses
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);
    printf("%p\n", &g);

    return 0;
}
