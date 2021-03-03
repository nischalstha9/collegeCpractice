#include <stdio.h>
#define row1 2
#define col1 2
#define row2 2
#define col2 2

int main(int argc, char const *argv[])
{
    int i, j, k, mat1[row1][col1] = {{1, 2}, {3, 4}}, mat2[row2][col2] = {{5, 6}, {7, 8}}, mul[row1][col2];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    printf("\n%d", mul[i][j]);
    return 0;
}
