#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
int main(void)
{
    int i, low_rate, num_year, year;
    double value[5];
    printf("Enter interest rate:");
    scanf("%d", &low_rate);
    printf("Enter number of years:");
    scanf("%d", &num_year);
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + 1);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    for (year = 1; year <= num_year; year++)
    {
        printf("%4d", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
