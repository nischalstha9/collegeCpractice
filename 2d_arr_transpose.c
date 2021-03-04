#include <stdio.h>
#define ROWS 2
#define COLS 2
int main(int argc, char const *argv[])
{
    int mat[ROWS][COLS] = {{1, 2}, {3, 4}}, i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < ROWS; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}
