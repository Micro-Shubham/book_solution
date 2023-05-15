#include <stdio.h>
int main()
{
    int even, n, square;
    printf("enter the number ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i = i + 2)
    {
        square = i * i;
        printf("%d\n", square);
    }
    return 0;
}