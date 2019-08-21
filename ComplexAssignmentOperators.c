#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    double value;
    scanf("%d",&a);
    scanf("%d",&b);
    a+=b;
    printf("%d \n",a);
    a*=b;
    printf("%d \n",a);
    a-=b;
    value=a;
    printf("The value is: %f",value);



    return 0;
}
