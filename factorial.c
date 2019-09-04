#include<stdio.h>

void main()
			{
			    double n,fac=1;
			   scanf("%lf",&n);
			   printf("%lf!=",n);
               while (n>0)
               {


               fac*=n;
               n--;

			  }
			  printf("%lf",fac);
            }
