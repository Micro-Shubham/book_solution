#include <stdio.h>
#include <string.h>
int main()
{
    char original[] = "Geeksforgeeks";
    char copy[50];
    strcpy(copy, original);
    printf("The original=%s\n", original);
    printf("The copy string=%s\n", copy);
    return 0;
}