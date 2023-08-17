#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int k = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", k);
                if (j < 4)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}