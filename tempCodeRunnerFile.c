#include <stdio.h>
#define ROWS 2
#define COLS 2
int main()
{
    int mat1[ROWS][COLS] = {{1, 2}, {3, 4}}, mat2[ROWS][COLS] = {{5, 6}, {7, 8}}, mul[ROWS][COLS] = {{0, 0}, {0, 0}};
    int i = 0, j = 0, k = 0;
    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < ROWS; ++j)
        {
            for (k = 0; k < ROWS; ++k)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < ROWS; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
