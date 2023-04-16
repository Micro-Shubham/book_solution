#include <stdio.h>
int main(void)
{
    int height = 8, lenght = 12, width = 10;
    int volume = height * lenght * width;
    printf(" dimension : %d %d %d \n ", height, lenght, width);
    printf("volume : %d\n", volume);
    printf("dimensional weight :%d\n ", (volume + 166) / 166);
    return 0;
}