#include <stdio.h>
int main()
{
    int k = 0, x;
    for (int i = 1; i <= 9; i++)
    {
        x = 1;
        i < 6 ? k++ : k--;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - k)
            {
                printf("%d", x);
                x++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}