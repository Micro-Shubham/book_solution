#include <stdio.h>
int main()
{
    int num, d;
    printf("enter upto digit number: ");
    scanf("%d", &num);
    if (num >= 0 && num <= 9)
        d = 1;
    else if (num >= 10 && num <= 99)
        d = 2;
    else if (num >= 100 && num <= 999)
        d = 3;

    printf("the entered %d has %d digit", num, d);
}
