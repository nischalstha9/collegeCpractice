#include <stdio.h>
#include <string.h>
int main()
{
    char word[20] = "Sugam Poudel", input[20];
    int wrong = 0, i;
    printf("Enter given word:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%c", word[i]);
    }

    printf("%s", input);
    for (i = 0; i < 20; i++)
    {
        if (word[i] != input[i])
        {
            wrong++;
        }
    }
    if (wrong > 1)
    {
        printf("Wrong!");
    }
    else
    {
        printf("Right!");
    }

    return 0;
}
