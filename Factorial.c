#include <stdio.h>
int main()
{
    prime_number_generator();
}
int factorial_generator()
{
    int num, i;
    long long int factorial = 1;
    printf("Enter Number You want Factorial of:\n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Factorial is 0");
    }
    for (i = num; i > 0; i--)
    {
        factorial *= i;
    }
    printf("Factorial is %d", factorial);
    return 0;
}
int prime_number_generator()
{
    int num, i, j, k;
    printf("Enter Number upto which you want prime number\n");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        k = 0;
        for (j = 2; j < i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                k = 1;
            }
        }
        if (k != 1)
        {
            printf("%d is prime\n", i);
        }
    }
    return 0;
}
