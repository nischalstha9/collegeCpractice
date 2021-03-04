#include <stdio.h>
#define arr_size 5
#define word_len 10
int main()
{
    char array[5][10];
    int i, j;
    for (i = 0; i < arr_size; i++)
    {
        printf("Enter name for student [%d]: \n", i);
        scanf("%s", array[i]);
    }
    printf("THE STI");
    for (i = 0; i < arr_size; i++)
    {
        printf("%s\n", array[i]);
    }

    return 0;
}
