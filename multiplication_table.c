#include<stdio.h>
void main(){
	int multiple(){
		int a,i;
		printf("For which Number You want to generate Table?\n");
		scanf("%d", &a);
		for (i = 1; i<=10; i++){
			printf("%d X %d = %d\n", a,i,a*i );
		};
	};
	
	int fibo(){
		int j;
		int x=0;
		int y=1;
		int z;
		printf("%d\t%d",x,y);
		for(j=0; j<=20; j++){
			z = x+y;
			x = y;
			y = z;
			printf("\t%d\n", z);
		};
	};
	fibo();
	multiple();
	
}
