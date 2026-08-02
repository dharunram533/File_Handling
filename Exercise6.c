# include <stdio.h>
# include <string.h>
int main()
{
 int count=0;
 char search[50];
 char word[50];
 char ch;
 FILE *fp=fopen("student1.txt","r");
 if (fp==NULL)
 {
  printf("Invalid");
 }
 printf("Enter char to search:");
 scanf("%s",search);
 while((fscanf(fp,"%s",word))!=EOF)
 {
  if(strcmp(word,search)==0)
  {
   count++;
  }
 }
 if(count==0)
 {
  printf("Word not found");
 }
 else
 {
 printf("Totally:%d",count);
 }
 fclose(fp);
return 0;
}
