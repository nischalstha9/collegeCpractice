#include<stdio.h>
int main()
{
    int a, b, i, res=0;
    printf("Enter number a:\n");
    scanf("%d", &a);
    printf("Enter number b:\n");
    scanf("%d", &b);
    for(i=1; i<=b; i++){
        res += a;
    }
    printf("%d X %d = %d", a, b, res);
    return 0;
}
