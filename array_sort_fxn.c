#include <stdio.h>
#define SIZE 77

void ascending(float temps[])
{
    int i, j;
    float cache;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (temps[j] < temps[i])
            {
                cache = temps[j];
                temps[j] = temps[i];
                temps[i] = cache;
            }
        }
    }
    printf("The lowest 5 temperature are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f\t", temps[i]);
    }
    printf("\n");
}

void descending(float temps[])
{
    int i, j;
    float cache;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (temps[j] > temps[i])
            {
                cache = temps[j];
                temps[j] = temps[i];
                temps[i] = cache;
            }
        }
    }
    printf("The highest 5 temperature are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f\t", temps[i]);
    }
    printf("\n");
}

void main()
{
    float temps[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter temperature for district %d:\n", i + 1);
        scanf("%f", &temps[i]);
    }
    descending(temps);
    ascending(temps);
}