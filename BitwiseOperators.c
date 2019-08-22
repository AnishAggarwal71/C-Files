#include <stdio.h>
#include <stdlib.h>

//For Bitwise And
int main()
{
    int a=12,b=25;
    printf("Output=%d",a&b);
    return 0;
}

//For Bitwise XOR

int main()
{
    int a=12,b=25;
    printf("Output=%d",a^b);
    return 0;
}

//For Bitwise Compliment

int main()
{
    printf("Output=%d\n",~35);
    printf("Output=%d\n",~-12);
    return 0;
}

//For Bitwise Right and Left Shift

int main()
{
   int a=8;
   printf("left shift value.%d\n",a<<0);
    printf("left shift value.%d\n",a<<1);
     printf("left shift value.%d\n",a<<2);
      printf("left shift value.%d\n",a<<3);
       printf("left shift value.%d\n",a<<4);
   printf("right shift value.%d\n",a>>0);
    printf("right shift value.%d\n",a>>1);
     printf("right shift value.%d\n",a>>2);
      printf("right shift value.%d\n",a>>3);
       printf("right shift value.%d\n",a>>4);
   return 0;
}
