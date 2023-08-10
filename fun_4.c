// swapping with help of funtion basically understanding the concept of call by value
#include <stdio.h>
void swap(int a, int b) // another container in which the swapping has being done
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a, b;
    printf("enter the value of a and b:");
    scanf("%d %d", &a, &b);
    swap(a, b); // this one is another container in which swapping is not done so when we print the swaped no. it will print the same value.
    printf("the swap value is %d %d", a, b);

    return 0;
}