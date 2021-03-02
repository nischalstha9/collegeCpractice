#include <stdio.h>
#define size 5
int main()
{
    int array[size] = {4, 6, 7, 12, 22}, number, i, found = 0;
    printf("Which number you want to find?\n");
    scanf("%d", &number);
    for (i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            printf("%d lies in %d index of array.", number, i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Not found 404!!");
    }
}