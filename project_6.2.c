#include <stdio.h>
int main()
{
    int rem, gcd, num1, num2;
    printf("enter the number \n");
    scanf("%d %d", &num1, &num2);
    while (num1 != 0)
    {
        rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    gcd = num2;
    printf("the gcd is:%d", gcd);
}
