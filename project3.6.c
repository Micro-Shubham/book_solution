#include <stdio.h>
int main()
{
    int a, b, c, d, sum1, sum2;
    printf("enter the two fraction\n");
    scanf("(%d/%d)+(%d/%d)", &a, &b, &c, &d);
    sum1 = a * d + c * b;
    sum2 = b * d;
    printf("the sum is :%d/%d", sum1, sum2);
    return 0;
}