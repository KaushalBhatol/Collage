/* 
WAP to print numbers between 
1 to 100 which are divisible by 7.
*/

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d, \n",i);
        }
    }
    return 0;
}