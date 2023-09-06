// Convert celsius to fahrenheit and reverse

#include <ctype.h>
#include <stdio.h>

int main() {
    float temperature;
    float result;
    char units;

    printf("\n Is the temperature in (F) or (C):");
    scanf("%c", &units);

    units = toupper(units);

    if (units == 'C') {
        printf("\n Enter temperature in celsius:");
        scanf("%f", &temperature);
        temperature = (temperature * 9 / 5) + 32;
        printf("\n The temperature is: %.2f F", temperature);
    } else if (units == 'F') {
        printf("\n Enter temperature in fahrenheit:");
        scanf("%f", &temperature);
        temperature = (temperature - 32) * 5 / 9;
        printf("\n The temperature is: %.2f C", temperature);
    } else {
        printf("\n %c is not valid units", units);
    }

    return 0;
}
