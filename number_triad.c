#include <stdio.h>
int main()
{   
    int num,k,l,m,n,d1,d2,d3,d4,d5,d6,d7,d8,d9;
    for (num = 100; num <=333; num++)
    {
        l = num;
        m = num*2;
        n = num*3;
        k = num;//just made k for easy program
        while (k!=0)
        {   
            d1 = k%10; k/=10;
            d2 = k%10; k/=10;
            d3 = k%10; k/=10;
        };
        k = num*2;
        while(k!=0)
        {
            d4 = k%10; k/=10;
            d5 = k%10; k/=10;
            d6 = k%10; k/=10;
        };
        k = num*3;
        while(k!=0)
        {
            d7 = k%10; k/=10;
            d8 = k%10; k/=10;
            d9 = k%10; k/=10;
        };
        if(d1==d2 || d1==d3 || d1==d4 || d5==d6 || d7==d8 || d1==d9 || d2 == d3 || d2 ==d4 || d2 ==d5 || d2 ==d6 || d2 ==d7 || d2==d8 || d2==d9 || d3 ==d4 || d3==d5 || d3==d6 || d3==d7 ||d3==d8 || d3==d9 || d4==d5 || d4==d6 ||d4==d7 || d5==d8 ||d5==d9||d6==d7||d6==d8||d6==d9||d7==d8||d7==d9||d8==d9)
        {
            continue;
        }else{
            printf("%d\t", l);
            printf("%d\t", m);
            printf("%d\n", n);
        }
            
        
    }

    return 0;
}
