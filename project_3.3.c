#include <stdio.h>
int main()
{
    int enterISBN, GSI, publiser, group, item, digit;
    printf("enter the isbn number \n");
    scanf("%d-%d-%d-%d-%d", &GSI, &group, &publiser, &item, &digit);
    printf("the GSI:%d\npubliser code:%d\ngroup:%d\nitem number:%d\ndigti:%d\n", GSI, publiser, group, item, digit);
    return 0;
}