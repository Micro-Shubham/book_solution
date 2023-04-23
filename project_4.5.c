#include <stdio.h>
int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, sum1, sum2, digit;
    printf("enter the upc number:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
    sum1 = d1 + d3 + d5 + d7 + d9 + d11;
    sum2 = d2 + d4 + d6 + d8 + d10;
    int newSum1 = sum1 * 3 + sum2;
    int substract1 = newSum1 - 1;
    int remainder = substract1 % 10;
    int check_digit = 9 - remainder;
    printf("the check digit :%d\n", check_digit);
    return 0;
}