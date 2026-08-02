# include <stdio.h>
int main()
{
 FILE *fp=fopen("student1.txt","a");
 fprintf(fp,"Favorite colour:%s","Blue & Green");
 fclose(fp);
}
