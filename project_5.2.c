#include <stdio.h>
int main()
{
    int hr, min, time;
    printf("enter a 24-hours time");
    scanf("%d:%d", &hr, &min);
    if (hr > 12 && hr <= 24)
    {
        time = hr - 12;
        printf("equivalent 12-hours time %d:%d ", time, min);
    }

    else if (hr <= 12)
    {
        printf("the time is already in 12 hours %d:%d", hr, min);
    }
    else
    {
        printf("the entered time is wrong");
    }
    return 0;
}