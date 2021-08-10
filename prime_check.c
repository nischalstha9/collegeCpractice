#include <stdio.h>
int main()
{
    int num, i, j, k;
    printf("Enter Number:\n");
    scanf("%d", &num);
    for (j = 2; j < num / 2 + 1; j++)
    {
        if (i % j == 0)
        {
            k = 1;
            break;
        }
    }
    if (k != 1)
    {
        printf("%d is prime.\n", num);
    }
    else
    {
        printf("%d is not prime.\n", num);
    }
    return 0;
}
