#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    //WRITING CHAR TO FILE
    fp = fopen("E:/NISCHAL/new_text.txt", "w"); //write mode replaces EVERYTHING ON FILE
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    char c;
    for (c = 'A'; c <= 'Z'; c++)
    {
        fputc(c, fp);
        fputc('\n', fp);
    }
    fclose(fp);
    //READING CHAR FROM FILE
    fp = fopen("E:/NISCHAL/new_text.txt", "r"); //read only mode
    while (!feof(fp))
    {
        c = fgetc(fp);
        printf("%c\n", c);
    }
    fclose(fp);
    //WRITING STRING TO FILE
    fp = fopen("E:/NISCHAL/new_text.txt", "a"); //append mode
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    int i;
    for (i = 0; i < 100000; i++)
    {
        fputs("\nNischal Shrestha is awesome.\n", fp);
    }
    fclose(fp);
    //READING STRING FROM FILE
    fp = fopen("E:/NISCHAL/new_text.txt", "r"); //read only mode
    char s[60];
    while (!feof(fp))
    {
        fgets(s, 60, fp);
        printf("%s\n", s);
    }
    fclose(fp);
    return 0;
}
