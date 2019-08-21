#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    printf("result %d\n",c==b);
    printf("result %d\n",a>=b);
    printf("result %d\n",a<=b);
    printf("result %d\n",a!=b);


    return 0;
}
