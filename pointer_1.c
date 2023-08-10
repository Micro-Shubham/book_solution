#include <stdio.h>
int main()
{
    int a = 5;
    printf("%p", &a);
    // here & denote the address of a . Also to print the address of a we have to use p as formate specifier
    return 0;
}