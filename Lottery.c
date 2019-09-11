#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Numbers: ");
    int a[3];
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);

    printf("You entered:\n ");

    for(int i=0;i<3;i++)
        printf("%d\n",a[i]);

    if(a[0]==345 || a[1]==675)
    {
        if(a[1]==675)
        {
            if(a[2]==34 && a[0]==345)
            {
                goto bwin;
            }
        }
        else goto swin;
    }
    else goto end;


    swin:
        printf("You win 100 Bucks");
    goto lol;
    bwin:
        printf("Cheers!! You win a jackpot");
    goto lol;
    end:
        printf("Better luck next time");
    lol:


        return 0;
}
