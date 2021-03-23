// #include <stdio.h>

// // C program to demonstrate pointer to pointer
// int main()
// {
//     int var = 789;

//     // pointer for var
//     int *ptr2;

//     // double pointer for ptr2
//     int **ptr1;

//     // storing address of var in ptr2
//     ptr2 = &var;

//     // Storing address of ptr2 in ptr1
//     ptr1 = &ptr2;

//     // Displaying value of var using
//     // both single and double pointers
//     printf("Value of var = %d\n", var);
//     printf("Value of var using single pointer = %d\n", *ptr2);
//     printf("Value of var using double pointer = %d\n", **ptr1);

//     return 0;
// }
// #include <stdio.h>

// // C program to demonstrate pointer to pointer
// int main()
// {
//     int var = 789;

//     // pointer for var
//     int *ptr2;

//     // double pointer for ptr2
//     int **ptr1;

//     // storing address of var in ptr2
//     ptr2 = &var;

//     // Storing address of ptr2 in ptr1
//     ptr1 = &ptr2;

//     // Displaying value of var using
//     // both single and double pointers
//     printf("Value of var = %d\n", var);
//     printf("Value of var using single pointer = %d\n", *ptr2);
//     printf("Value of var using double pointer = %d\n", **ptr1);

//     return 0;
// }
#include <stdio.h>

// C program to demonstrate pointer to pointer
int main()
{
    int var = 789;

    // pointer for var
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;

    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;

    // Displaying value of var using
    // both single and double pointers
    printf("Value of var = %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr1);
    printf("Value of var using double pointer = %d\n", **ptr2);
    printf("Value of var using triple pointer = %d\n", ***ptr3);
    printf("Value of var using quad pointer = %d\n", ****ptr4);
    printf("Value of var using 5th pointer = %d\n", *****ptr5);

    scanf("%d", &****ptr4);
    printf("%d", var);
    printf("\n%d", *****ptr5);
    return 0;
}
