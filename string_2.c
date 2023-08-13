#include <stdio.h>
int main()
{
    int a[4] = {3, 4, 6, 1};
    char arr[4] = {'b', 'n', 'q', 'p'};
    printf("Address of integer:%p\n", &a[0]); // understanding the space occupy by an integer and and character.
    printf("Address of integer:%p\n", &a[1]);
    printf("Address of integer:%p\n", &a[2]);
    printf("Address of integer:%p\n", &a[3]);
    printf("Address of char:%p\n", &arr[0]);
    printf("Address of char:%p\n", &arr[1]);
    printf("Address of char:%p\n", &arr[2]);
    printf("Address of char:%p\n", &arr[3]);
    return 0;
}
// Note:The integer takes more space than a character .
// char takses 1 byte space where integer takes 4 bytes.