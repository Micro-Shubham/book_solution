#include <stdio.h>
int main()
{
    float trade, commission;
    do
    {
        printf("enter the value of trade\n");
        scanf("%f", &trade);
        if (trade < 2500)
        {
            commission = 30 + 0.017 * trade;
        }
        else if (trade < 6250)
        {
            commission = 56 + .0066 * trade;
        }
        else if (trade < 20000)
        {
            commission = 76 + .0034 * trade;
        }
        else if (trade < 50000)
        {
            commission = 100 + .0022 * trade;
        }
        else if (trade < 500000)
        {
            commission = 155 + .0011 * trade;
        }
        else if (trade > 500000)
        {
            commission = 255 + .0009 * trade;
        }

        if (trade < 39)
        {
            commission = 39;
        }

        printf("the commission is %.2f\n", commission);
    } while (trade != 0);
    return 0;
}