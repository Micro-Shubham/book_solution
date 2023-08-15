// Length of a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Geeksforgeeks";
    size_t length = strlen(str);
    printf("String:%s\n", str);
    printf("The lenght of string :%zu", length);
    return 0;
}