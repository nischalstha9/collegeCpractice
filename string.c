#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int i, alpha = 0, space = 0, others = 0;
    printf("Enter a word\n");
    scanf("%[^\n]", str);
    printf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z')
        {
            alpha++;
        }
        else if (str[i] == ' ')
            space++;
        else
            others++;
    }
    printf("\n%d", alpha);
    printf("\n%d", space);
    printf("\n%d", others);

    return 0;
}