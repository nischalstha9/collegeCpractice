#include <stdio.h>
int swap(int *ptr_a, int *ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}
void main()
{
    int a = 400, b = 200;
    printf("Before swapping:\n a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping:\n a=%d b=%d\n", a, b);
}