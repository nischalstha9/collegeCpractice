#include <stdio.h>
typedef struct student
{
    int roll;
    char name[20];
} student;
void ip(student *s)
{
    printf("Enter name:\n");
    scanf("%s", s->name);
    printf("Enter roll:\n");
    scanf("%d", &s->roll);
}

void op(student *s)
{
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
}

int main()
{
    student s1;
    ip(&s1);
    op(&s1);
    return 0;
}
