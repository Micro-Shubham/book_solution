#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c", k);
                if (k < 'D')
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