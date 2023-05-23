#include <stdio.h>
int main()
{
    int factr, i, n;
    double sum = 0.0;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factr = 1;
        for (int j = 1; j <= i; j++)
        {
            factr = factr * j;
        }
        double term = 1.0 / factr;
        sum = sum + term;
    }
    printf("the sum is :%f", sum);
    return 0;
}
