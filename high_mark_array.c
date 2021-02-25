#include <stdio.h>
#define size 5
int main()
{
    int i, marks[size], mark_cache, student[size], student_cache;
    for (i = 0; i < size; i++)
    {
        printf("Enter roll number of student:\n");
        scanf("%d", &student[i]);
        printf("Enter mark:\n");
        scanf("%d", &marks[i]);
    }
    // TO BE FIXED
    for (i = 0; i < size; i++)
    {
        if (marks[i + 1] > marks[i])
        {
            mark_cache = marks[i];
            marks[i] = marks[i + 1];
            marks[i + 1] = mark_cache;
            student_cache = student[i];
            student[i] = student[i + 1];
            student[i + 1] = student_cache;
        }
    }

    printf("The highest mark %d is obtained by student roll %d.\n", student[0], marks[0]);
    printf("The lowest mark %d is obtained by student roll %d.\n", student[size], marks[size]);

    return 0;
}
