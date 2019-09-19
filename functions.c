#include <stdio.h>
#include <stdlib.h>

int add();

int main()
{
    int sum;
    sum=add();
    printf("The sum is: %d",sum);
    return 0;
}

int add()
{
   int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    return a+b;
}
