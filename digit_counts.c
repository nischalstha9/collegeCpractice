#include <stdio.h>
//wap to print which digit occours how many times
int main()
{   
    int num, digit, i, j, r, count;
    printf("Enter 4 digit number:\n ");
    scanf("%d", &num);
    for(i=num; i>0; i=i/10){
        digit = num%10;
        //printf("Number: %d\n", i);
        //printf("DIGIT: %d\n", digit);
        count = 0;
        for (j=num; j>0; j=j/10){
            r = j%10;
            if (digit == r){
                count++;
            }
        }
        num/=10;
        printf("\nThe count of %d is %d\n", digit, count);
        count = 0;
    }
    return 0;
}