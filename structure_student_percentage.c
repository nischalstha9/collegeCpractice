#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct student
{
    int roll;
    char name[20];
    float percentage;
} student;

void takeInput(student *stu)
{
    printf("Enter name of student\n");
    scanf("%s", stu->name);
    printf("Enter roll of student\n");
    scanf("%d", &stu->roll);
    printf("Enter percentage of student\n");
    scanf("%f", &stu->percentage);
}

void display(student stu)
{
    printf("name: %s\n", stu.name);
    printf("roll: %d\n", stu.roll);
    printf("percentage: %.2f\n", stu.percentage);
}
void sort_by_percentage(student stu[])
{
    int i, j;
    student temporary;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (stu[i].percentage > stu[j].percentage)
            {
                temporary = stu[i];
                stu[i] = stu[j];
                stu[j] = temporary;
            }
        }
    }
}

void main()
{
    int i;
    student s[SIZE];
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter detail of student %d:\n", i + 1);
        takeInput(&s[i]);
    }
    sort_by_percentage(s);
    printf("Sorted by percentage:\n");
    for (i = 0; i < SIZE; i++)
    {
        display(s[i]);
    }
}
