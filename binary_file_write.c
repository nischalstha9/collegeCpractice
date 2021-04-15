#include <stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    FILE *fp;
    double data[SIZE] = {10.5, 11.5, 22.45, 33.5, 46.5};
    fp = fopen("E:/NISCHAL/binary.bin", "wb");
    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }
    int nObj = fwrite((void *)data, sizeof(double), SIZE, fp);
    printf("Total elements written: %d\n", nObj);
    fclose(fp);
    return 0;
}
