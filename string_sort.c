///WAP to enter ID,Name & Address of 25Employees into Structure variable called Employee and sort them in ascending order on the basis of their name with use of Pointer.

#include <stdio.h>
#include <string.h>
#define SIZE 3
int main(int argc, char const *argv[])
{
    typedef struct Employee
    {
        int id;
        char name[50];
        char address[50];
    } Employee;

    Employee emps[SIZE], temp;
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter Id:\n");
        scanf("%d", &emps[i].id);
        printf("Enter Name:\n");
        scanf("%s", emps[i].name);
        printf("Enter Address:\n");
        scanf("%s", emps[i].address);
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (strcmp(emps[i].name, emps[j].name) == 1)
            {
                temp = emps[i];
                emps[i] = emps[j];
                emps[j] = temp;
            }
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("\n%5d%5s%5s", emps[i].id, emps[i].name, emps[i].address);
    }

    return 0;
}
