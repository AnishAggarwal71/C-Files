#include<stdio.h>

void main()
			{
			    int n,a=0,b=1,c,i;
			    printf("Enter the limits:\n");
			    scanf("%d",&n);
			    printf("First %d terms of Fibonacci series are:\n",n);
			    for(i=1;i<=n;i++)
                {
                    printf("%d,",a);
                    c=a+b;
                    a=b;
                    b=c;
                }

            }
