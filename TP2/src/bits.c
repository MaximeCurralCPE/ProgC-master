#include <stdio.h>

int main()
{
    int d = 1048592;
    int d1 = 0;
    int d2 = 0;
    
    d1 = d>>4;
    d2 = d>>20;
    printf("d1 = %d\n d2 = %d \n", d1,d2 );

    if ( ((d1%2) == 1 ) && ((d2%2) == 1))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}