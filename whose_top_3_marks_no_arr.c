#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    float math, sci, soc, nep, eng, percent, h1 = 0, h2 = 0, h3 = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks in math, sci, soc, nep, eng resp separated by comma:\n");
        scanf("%f,%f,%f,%f,%f", &math, &sci, &soc, &nep, &eng);
        percent = (math + sci + eng + soc + nep) / 5;
        if (percent > h1)
        {
            h3 = h2;
            h2 = h1;
            h1 = percent;
        }
        else if (percent > h2)
        {
            h3 = h2;
            h2 = percent;
        }
        else if (percent > h3)
        {
            h3 = percent;
        }
    }
    printf("Top 3 are: \n1. %.2f\n2. %.2f\n3. %.2f", h1, h2, h3);
    return 0;
}
