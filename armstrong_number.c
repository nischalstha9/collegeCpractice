#include <stdio.h>
#include <math.h>

void main()
{
    int i = 154;
    int total = 0, rem, temp, size;
    temp = i;
    while (temp > 0)
    {
        size++;
        temp /= 10;
    }
    temp = i;
    while (temp > 0)
    {
        rem = temp % 10;
        total += pow(rem, size);
        temp /= 10;
    }
    if (total == i)
    {
        printf("%d is armstrong.", i);
    }
    else
    {
        printf("%d is not armstrong.", i);
    }
}