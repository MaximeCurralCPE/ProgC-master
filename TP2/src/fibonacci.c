#include<stdio.h>


int main()
{
    int n = 10;
    int u0 = 0;
    int u1 = 1;
    printf("%d\n", u0);
    printf("%d\n", u1);

    int un = 0;
    int un1 = u1;
    int un2 = u0;
    int temp;
    
    for (int i = 2; i<n; i++ )
    {
        printf("%d\n", u0+u1);
        temp = u1;
        u1 = u1+u0;
        u0 = temp;
        temp = un; 
        
        // un = un1 + un2;
        // un2 = un1;
        // un1 = temp;

        // printf("%d\n", un);

    }
}