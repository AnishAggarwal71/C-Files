#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c;
    printf("Enter values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("a is the greatest value");
    else if(b>a && b>c)
    printf("b is the greatest value");
    else
    printf("c is the greatest value");
     
}
