#include<stdio.h>

void main()
			{
				int n;
				printf("Enter the number:");
				scanf("%d",&n);
				if (n%2==0)
				 goto even;
                    else
                 goto odd;
                even:
                    printf("The number is even");
                    goto end;
                odd:
                    printf("The number is odd");
                    goto end;
                end:
                    return(0);
        }
