#include <stdio.h>
#define SIZE 1000
int main(int argc, char const *argv[])
{
    FILE *fp;
    double data[SIZE];
    fp = fopen("D:/Python/Django/NewBlog/db2.sqlite3", "rb");
    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }
    int nObj = fread((void *)data, sizeof(double), SIZE, fp);
    printf("Total elements read: %d\n", nObj);
    int i;
    for (i = 0; i < nObj; i++)
    {
        printf("%10.2lf", data[i]);
    }

    fclose(fp);
    return 0;
}
