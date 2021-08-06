// #include <stdio.h>
// void main()
// {
//     int number, i, flag = 0;
//     printf("Enter a number:\n");
//     scanf("%d", &number);
//     for (i = 2; i <= number / 2; i++)
//     {
//         if (number % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("Not Prime");
//     }
//     else
//     {
//         printf("Prime");
//     }
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], rev[20];
    scanf("%s", a);
    int len = strlen(a);
    int i;
    for (i = 0; i <= len; i++)
    {
        rev[i] = a[len - i];
    }
    return 0;
}
