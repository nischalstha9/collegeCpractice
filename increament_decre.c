#include<stdio.h>
void main(){
    int a;
    int b;
    printf("We are going to increase value of a and b first\n");
    printf("%d\n", a++);
    printf("%d\t%d\n", ++a, a++);
    printf("%d\n", a);
    printf("All this is happening bcoz a++ first use inital value and increase it but ++a increases value on memory and wait for statement to finish and then use value for operation\n");
}
