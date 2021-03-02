#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age[30], i, ages_size, max = 0, min = 10000, betn_count = 0;
    printf("How many ages do you want to compare?(max 30)\n");
    scanf("%d", &ages_size);
    printf("Enter ages:\n");
    for (i = 0; i < ages_size; i++)
    {
        scanf("%d", &age[i]);
        max = age[i] > max ? age[i] : max;
        min = age[i] < min ? age[i] : min;
        if (age[i] >= 35 && age[i] <= 55)
        {
            betn_count++;
        }
    }
    printf("The max age is %d.\nThe min age is %d.\nThe count of age between 35 and 55 is %d.", max, min, betn_count);

    return 0;
}
