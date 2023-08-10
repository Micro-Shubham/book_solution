// swapping two numbers without using third variable
#include <stdio.h>

int main()
{

    int a, b;
    printf("enter the value of a and b:");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the swap value of a and b:%d %d", a, b);

    return 0;
}