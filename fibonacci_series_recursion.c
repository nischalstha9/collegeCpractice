//Fibonacci Series using Recursion
#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int term, i;
    printf("Enter how many terms?\n");
    scanf("%d", &term);
    for (i = 0; i < term; i++)
    {
        printf("%d\n", fib(i));
    }

    return 0;
}
