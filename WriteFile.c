#include<stdio.h>

int main()
{
  FILE *fp;
 fp=fopen("E://Anish.txt","w");
char ch[50];
gets(ch);
fputs(ch,fp);
fclose (fp);
 }
