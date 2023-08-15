#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Geeks";
    char str2[] = "For";
    char str3[] = "Geeks";
    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str2, str3);
    int result3 = strcmp(str3, str1);
    printf("The result of compare 1:%d\n", result1);
    printf("the result of compare 2:%d\n ", result2);
    printf("the result of compare 3:%d\n", result3);
    return 0;
}