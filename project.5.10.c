#include <stdio.h>
int main()
{

    int grade;
    printf("enter the grade ");
    scanf("%d", &grade);
    int q = grade / 10;
    switch (q)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("F");
        break;
    default:
        printf("wrong input");
    }
    return 0;
}