#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch1, ch2;
    fp1 = fopen("student1.txt", "r");
    fp2 = fopen("student2.txt", "r");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File not found");
    }
    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if (ch1 != ch2)
        {
            printf("Files are different");
            fclose(fp1);
            fclose(fp2);
            return 0;
        }
    } while (ch1 != EOF && ch2 != EOF);
    printf("Files are identical");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
