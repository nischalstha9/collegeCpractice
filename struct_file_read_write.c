#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Person
    {
        char name[20];
        int id;
    } Person;
    Person per, per2;
    printf("Enter id:\n");
    scanf("%d", &per.id);
    printf("Enter name:\n");
    scanf("%s", &per.name);

    FILE *fp;
    fp = fopen("C:/Users/sthan/Desktop/structure.bin", "wb");
    fwrite(&per, sizeof(per), 1, fp);
    fclose(fp);
    fp = fopen("C:/Users/sthan/Desktop/structure.bin", "rb");
    fread(&per2, sizeof(per2), 1, fp);
    printf("\n%d %s", per2.id, per2.name);
    fclose(fp);
    return 0;
}
