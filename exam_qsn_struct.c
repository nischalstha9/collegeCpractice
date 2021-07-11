/*Write a C program using structure that reads the records of
35 students with members roll, name, address and makes and display the record of
students who have obtained greater than 250 marks*/

#include <stdio.h>
#define SIZE 5

typedef struct student
{
    char name[50];
    int roll;
    char address[100];
    float marks;
} student;
void takeIp(student *obj)
{
    printf("Enter name:\n");
    scanf("%s", obj->name);
    printf("Enter roll:\n");
    scanf("%d", &obj->roll);
    printf("Enter address:\n");
    scanf("%s", obj->address);
    printf("Enter marks:\n");
    scanf("%f", &obj->marks);
}
display(student *obj)
{
    printf("\tNAME\t|\tROLL\t|\tADDRESS\t|\tMARKS\t");
    printf("%s\t%5d\t%s\t%5f", obj->name, obj->roll, obj->address, obj->marks);
}
int main()
{
    student array[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        takeIp(&array[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        if (array[i].marks > 250)
        {
            display(&array[i]);
        }
    }

    return 0;
}
