#include <stdio.h>
int main()
{
    float temp, highest=0, lowest=100000;
    int count=0, i;
    printf("Write a program to accept the temperature of 75 district and find highest, lowest and count temperature between 35 to 40 degree Celsius?\n");
    for(i=0; i<75; i++){
        printf("Enter the temperature in Celsius:\n");
        scanf("%f", &temp);
        highest = temp>highest?temp:highest;
        lowest = temp<lowest?temp:lowest;
        if (temp>=35 && temp<=40){
            count++;
        };
    };
    printf("The highest temperature is %.2f\n", highest);
    printf("The lowest temperature is %.2f\n", lowest);
    printf("The temperature count between 35 and 40 is %d\n", count);

    return 0;
}

#include<stdio.h>
int main()
{
    int num, i;
    long long int factorial=1;
    printf("Enter Number You want Factorial of:\n");
    scanf("%d", &num);
    for (i = num; i>0; i--){
        factorial *= i;
    }
    printf("Factorial is %d", factorial);
    return 0;
}