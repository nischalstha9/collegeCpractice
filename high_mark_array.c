#include <stdio.h>
#define size 5
int main()
{
    int i, marks[size], high = 0, low = 99999;
    for (i = 0; i < size; i++)
    {
        printf("enter mark:\n");
        scanf("%d", &marks[i]);
        high = marks[i] > high ? marks[i] : high;
        low = marks[i] < low ? marks[i] : low;
    }
    printf("The highest mark is %d.\n", high);
    printf("The lowest mark is %d.\n", low);

    return 0;
}
