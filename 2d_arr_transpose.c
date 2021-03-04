#include <stdio.h>
#define ROWS 2
#define COLS 3
int main(int argc, char const *argv[])
{
    int mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}}, i, j, cache, trans[COLS][ROWS];
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if ((i != 0 && j != 0) || (i != ROWS - 1 && j != COLS - 1))
                trans[i][j] = mat[j][i];
            else
                trans[i][j] = mat[i][j];
        }
    }
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
