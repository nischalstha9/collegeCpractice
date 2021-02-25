#include <stdio.h>
#define size 5
void main()
{
    int age[size] = {1, 2, 3, 4, 5}, temp, i, index;
    for (i = 0; i <= size / 2; i++)
    {
        index = size - 1 - i;
        temp = age[i];
        age[i] = age[index];
        age[index] = temp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", age[i]);
    }
}