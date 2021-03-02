#include <stdio.h>
#define row 5
#define col 5
int main()
{
    int array[row][col], i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter value for array[%d][%d]\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
