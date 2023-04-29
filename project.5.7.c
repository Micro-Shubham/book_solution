#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter the number");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)

        printf("the largest number is:%d\n", a);
    else if (b > a && b > c && b > d)
        printf("the largest number is:%d\n", b);
    else if (c > a && c > b && c > d)
        printf("the largest number is:%d\n", c);
    else if (d > a && d > b && d > c)
        printf("the largest number is:%d\n", d);
    if (a < b && a < c && a < d)
        printf("the smallests number is:%d\n", a);
    else if (b < a && b < c && b < d)
        printf("the smallest number is:%d\n", b);
    else if (c < a && c < b && c < d)
        printf("the smallest number is:%d\n\n", c);
    else if (d < a && d < b && d < c)
        printf("the smallest number is:%d\n", d);
    return 0;
}