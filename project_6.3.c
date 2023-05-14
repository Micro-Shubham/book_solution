#include <stdio.h>
int main()
{
    int gcd, rem, num1, num2;
    printf("enter the number");
    scanf("%d %d", &num1, &num2);
    int numer = num1;
    int deno = num2;
    while (num1 != 0)
    {
        rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    gcd = num2;
    int frac1 = numer / gcd;
    int frac2 = deno / gcd;
    printf("the gcd %d\n", gcd);
    printf("the fraction is %d/%d\n", frac1, frac2);

    return 0;
}