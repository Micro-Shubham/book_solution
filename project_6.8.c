#include <stdio.h>
int main()
{
    int n, month, sun, sat;
    printf("enter the number of days of month");
    scanf("%d", &month);
    printf("enter the sun and sat");
    scanf("%4d%4d", &sun, &sat);
    for (int i = 1; i <= month; i++)
    {

        printf("%4d", i);
        if (i % 7 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}