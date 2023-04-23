#include <stdio.h>
int main()
{
    int scale;
    printf("enter the scale value of air ");
    scanf("%d", &scale);
    if (scale < 1)
        printf("calm");
    else if (scale >= 1 && scale <= 3)
        printf("light air ");
    else if (scale >= 4 && scale <= 27)
        printf("breeze");
    else if (scale >= 28 && scale <= 47)
        printf("gale");
    else if (scale >= 48 && scale <= 63)
        printf("strom");
    else
        printf("hurricane");
    return 0;
}