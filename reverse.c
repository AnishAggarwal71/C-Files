#include<stdio.h>
#include<ctype.h>
void main()
{
          char str[100],rev;
          int i,j=0;
          printf("Enter the string\n");
          gets(str);
          i=0;
          j=strlen(str)-1;
          while(i<j)
          {
                rev=str[i];
                str[i]=str[j];
                str[j]=rev;
                i++;
                j--;
          }
          printf("\nReverse string is %s",str);
          return(0);
}
