#include <stdio.h>
int main()
{
    int r11, r12, r13, r14, r21, r22, r23, r24, r31, r32, r33, r34, r41, r42, r43, r44, sum1, sum2, sum3;
    printf("enter the all sixteen number \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &r11, &r12, &r13, &r14, &r21, &r22, &r23, &r24, &r31, &r32, &r33, &r34, &r41, &r42, &r43, &r44);
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", r11, r12, r13, r14, r21, r22, r23, r24, r31, r32, r33, r34, r41, r42, r43, r44);
    int row1Sum = r11 + r12 + r13 + r14;
    int row2sum = r21 + r22 + r23 + r24;
    int row3sum = r31 + r32 + r33 + r34;
    int row4sum = r41 + r42 + r43 + r44;
    printf("Row sums:%d %d %d %d", row1Sum, row2sum, row3sum, row4sum);
    return 0;
}
