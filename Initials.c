#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[1000],b[1000],c[1000],d[1000];
    printf("Enter your first name: ");
    gets(a);
    printf("Enter your surname: ");
    gets(b);
    strncpy(c,a,1);
    strncpy(d,b,1);
    printf("Your name: %s %s\n",a,b);
    printf("Initials: %s.%s",c,d);
    return 0;
}
