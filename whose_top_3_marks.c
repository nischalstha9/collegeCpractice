#include <stdio.h>
void main()
{
    int i, math, eng, sci, nep, soc, n, cache, j;
    float marks[30];
    printf("How many student marks you want to compare (max 30)?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student seperated by comma:\n");
        scanf("%d,%d,%d,%d,%d", &math, &eng, &sci, &nep, &soc);
        marks[i] = (math + eng + sci + nep + soc) / 5;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (marks[i] < marks[j])
            {
                cache = marks[i];
                marks[i] = marks[j];
                marks[j] = cache;
            }
        }
    }
    printf("Top 3 marks are:\n1. %.2f\n2. %.2f\n3. %.2f\n", marks[0], marks[1], marks[2]);
}