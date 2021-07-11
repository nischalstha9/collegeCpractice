#include <stdio.h>
void main()
{
    int number, i, flag = 0;
    printf("Enter a number:\n");
    scanf("%d", &number);
    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}