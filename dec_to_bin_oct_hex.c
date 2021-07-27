#include <stdio.h>
void convert(int num, int base)
{
    int rem;
    rem = num % base;
    num /= base;
    if (num > 0)
        convert(num, base);
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}
int main(int argc, char const *argv[])
{
    int num, base;
    int choice;
    while (1)
    {
        printf("l.Binary\n");
        printf("2.0ctal\n");
        printf("3.Hexadecimal\n");
        printf("4.Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            base = 2;
            break;
        case 2:
            base = 8;
            break;
        case 3:
            base = 16;
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice\n");
            continue;
        }
        printf("Enter the number in decimal: ");
        scanf("%d", &num);
        convert(num, base);
        printf(" \n");
        return 0;
    }
}
