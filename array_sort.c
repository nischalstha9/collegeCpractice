#include <stdio.h>
int main()
{
    int array[5] = {13, 12, 33, 64, 5}, i, j, temp;
    //ASCENDING ORDER STARTS HERE
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("The array in ascending order is: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n", array[i]);

    //DESCENDING ORDER STARTS HERE
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (array[j] > array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("The array in descending order is: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
