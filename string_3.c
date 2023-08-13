#include <stdio.h>
int main()
{
    char arr[] = "Hello that's me\0"; // we can use null character and there is no any need to assign the length of array.
    int i = 0;                        // if I print the null character it will not print.The acsii value of null char is 0.
    while (arr[i] != '\0')            // we have use the concept of null character to terminate the loop.
    {
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}