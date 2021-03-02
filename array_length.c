#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5}, array_size, array_item_size, len;

    len = sizeof(array) / sizeof(array[0]);
    printf("Size of array is %d.\n", sizeof(array));
    printf("Size of array item is %d.\n", sizeof(array[0]));
    printf("Length of array is %d.\n", len);
    return 0;
}
