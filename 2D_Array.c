#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the numbers: ");
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
         printf("\n");
    }

    return 0;
}
