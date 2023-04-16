#include <stdio.h>
int main()
{
    int x, polynomial;
    printf("enter the value of x :");
    scanf("%d", &x);
    polynomial = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) + (7 * x) - 6;
    printf("the answer is:%d ", polynomial);
    return 0;
}