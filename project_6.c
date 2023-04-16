#include <stdio.h>
int main()
{
    int amount, a, b, c, d, e, f, g;
    printf("enter the amount ");
    scanf("%d", &amount);
    a = amount / 20;
    b = amount - (a * 20);
    c = b / 10;
    d = b - (c * 10);
    e = d / 5;
    f = d - (e * 5);
    g = f / 1;
    printf("the bill of 20 is:%d\n", a);
    printf("the bill of 10 is:%d\n", c);
    printf("the bill of 5 is:%d\n", e);
    printf("the bill of 1 is:%d\n", g);
    return 0;
}