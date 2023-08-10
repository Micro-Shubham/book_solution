#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;      // declaretion of pointer.And we have store the address of variable a which contain value 5.
    printf("%p", &x); // printing the address of a which is stored in x.
                      // Note:the address will note change because we have store that address in x.
    return 0;
}