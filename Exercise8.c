#include <stdio.h>
int main()
{
    FILE *old,*new_;
    char str[1000];
    int i = 0;
    old = fopen("student1.txt", "r");
    if (old == NULL)
    {
        printf("File not found");
    }
    while ((str[i] = fgetc(old)) != EOF)
    {
        i++;
    }
    new_ = fopen("student_reversed.txt", "w");
    i--;
    while (i >= 0)
    {
        fputc(str[i],new_);
        i--;
    }
    fclose(new_);
    fclose(old);
    printf("Reversed successfully");
    return 0;
}
