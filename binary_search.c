#include <stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int array[SIZE] = {112, 221, 333, 445, 6, 66, 22, 88, 123, 45};
    int low, up, mid, i, item;
    printf("Enter item to be searched:\n");
    scanf("%d", &item);
    low = 0;
    up = SIZE - 1;
    while (low <= up && item != array[mid])
    {
        mid = (up + low) / 2;
        if (item > array[mid])
            low = mid++;
        if (item < array[mid])
            up = mid--;
        if (item == array[mid])
            printf("%d found in %d position of array.\n", item, mid + 1);
        if (low > up)
            printf("%d not found in array.", item);
    }

    return 0;
}
