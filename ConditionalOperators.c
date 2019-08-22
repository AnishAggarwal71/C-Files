#include <stdio.h>
#include <stdlib.h>


int main()
{
   int age;
   printf("Enter our age:");
   scanf("%d",&age);
   puts(age>=18?"Welcome":"Not allowed");
   return 0;
}
