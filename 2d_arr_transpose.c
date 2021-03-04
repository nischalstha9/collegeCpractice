#include <stdio.h>
#define ROWS 2
#define COLS 3
int main(int argc, char const *argv[])
{
    int mat[ROWS][COLS] = {{1, 2}, {3, 4}}, i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
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
