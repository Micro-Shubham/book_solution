// Calculating the hcf of two number using function.
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
}
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two number:");
    scanf("%d %d", &a, &b);
    int hcf = gcd(a, b);
    printf("The hcf of %d and %d :%d", a, b, hcf);

    return 0;
}