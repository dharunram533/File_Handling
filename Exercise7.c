#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char search[50], replace[50], word[50];
    fp = fopen("student1.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }
    printf("Enter word to search: ");
    scanf("%s", search);
    printf("Enter new word: ");
    scanf("%s", replace);
    while (fscanf(fp, "%s", word) != EOF)
    {
        if (strcmp(word, search) == 0)
        {
            fprintf(temp, "%s ", replace);
        }
        else
        {
            fprintf(temp, "%s ", word);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("student1.txt");
    rename("temp.txt", "student1.txt");
    printf("Word replaced successfully.");
    return 0;
}
