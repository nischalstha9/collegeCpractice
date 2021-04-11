#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct student
{
    int roll;
    char name[30];
} student;
void takeInput(student array[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        puts("Enter name:\n");
        scanf("%s", array[i].name);
        puts("Enter roll:\n");
        scanf("%d", &array[i].roll);
    }
}
void printOutput(student array[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Name: %s\n", array[i].name);
        printf("Roll: %d\n", array[i].roll);
    }
}
int main(int argc, char const *argv[])
{
    student s_arr[SIZE];
    takeInput(s_arr);
    printOutput(s_arr);
    return 0;
}
