/*
Addition of two arrays
like a[0][0] + b [0][0] // same index

*/
#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], i, j;
    for (i = 0; i < 2; i++) // getting both arrays value from user
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
            printf("Enter value of b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d + %d = %d \n", a[i][j], b[i][j], a[i][j] + b[i][j]);
        }
    }
}