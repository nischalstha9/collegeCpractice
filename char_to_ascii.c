#include <stdio.h>
void main(){
    char a;
    printf("Enter character you want ASCII value of:\n");
    scanf("%c", &a);
    printf("The ASCII value of '%c' is '%d'", a, a);
}