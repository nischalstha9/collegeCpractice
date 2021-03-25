#include <stdio.h>
void toggle(char *ptr)
{
    int i;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z')
            *(ptr + i) += 32;
        else if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z')
            *(ptr + i) -= 32;
    }
}
int main(int argc, char const *argv[])
{
    char word[1000] = "SUGAM Poudel";
    toggle(word);
    printf("%s", word);
    return 0;
}