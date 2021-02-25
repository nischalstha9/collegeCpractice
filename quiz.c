#include <stdio.h>
int main()
{
    int choice;
    printf("Question:\n Gender of Vivek?\nOptions:\n");
    printf("1. Third Gender\n");
    printf("2. Female\n");
    printf("3. Not-Male\n");
    printf("4. Not-Female\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 4:
        printf("====> Your answer is right.");
        break;

    default:
        printf("====> Wrong Answer / Input");
        break;
    }
    return 0;
}
