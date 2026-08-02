# include <stdio.h>
int main()
{
 char ch;
 FILE *source=fopen("student1.txt","r");
 FILE *destination=fopen("student2.txt","w");
 if (source==NULL)
 {
 printf("Invalid");
 }
 if (destination==NULL)
 {
 printf("Invalid");
 }
 while((ch=fgetc(source))!=EOF)
 {
 fputc(ch,destination);
 }
 fclose(source);
 fclose(destination);
 printf("Copied successfully.");
return 0;
}
