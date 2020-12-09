#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int i;
    /* code */
    printf("___________________________\n");
    printf("ASCII Value     | Character\n");
    printf("___________________________\n");
    for(i=0; i<=200; i++){
        printf("\t%d\t| %c\n", i, i);
    }
    printf("___________________________\n");
    return 0;
}
