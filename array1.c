
#include <stdio.h>

int main()
{
    int i, a[]={1,2,3,4}, sum;
    for(i=0;i<4;i++)
    {
        sum+=a[i];
    }
    printf("Sum is %d\n", sum);

    return 0;
}
