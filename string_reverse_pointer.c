#include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int m = 10, n, o;
//     int *z;
//     z = &m;
//     printf("Here is m=%d, n and o are two integer variable and *z is an integer\n", m);
//     printf("z stores the address of m = %p\n", z);
//     printf("*z stores value of m = %d\n", *z);
//     printf("&m is the address of m = %p\n", &m);
//     printf("&n is the address of n = %p\n", &n);
//     printf("&o is the address of o = %p\n", &o);
//     printf("&z is the address of z = %p\n", &z);
//     // printf("%d, %d", m, *z);?s
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int *num1, *num2, n1, n2;
    num1 = &n1;
    num2 = &n2;
    scanf("%d %d", &n1, &n2);
    printf("sum = %d", *num1 + *num2);
    return 0;
}
