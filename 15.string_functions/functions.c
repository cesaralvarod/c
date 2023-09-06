#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *strlwr(char *str) {
    unsigned char *p = (unsigned char *)str;

    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }

    return str;
}

char *strupr(char *str) {
    unsigned char *p = (unsigned char *)str;

    while (*p) {
        *p = toupper((unsigned char)*p);
        p++;
    }

    return str;
}

int main() {
    char string1[] = "Cesar";
    char string2[] = "Alvarado";

    // strlwr(string1);              // convert lowercase string
    // strupr(string1);              // convert uppercase string
    // strcat(string1, string2);     // appends string2 to end of string1
    // strncat(string1, string2, 1); // appends n characters from string2 to
    // string1 strcpy(string1, string2);     // copy string2 to string1
    // strncpy(string1, string2, 4); // copy n characters of string2 to string1

    return 0;
}
