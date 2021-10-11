/*#include <stdio.h>

int valeur;
char *octets = (char *)&valeur;
putchar(octets);


//short, int, long int, float, double et long double.
*/

#include <stdio.h>
#include <stdlib.h>
#define LEN_INT sizeof(int)
 
int main(int argc, char *argv[]){
    int t = 499;
    int i;
    unsigned char *x =NULL;
    x = (unsigned char*)&t;
    for(i =0; i <LEN_INT; i++)
        printf("%p\n", *(x +i));
    return EXIT_SUCCESS;}