#include<stdio.h>

int main()
{ 
   char a[100],b[100];
   printf("Enter thr string");
   gets(a);
   strcpy(b,a);
   strrev(b);
   if(strcmp(a,b)==0)
       printf("The string is palindrome");
   else
       printf("The string is not a palindrome");
   return(0);
}
