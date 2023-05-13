#include <stdio.h>
int main()
{
    float number, largest = 0;
    do
    {
        printf("enter the number");
        scanf("%f", &number);
        if (number > largest)
        {
            largest = number;
        }

    } while (number != 0);
    printf("the largest number is :%.2f", largest);
    return 0;
}