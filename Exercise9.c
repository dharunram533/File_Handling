# include <stdio.h>
int main()
{
 int space=0,vowels=0,digits=0,consonants=0,special=0;
 char str[1000];
 int i=0;
 FILE *open=fopen("student1.txt","r");
 if (open==NULL)
 {
  printf("Invalid");
 }
 while ((str[i]=fgetc(open))!=EOF)
 {
  if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || 
      str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
  {
   vowels++;
  }
  else if (str[i]==' ')
 {
  space++;
 }

  else if (str[i]>='0' &&  str[i]<='9')
  {
   digits++;
  }
  else if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
  {
   consonants++;
  }
  else if (str[i] == '\n' || str[i] == '\t')
  {
    // Ignore newline and tab
  }
  else
  {
   special++;
  }
 }
 printf("SPACE:%d\n",space);
 printf("VOWELS:%d\n",vowels);
 printf("DIGITS:%d\n",digits);
 printf("CONSONANTS:%d\n",consonants);
 printf("SPECIAL CHARACTER:%d\n",special);
return 0;
}
