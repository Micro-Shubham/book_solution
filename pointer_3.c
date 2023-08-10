#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a; // storing the address of variable a.
    *x = 25;
    // Note:we have change the value 5 to 25 with the help of pointer.
    printf("%p\n", x);  // printing the address of a .
    printf("%p\n", &x); // printing the address of x which store the address of variable a
    printf("%d\n", *x); // printing the value a which is stored in a. As x store the address of variable a .

    return 0;
}