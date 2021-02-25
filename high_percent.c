#include <stdio.h>
int main()
{
    printf("WAP to find percentage of 5 students having 5 sub and find highest among them\n");
    float percentage = 0, math, eng, sci, nep, com, i, lowest = 1000, highest = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter mark in maths:\n");
        scanf("%f", &math);
        printf("Enter mark in English:\n");
        scanf("%f", &eng);
        printf("Enter mark in Science:\n");
        scanf("%f", &sci);
        printf("Enter mark in Nepali:\n");
        scanf("%f", &nep);
        printf("Enter mark in Computer:\n");
        scanf("%f", &com);
        percentage = (math + eng + sci + nep + com) * 0.2;
        printf("\n===\nPercentage is %.2f\n===\n", percentage);
        lowest = percentage < lowest ? percentage : lowest;
        highest = percentage > highest ? percentage : highest;
    }
    printf("The highest percentage is %.2f\n", highest);
    printf("The lowest percentage is %.2f", lowest);
    return 0;
}