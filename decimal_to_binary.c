#include <stdio.h>
// MAILE GAREKO
#define size 8
int main()
{
    int decimal = 10, binary[size], i = 0, temp;

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    return 0;
}

// ?SIR LE GAREKO????????????
// int main()
// {
//     int num, rem[10], i;
//     printf("Enter decimal\n");
//     scanf("%d", &num);
//     for (i = 0; num > 0; i++)
//     {
//         rem[i] = num % 2;
//         num = num / 2;
//     }
//     printf("Binary is\n");
//     for (i = i - 1; i >= 0; i--)
//     {
//         printf("%d", rem[i]);
//     }

//     return 0;
// }
