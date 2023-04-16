#include <stdio.h>
int main()
{
    int dd, mm, yy, item;
    float price;
    scanf("%d %f %d/%d/%d", &item, &price, &dd, &mm, &yy);
    printf("item\t\tunit\t\tpurchase\n\t\tprice\t\tdate\n%d\t\t$%7.2f\t%d/%d/%d", item, price, dd, mm, yy);
    return 0;
}