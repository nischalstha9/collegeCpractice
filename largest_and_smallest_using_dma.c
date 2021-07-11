// wap tofind the largest and smallest using dma in a list of n numbers

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr, n, i, temp, j;
    printf("Enter how many number you want to compare:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter Element:");
            scanf("%d", ptr + i);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (*(ptr + i) < *(ptr + j))
                {
                    temp = *(ptr + i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(ptr + i));
        }
        printf("Largest Number is: %d\n", *ptr);
        printf("Smallest Number is: %d\n", *(ptr + n - 1));
    }
    free(ptr);
    return 0;
}
