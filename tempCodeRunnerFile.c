#include <stdio.h>
void swap()
{
    int a = 20, b = 30;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}
void pryamid()
{
    int size = 3;
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (k = 0; k <= (size - i); k++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    pryamid();
}
