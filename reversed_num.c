//#include <stdio.h>
//void main ()
//{
//    long long int n;
//    int reversed[20];
//    int i = 0;
//    printf("Enter number you want to reverse:\n");
//    scanf("%lld", &n);
//    if (n==0){
//    	printf("0");
//	}else{
//	    while(n != 0){
//	        reversed[i] = n%10;
//			n = n/10;
//			printf("%d", reversed[i]);
//	        i++;
//	    }
//    }
//}

#include <stdio.h>
void main ()
{
    long long int n;
    int i = 0;
    printf("Enter number you want to reverse:\n");
    scanf("%lld", &n);
    if (n==0){
    	printf("0");
	}else{
	    while(n != 0){
	    	printf("%d", n%10);
			n = n/10;			
	        i++;
	    }
    }
}


