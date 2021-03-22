#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
void main()
{
    int a, b;
    printf("Enter #a:");
    scanf("%d", &a);
    printf("Enter #b:");
    scanf("%d", &b);
    printf("=> The sum is %d.\n", add(a, b));
    printf("=> The difference is %d.\n", sub(a, b));
    printf("=> The product is %d.\n", mul(a, b));
    printf("=> The division is %d.\n", div(a, b));
    printf("=> The remainder of division is %d.\n", rem(a, b));
}
