#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    scanf("%s", str); // here no & is use for string.
    // Note: only first word of sentence will be consider .
    printf("the input was:%s", str);
    return 0;
}