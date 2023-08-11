// swapping two number using pointer also using the concept of pass by reference

#include <stdio.h>
void swap(int *x, int *y) // the value of a store in x and value of b store in y .
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a = 3;
    int b = 5;
    swap(&a, &b); // address of a and b.
    printf("The swap value of a:%d\n", a);
    printf("The swap value of b:%d\n", b);
    return 0;
}
