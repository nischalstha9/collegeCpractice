#include<stdio.h>
void main(){
	long long int num;
	long int sum;
	printf("Enter integer you want sum of:\n");
	scanf("%lld", &num);
	while(num!=0){
		sum += num%10;
		num /= 10;
	}
	printf("The sum is : %d\n", sum);
}
