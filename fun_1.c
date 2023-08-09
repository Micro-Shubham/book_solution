// Combinarion
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, r;
    printf("enter the number:");
    scanf("%d %d", &n, &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int ncr = nfact / (rfact * nrfact);
    printf("The combination is %d", ncr);
    return 0;
}