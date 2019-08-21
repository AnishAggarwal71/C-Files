#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;

    printf("Input the values: ");
    scanf("%f",&a);
    scanf("%f",&b);
    d=a/b;
    c=(int)a%(int)b;
    printf("Division of a,b is: %f\n",d);
    printf("Modulus of a,b is: %f\n",c);
    return 0;
}
