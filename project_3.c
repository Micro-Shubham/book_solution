#include <stdio.h>
int main()
{
    int r;
    printf(" enter the value of radius : ");
    scanf("%d", &r);
    float volume = (4.0f) / 3 * r * r * r;
    printf(" volume of sphere is :%f ", volume);
    return 0;
}