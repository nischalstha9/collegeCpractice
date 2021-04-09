#include <stdio.h>
int factorial(int num)
{
    if (num < 2)
        return 1;
    return num * factorial(num - 1);
}
int main()
{
    int number;
    printf("Enter a number you want factorial of:");
    scanf("%d", &number);
    printf("The factorial of %d is %d.", number, factorial(number));
    return 0;
}