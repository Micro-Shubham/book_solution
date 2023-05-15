#include <stdio.h>
int main()
{
    int n, odd = 3;
    printf("enter the number ");
    scanf("%d", &n);
    for (int square = 1, i = 1; i <= n; i++, odd += 2)
    {

        printf("%10d%10d\n", i, square);
        square = square + odd;
    }

    return 0;
}