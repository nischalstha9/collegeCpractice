#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("C:/Users/sthan/Desktop/new_text.txt", "w");
    if (fp == NULL)
    {
        printf("FILE NOT FOUND");
        return 1;
    }
    fputc('a', fp);
    fputc('\n', fp);
    fprintf(fp, "2 + 2 is %d", 4);
    fputs("\nNischal is awesome", fp);
    fclose(fp);
    fp = fopen("C:/Users/sthan/Desktop/new_text.txt", "r");
    // while (!feof(fp))
    // {
    //     char c;
    //     c = fgetc(fp);
    //     printf("%c", c);
    // }

    // while (!feof(fp))
    // {
    //     char st[60];
    //     fgets(st, 60, fp);
    //     printf("%s", st);
    // }

    // while (!feof(fp))
    // {
    //     char st[5];
    //     fscanf(fp, "%s", &st);
    //     printf("%s", st);
    // }

    fclose(fp);
    // fp = fopen("C:/Users/sthan/Desktop/new_text.bin", "wb");
    // char data[] = "This is :Binary NSicahl";
    // fwrite(data, 1, sizeof(data), fp);
    // fclose(fp);
    fp = fopen("C:/Users/sthan/Desktop/new_text.bin", "rb");
    char data[60];
    fread(data, sizeof(data), 1, fp);
    printf("%s", data);

    return 0;
}
