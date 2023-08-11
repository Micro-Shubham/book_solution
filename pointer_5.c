#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;
    int **y = &x;       // concept of double pointer.Storing the address pointer in another pointer.
    printf("%p\n", &x); // address of x.
    printf("%p\n", y);  // address of x which is stored in y.
    return 0;
}