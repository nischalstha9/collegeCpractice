#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[100] = "Sugam Poudel", str2[100];
    printf("Enter ");
    puts(str1);
    gets(str2);
    puts(str2);
    if (strcmp(str1, str2) == 0)
        puts("Yay String Matches!!");
    else
        puts("Try again!!");
    return 0;
}
