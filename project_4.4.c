#include <stdio.h>

int main()
{
    int decimal, octal;

    printf("Enter a four-digit decimal number: ");
    scanf("%d", &decimal);

    octal = (decimal / 1000) * 1000 +
            ((decimal / 100) % 10) * 100 +
            ((decimal / 10) % 10) * 10 +
            (decimal % 10);

    printf("Octal equivalent: %04o", octal);

    return 0;
}
