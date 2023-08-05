// #include <stdio.h>
// int main()
// {
//     int a[5] = {33, 34, 12, 22, 67};
//     printf("%d", a[4]);
//     return 0;
// }
// #include <stdio.h>
// #define N 5
// int main()
// {
//     int a[N];
//     printf("enter the %d number \n", N);
//     for (int i = 0; i < 5; i++)

//         scanf("%d", &a[i]);
//     printf("In reverse order:");
//     for (int i = N - 1; i >= 0; i--)
//         printf("%d\n", a[i]);
//     printf("\n");
//     return 0;
// }
// entered number has repeated number or not .
// #include <stdbool.h>
// #include <stdio.h>
// int main()
// {
//     bool digit_seen[10] = {false};
//     int digit;
//     long n;
//     printf("enter a number:");
//     scanf("%ld", &n);
//     while (n > 0)
//     {
//         digit = n % 10;
//         if (digit_seen[digit])
//             break;
//         digit_seen[digit] = true;
//         n /= 10;
//     }
//     if (n > 0)
//         printf("Repeated digit\n");
//     else
//         printf("No repeated digit \n");
//     return 0;
// }

// interest
#include <stdio.h>
#define NUM_RATES 5
#define INITIAL_BALANCE 100.00
int main(void)
{
    int i, low_rate, num_year, year;
    double value[NUM_RATES];
    printf("Enter interest rate:");
    scanf("%d", &low_rate);
    printf("Enter number of years:");
    scanf("%d", &num_year);
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
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
// }
// #include <stdio.h>
// #define NUM_RATES 5
// #define INITIAL_BALANCE 100.00

// int main(void)
// {
//     int i, low_rate, num_year, year;
//     double value[NUM_RATES];

//     printf("Enter interest rate: ");
//     scanf("%d", &low_rate);
//     printf("Enter number of years: ");
//     scanf("%d", &num_year);
//     printf("\nYears");

//     for (i = 0; i < NUM_RATES; i++)
//     {
//         printf("%6d%%", low_rate + i);
//         value[i] = INITIAL_BALANCE;
//     }

//     printf("\n");

//     for (year = 1; year <= num_year; year++)
//     {
//         printf("%4d", year);

//         for (i = 0; i < NUM_RATES; i++)
//         {
//             value[i] += (low_rate + i) / 100.0 * value[i];
//             printf("%7.2f", value[i]);
//         }

//         printf("\n");
//     }

//     return 0;
// }
