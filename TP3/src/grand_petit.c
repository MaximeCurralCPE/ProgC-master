#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tableau[100];
    int petit;
    int grand;
    int nombre = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        nombre = rand();
        tableau[i] = nombre;
        if (nombre > grand){
            grand = nombre;
        }
        if (nombre < petit){
            petit = nombre;
        }
        //printf("%d\n", tableau[i]);
    }
    printf("Le plus petit nombre du tableau est : %d\n", petit);
    printf("Le plus grand nombre du tableau est : %d\n", grand);
}


