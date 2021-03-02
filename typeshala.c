#include <stdio.h>
int main(int argc, char const *argv[])
{
    char word[20] = "Sugam Poudel", input[20];
    int wrong = 0, i;
    printf("Enter given word: ");
    printf("%s", input);
    for (i = 0; i < 20; i++)
    {
        if (word[i] != input[i])
            ;
        wrong = 1;
    }
    if (wrong = 1)
    {
        printf("Wrong!");
    }
    else
    {
        printf("Right!");
    }

    return 0;
}
