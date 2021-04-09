#include <stdio.h>

void insert_n_display()
{
    int numbers[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &numbers[i]);
    }
    printf("The numbers are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("numbers[%d] has value %d\n", i, numbers[i]);
    }
}
void sum_of_arr()
{
    int numbers[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("The sum of elements is: %d\n", sum);
}
void odd_even_count()
{
    int numbers[10], i, odd = 0, even = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &numbers[i]);
        numbers[i] % 2 == 0 ? even++ : odd++;
    }
    printf("The even count is: %d\n", even);
    printf("The even count is: %d\n", odd);
}
void high_low_percentage()
{
    int percentage[10], i, high = 0, low = 100000;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &percentage[i]);
        high = percentage[i] > high ? percentage[i] : high;
        low = percentage[i] < low ? percentage[i] : low;
    }
    printf("The highest percentage is %d\n", high);
    printf("The lowest percentage is %d\n", low);
}
int main()
{
    // insert_n_display();
    sum_of_arr();
    // odd_even_count();
    // high_low_percentage();
    return 0;
}