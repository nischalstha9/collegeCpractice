// #include <stdio.h>
// #define size 5
// int main()
// {

//     int i, numbers[size] = {}, num, odd, even;
//     for (i = 0; i < size; i++)
//     {
//         printf("Enter a number:\n");
//         scanf("%d", &num);
//         numbers[i] = num;
//         num % 2 == 0 ? even++ : odd++;
//     }
//     printf("There are %d even numbers.\n", even);
//     printf("Even Numbers\n");
//     for (i = 0; i < size; i++)
//     {
//         if (numbers[i] % 2 == 0)
//         {
//             printf("%d\t", numbers[i]);
//         }
//     }
//     printf("\nThere are %d odd numbers.\n", odd);
//     printf("Odd Numbers\n");
//     for (i = 0; i < size; i++)
//     {
//         if (numbers[i] % 2 != 0)
//         {
//             printf("%d\t", numbers[i]);
//         }
//     }
//     printf("\nSize of Array:%d", sizeof(numbers));
//     return 0;
// }

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int odd[] = {}, even[] = {}, num, i;
    for (i = 0; i < 5; i++)
    {
        printf("enter a number\n");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even[sizeof(even) / 4] = num;
        }
        else
        {
            odd[sizeof(odd) / 4] = num;
        }
    }
    printf("\n%d\t", sizeof(even));
    // printf("%d\t", even[1]);
    // printf("%d\t", even[2]);
    // printf("%d\t", even[3]);
    // for (i = 0; i < sizeof(even) / 4; i++)
    // {
    //     printf("%d\t", even[i]);
    // }

    return 0;
}
