#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, g;
    printf("enter the amount ");
    scanf("%f", &a);
    b = (a * 0.06) / 12;
    printf("the interest of first month is:%.2f\n", b);
    c = a - 386.66 + b;
    printf("the first month payment is :%.2f\n", c);
    d = (c * 0.06) / 12;
    printf("the interest of second month is :%.2f\n", d);
    e = c - 386.66 + d;
    printf("the paypment of second month is:%.2f\n", e);
    f = (e * 0.06) / 12;
    printf("the interest of second month is :%.2f\n", f);
    g = e - 386.66 + f;
    printf("the payment of third month is :%.2f\n", g);

    return 0;
}