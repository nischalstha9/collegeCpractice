#include <stdio.h>
#define rows 2
#define cols 2
int main(int argc, char const *argv[])
{
    int array1[rows][cols] = {{1, 2}, {3, 4}}, array2[rows][cols] = {{5, 6}, {7, 8}}, i, j, mul[rows][cols], cache, index = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cache += array1[i][j] * array2[j][i];
        }
        mul[i][index] = cache;
        index = i < rows - 1 ? index++ : 0;
        cache = 0;
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
