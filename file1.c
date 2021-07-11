#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    //WRITING CHAR TO FILE
    fp = fopen("C:/Users/sthan/Desktop/nsic.txt", "w"); //write mode replaces EVERYTHING ON FILE
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
    fp = fopen("C:/Users/sthan/Desktop/nsic.txt", "r"); //read only mode
    while (!feof(fp))
    {
        c = fgetc(fp);
        printf("%c\n", c);
    }
    fclose(fp);
    //WRITING STRING TO FILE
    fp = fopen("C:/Users/sthan/Desktop/nsic.txt", "a"); //append mode
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    int i;
    for (i = 0; i < 1; i++)
    {
        fputs("\nNischal Shrestha is awesome.\n", fp);
    }
    fclose(fp);
    //READING STRING FROM FILE
    fp = fopen("C:/Users/sthan/Desktop/nsic.txt", "r"); //read only mode
    char s[60];
    while (!feof(fp))
    {
        fgets(s, 60, fp);
        printf("%s\n", s);
    }
    fclose(fp);

    fp = fopen("C:/Users/sthan/Desktop/nsic.bin", "wb"); //write only binary mode
    double data[5] = {1.5, 22.5, 67.5, 45.5, 33.5};
    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }
    int nObj = fwrite((void *)data, sizeof(double), 5, fp);
    printf("Total elements written: %d\n", nObj);
    fclose(fp);

    fp = fopen("C:/Users/sthan/Desktop/nsic.bin", "wb"); //read only binary mode
    double data_read[5];
    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }
    int nObjRead = fread((void *)data_read, sizeof(double), 5, fp);
    printf("Total elements read: %d\n", nObjRead);
    for (i = 0; i < nObjRead; i++)
    {
        printf("%10.2lf", data_read[i]);
    }
    fclose(fp);
    return 0;
}
