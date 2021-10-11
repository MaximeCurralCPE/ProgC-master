#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tableau[100];
    int *ptr = tableau;
    int cible = (50);
    printf("Entier recherché : %d\n \n", cible);
    srand(time(NULL));

    //CREATION DU TABLEAU
    for (int i = 0; i < 100; i++){
        int nombre = rand()/10000000;
        ptr[i] = nombre;
        printf("%d : %d\n", i, tableau[i]);
    }

    //RECHERCHE
    for (int i = 0; i < 100; i++){
        if (ptr[i] == cible){
            printf("\nENTIER PRESENT A LA LIGNE %d\n", i);
            break;
        }
    }
}