#include <stdio.h>

int main(){

    int a;
    int b;
    int resultat;
    a = 4;
    b = 3;
    resultat = a;


    for(int i=1; i < b; i++){
        resultat = resultat*a;
    }
    printf("%d",resultat);
}
