#include <stdio.h>
#define SIZE 3

void sort(int *arr)
{
    int i, j, temp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[SIZE], i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter num %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr);
    printf("\n The max number is %d", arr[0]);
    return 0;
}
