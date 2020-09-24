#include<stdio.h>
int main(){
	int n = 15;
		for(int i=1; i<=5; i++){
			for(int j=0; j<i; j++)	{
				printf("*\t");
			};
			printf("\n");
		};
		printf("%d", n*(n+1)/2);
		return 0;
	}
