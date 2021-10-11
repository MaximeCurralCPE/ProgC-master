#include <stdio.h>

int main(){
    float counter;  counter = 42;
    int i;
    int j;

    for(i=1; i < counter; i++)
    {
        if(i == 1)
        {
            printf("*\n");
        }
        else
        {
        printf("*");
        }
        if(i > 2)
        {
            for(j=1; j < i-1; j++)
            {
                printf("#");
            }
        }
        if(i != 1)
        {
        printf("*\n");
        }
    }
    for(i=1; i < counter+1; i++)
    {
        printf("*");
    }
}