#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == i || j == 8 - i)
            {
                if (j == i)
                    printf("\\");
                else
                    printf("/");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}