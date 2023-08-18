#include <stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        int k = 1;
        for (int j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                printf("%d", k);
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}