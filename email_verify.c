#include <stdio.h>
int main(int argc, char const *argv[])
{
    char email[50];
    int cnt = 50, i, at_check = 0, dot_check = 0;
    printf("Enter Your Email:\n");
    scanf("%s", &email);
    for (i = 0; i < cnt; i++)
    {
        if (email[i] == '@')
        {
            at_check += 1;
        }
        if (email[i] == '.' && at_check == 1)
        {
            dot_check += 1;
        }
    }
    if (at_check == 2 && dot_check >= 1)
    {
        printf("==> Your Email is valid.");
    }
    else
    {
        printf("==> Your Email is not valid.");
    }

    return 0;
}
