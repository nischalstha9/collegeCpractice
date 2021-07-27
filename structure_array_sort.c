#include <stdio.h>
#include <string.h>
#define SIZE 3
typedef struct student
{
    char name[50];
    int math;
    int sci;
    int soc;
    int total;
    float percentage;
} student;

void takeInput(student *student)
{
    printf("Enter name:\n");
    scanf("%[^\n]s", student->name);
    printf("Enter mark in math:\n");
    scanf("%d", &student->math);
    printf("Enter mark in sci:\n");
    scanf("%d", &student->sci);
    printf("Enter mark in social:\n");
    scanf("%d", &student->soc);
    student->total = student->math + student->sci + student->soc;
    student->percentage = student->total / 3;
}

void displayOutput(student student)
{
    printf("%s\n", student.name);
    printf("%d\n", student.total);
    printf("%.2f\%\n", student.percentage);
}

void sorter(student students[])
{
    int i, j;
    student temp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (students[i].percentage < students[j].percentage)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main()
{
    int i;
    student students[SIZE];
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter Detail for Student %d\n", i + 1);
        takeInput(&students[i]);
    }
    sorter(students);
    for (i = 0; i < SIZE; i++)
    {
        printf("Detail for Student %d\n", i + 1);
        displayOutput(students[i]);
    }
    return 0;
}