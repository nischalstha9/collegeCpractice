#include <stdio.h>
void swap()
{
    int a = 20, b = 30;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}
void pryamid()
{
    int size = 5;
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (k = 0; k < (size - i - 1); k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void justification()
{
    int x = 10;         // Here we are assigning 10 to int var x
    char c = 'A';       //Here we are assigning 'A' to char var c
    int *p;             //declaring int type pointer as var p
    char *q;            //declaring char type pointer as var q
    p = (int *)&c;      //typecasting char c to int and giving address to p int pointer  as it cant hold char
    q = (char *)&x;     //typecasting int x to char and giving address to q char pointer  as it cant hold int
    printf("%d\n", *q); // printing value where q is pointing i.e x
    printf("%c\n", *p); // printing value where p is pointing i.e c

    //if we put 1000 in x then the value will keep iterating after 127 as char is one byte data type and it can only hold int data ranging from -128 to 127.
}
void structure()
{
    typedef struct student
    {
        char name[30];
        int roll;
        int year;
        float m1;
        float m2;
        float m3;
        float avg;
    } student;
    student student_array[3];
    int i, size = 3, j;
    for (i = 0; i < size; i++)
    {
        printf("Enter name:\n");
        scanf("%s", student_array[i].name);
        printf("Enter roll:\n");
        scanf("%d", &student_array[i].roll);
        printf("Enter year:\n");
        scanf("%d", &student_array[i].year);
        printf("Enter marks in 3 sub separated by , :\n");
        scanf("%f,%f,%f", &student_array[i].m1, &student_array[i].m2, &student_array[i].m3);
        student_array[i].avg = (student_array[i].m1 + student_array[i].m2 + student_array[i].m3) / 3;
    }
    for (i = 0; i < size; i++)
    {
        printf("Name: %s\n", student_array[i].name);
        printf("Roll: %d\n", student_array[i].roll);
        printf("Year: %d\n", student_array[i].year);
        printf("Mark 1: %f\n", student_array[i].m1);
        printf("Mark 2: %f\n", student_array[i].m2);
        printf("Mark 3: %f\n", student_array[i].m3);
        printf("Average Mark: %f\n", student_array[i].avg);
    }
}
void pascal_triangle()
{
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}
void add_wout_op()
{
    int a = 1, b = 2;
    printf("%d", -(-a - b));
}
void main()
{
    pascal_triangle();
}
