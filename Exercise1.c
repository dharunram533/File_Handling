# include <stdio.h>
int main()
{
 FILE *fp=fopen("student1.txt","w");
 fprintf(fp,"Name:%s Rollno:%d Marks:100\n","Dharun ram P",210,100);
 fclose(fp);
}
