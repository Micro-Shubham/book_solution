#include <stdio.h>
void main()
{
    int tens, ones;
    printf("enter the digit number");
    scanf("%1d%1d", &tens, &ones);

    switch (tens)
    {
    case 1:
        switch (ones)
        {
        case 1:
            printf("Eleven");
            return;
        case 2:
            printf("Twelve");
            return;
        case 3:
            printf("Thirteen");
            return;
        case 4:
            printf("Fourteen");
            return;
        case 5:
            printf("Fifteen");
            return;
        case 6:
            printf("Sixteen");
            return;
        case 7:
            printf("Seventeen");
            return;
        case 8:
            printf("Eighteen");
            return;
        case 9:
            printf("Ninteen");
            return;
        case 0:
            printf("Ten");
            return;
        }
        break;
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
        break;
    default:
        printf("invalid");
        break;
    }

    switch (ones)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;
    default:
        break;
    }
}