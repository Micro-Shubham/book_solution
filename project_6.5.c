#include <stdio.h>
int main()
{
    int digit, reversed = 0, q, rem;
    printf("enter the number ");
    scanf("%d", &digit);
    do
    {
        rem = digit % 10;
        q = digit / 10;
        digit = q;
        reversed = reversed * 10 + rem;
    } while (q != 0);

    printf("the reverse digit is %d\n", reversed);
    return 0;
}