#include <stdio.h>
#include <string.h>
int main()
{
    char word[20] = "Sugam Poudel", input[20];
    int wrong = 0, i;
    printf("Enter given word:\n");
    puts(word);
    gets(input);
    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] != input[i])
        {
            printf("%c should be %c\n", input[i], word[i]);
            wrong++;
        }
    }
    if (wrong > 0)
    {
        printf("%d wrong letters! Try Again!! ", wrong);
    }
    else
    {
        printf("Yay You Typed Right!");
    }

    return 0;
}
