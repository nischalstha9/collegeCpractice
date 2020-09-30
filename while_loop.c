#include <stdio.h>

int reverse_by_1()
{   
    int num=10;
    printf("WAP to print from 10 to 1 using while loop.\n");
    while (num !=0 )
    {
        printf("%d\n", num);
        num--;
    }

    return 0;
}

int reverse_by_2()
{
    printf("WAP to print no in reverse with difference of 2\n");
    int i;
    printf("From which number You want reverse??\n");
    scanf("%d", &i);
    while(i > 1){
        i-=2;
        printf("%d\n", i);
    }

    return 0;
}

int sum_of_digit_of_num()
{
    printf("WAP to print sum of digit of an number\n");
    long long int num, sum;
    printf("Enter a number\n");
    scanf("%lld", &num);
    while(num!=0)
    {
        sum += (num%10);
        num = num/10;
    }
    printf("The sum is %lld", sum);

    return 0;
}

int prod_of_digit_of_num()
{
    printf("WAP to print product of digit of  number\n");
    long long int num, product=1;
    printf("Enter a number\n");
    scanf("%lld", &num);
    while(num!=0)
    {
        product *= num%10;
        num = num/10;
    }
    printf("The product is %lld", product);

    return 0;
}

void main(){
    prod_of_digit_of_num();
}