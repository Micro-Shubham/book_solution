#include <stdio.h>
int main()
{
    int m1, m2, d1, d2, y1, y2;
    printf("enter the date\n");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if (y1 > y2)
        printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);

    else if (y2 > y1)
        printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
    else
    {
        if (m1 > m2)
            printf("%d/%d/%dis earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
        else if (m2 > m1)
            printf("%d/%d/%dis earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
        else
        {
            if (d1 > d2)
                printf("%d/%d/%dis earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
            else if (d2 > d1)
                printf("%d/%d/%dis earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
            else
                printf("Both the date is same", d1, m1, y1, d2, m2, y2);
        }
    }

    return 0;
}