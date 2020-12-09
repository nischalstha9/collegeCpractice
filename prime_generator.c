#include <stdio.h>
int main()
{
    int from, to, i, j, count;
    printf("From which number you want prime numbers?\n");
    scanf("%d", &from);
    printf("Upto which number you want prime numbers?\n");
    scanf("%d", &to);
    for (i = from; i <= to; i++)
    {
        count = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        count == 0 ? printf("%d\t", i) : printf("");
    }
    return 0;
}
