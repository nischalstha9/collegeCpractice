#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rows, cols, i, j;
    printf("enter how many rows:\n");
    scanf("%d", &rows);
    printf("enter how many cols:\n");
    scanf("%d", &cols);
    int arr1[rows][cols], arr2[rows][cols];
    int *arr1 = malloc(rows * cols * sizeof(int));
    int *arr2 = malloc(rows * cols * sizeof(int));

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", *(arr1 + i) + j);
        }
    }

    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int *p[3];
//     int x[] = {1, 2, 3};
//     int y[] = {10, 20, 30};
//     int z[] = {100, 200, 300};
//     printf("%d", **p);
//     printf("%d", *(*p + 1) + 2);
//     return 0;
// }

// #define mux(a, b) ((a) * (b))
// int main(int argc, char const *argv[])
// {
//     printf("%d", mux(5, 6));
//     return 0;
// }
