#include <stdio.h>
#include <string.h>
int main()
{
    char word[30];
    int i = 0;
    printf("Enter the word?\n");
    gets(word);
    printf("You entered ");
    puts(word);
    while (word[i] != '\0')
    {
        printf("%c", word[i]);
        i++;
    }

    return 0;
}
