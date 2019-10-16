#include<stdio.h>

int main()
{
  FILE *fp;
 fp=fopen("E://data.txt","r");
char ch;
 while(ch!=EOF)
 {
    ch=fgetc(fp);
     printf("%c",ch);
 }
 fclose (fp);
 }
