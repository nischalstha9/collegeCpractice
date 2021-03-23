#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100], str2[100];
    puts("Enter string 1:");
    gets(str);
    puts("Enter string 2:");
    gets(str2);
    strcat(str, str2); //adds str and str2 and puts value on str
    printf("%s\n", str);
    printf("%s\n", str2);
    strcpy(str2, str);
    printf("%s\n", str2);
    return 0;
}
