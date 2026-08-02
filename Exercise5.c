# include <stdio.h>
int main()
{
 char ch;
 FILE *file1=fopen("student1.txt","r");
 FILE *file2=fopen("student2.txt","r");
 FILE *file3=fopen("student3.txt","w");
 if (file1==NULL)
 {
  printf("Invalid");
 }
 if (file2==NULL)
 {
  printf("Invalid");
 }
 while((ch=fgetc(file1)) != EOF)
 {
  fputc(ch,file3);
 }
 while((ch=fgetc(file2)) !=EOF)
 {
  fputc(ch,file3);
 }
 fclose(file1);
 fclose(file2);
 fclose(file3);
 printf("Merged.");
return 0;
}
