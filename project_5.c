#include <stdio.h>
int main()
{
    float tax, amount, a;
    printf("enter the number");
    scanf("%d", &amount);
    a = amount * 0.05;
    tax = a + amount;
    printf("the tax is :%d", tax);
    return 0;
}