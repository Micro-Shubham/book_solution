#include <stdio.h>
int main()
{
    int digit, d1, d2, d3, sum = 0, q;
    printf("enter the number:");
    scanf("%d", &digit);
    d1 = digit % 10;
    q = digit / 10;
    d2 = q % 10;
    q = q / 10;
    d3 = q % 10;
    sum = d1 * 100 + d2 * 10 + d3;
    printf("the reversed digit is :%d", sum);
    return 0;
}