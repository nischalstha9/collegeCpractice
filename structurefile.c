#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    typedef struct student
    {
        char name[20];
        int roll;
        int percentage;
    } student;
    FILE *fp;
    student stu;
    fp = fopen("C://Users/sthan/Desktop/student.bin", "wb");
    if (fp == NULL)
    {
        printf("\nFNF!!! 404!!!");
        return 1;
    }
    else
    {
        scanf("%s", stu.name);
        scanf("%d", &stu.roll);
        scanf("%d", &stu.percentage);

        fwrite(&stu, sizeof(student), 1, fp);
        fclose(fp);

        fp = fopen("C:/Users/sthan/Desktop/student.bin", "rb"); //read only binary mode
        while (fread(&stu, sizeof(student), 1, fp))
            printf("name = %s roll = %d percentage=%d\n", stu.name, stu.roll, stu.percentage);
        fclose(fp);
    }

    return 0;
}
