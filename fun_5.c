// C program to demostrate the working of keyword.
#include <stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;
    printf("size of int=%zu bytes \n", sizeof(a));
    printf("size of long int=%zu bytes \n", sizeof(b));
    printf("size of long long int=%zu bytes \n ", sizeof(c));
    printf("size of double int=%zu bytes \n", sizeof(d));
    printf("size of long double int=%zu bytes \n", sizeof(e));
    return 0;
}