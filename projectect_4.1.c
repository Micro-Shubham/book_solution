#include <stdio.h>
int main()
{
    int digit, remainder, sum = 0;
    printf("enter the number:");
    scanf("%d", &digit);
    remainder = digit % 10;
    sum = sum + remainder * 10;
    int q = digit / 10;
    sum = sum + q;
    printf("the reversed digit is :%d", sum);
    return 0;
}