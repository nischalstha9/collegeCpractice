#include <stdio.h>
#include <stdlib.h>

int *p;
int n;
void main()
{
    printf("enter how many integers :\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate!");
        exit(1);
    }
    else
    {
        int i;
        for (i = 0; i < n; i++)
        {
            printf("Enter number: ");
            scanf("%d", p + i);
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\t", *p + i);
        }
        free(p);
    }
}