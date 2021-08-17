#include <stdio.h>

int main()
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
    printf("\nCount of alphabets: %d", alpha);
    printf("\nCount of space: %d", space);
    printf("\nCount of other characters: %d", others);

    return 0;
}