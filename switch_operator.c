#include <stdio.h>
int main()
{
    int a, b;
    char operator;
    printf("Enter value of a and b seperated  by operator:\n");
    scanf("%d%c%d", &a, &operator, & b);
    switch (operator)
    {
    case '+':
        printf("Addition: %d\n", a + b);
        break;
    case '-':
        printf("Subtraction: %d\n", a - b);
        break;
    case '*':
        printf("Multiplication: %d\n", a * b);
        break;
    case 'X':
        printf("Multiplication: %d\n", a * b);
        break;
    case 'x':
        printf("Multiplication: %d\n", a * b);
        break;
    case '/':
        printf("Division: %d\n", a / b);
        break;
    default:
        printf("Wrong operator!!\n");
        break;
    }
    return 0;
}

//wap to find whether vowel or consonent
