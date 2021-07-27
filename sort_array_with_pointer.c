//wap to sort array with pointer in c
#include <stdio.h>
int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int arr[10] = {1, 5, 16, 13, 900, 54, 23, 44, 55, 65};
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n%5d", arr[i]);
    }

    return 0;
}
