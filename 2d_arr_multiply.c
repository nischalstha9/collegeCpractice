#include <stdio.h>
#define ROWS 2
#define COLS 2
int main(int argc, char const *argv[])
{
    int mat1[ROWS][COLS] = {{1, 2}, {3, 4}}, mat2[ROWS][COLS] = {{5, 6}, {7, 8}}, i = 0, j = 0, k = 0, mul[ROWS][COLS];
    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
        {
            for (k = 0; k < COLS; ++k)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("\n%d", mul[i][j]);
        }
    }

    // for (i = 0; i < ROWS; i++)
    // {
    //     for (j = 0; j < COLS; j++)
    //     {
    //         while (k < ROWS)
    //         {
    //             cache += mat1[i][j] * mat2[j][i];
    //             k++;
    //         }
    //         printf("\n======>>>%d\t", cache);
    //         k = 0;
    //     }
    //     mul[i][index] = cache;
    //     index++;
    //     if (index == COLS - 1)
    //     {
    //         index = 0;
    //     }
    //     cache = 0;
    // }
    // for (i = 0; i < ROWS; i++)
    // {
    //     for (j = 0; j < COLS; j++)
    //     {
    //         printf("%d\t", mul[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
