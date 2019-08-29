#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   scanf("%d",&year);
   if (year%4==0 && (year%400==0 || year%100!=0))
    printf("Its a leap year");
   else
    printf("Its not a leap year");
    
}
