#include <stdio.h>
#include <stdlib.h>

 enum week{Sun,Mon,Tue,Wed};
 int main()
{
    enum week day;
    day = Wed+1;
    printf("The value of week is %d",day);
    return 0;
}
