#include <stdio.h>

int main(){
    
    int compteur;

    //condition : divisible par 2 et 15
    printf("\n\n----------Nombres divisibles par 2 et 15----------\n\n");
    for(compteur = 1; compteur < 1001; compteur++){
        if((compteur % 2 == 0) && (compteur % 15 == 0)){
        printf("%d\n", compteur);
        }
    }
    //condition : divisible par 103 ou 107
    printf("\n\n----------Nombres divisibles par 103 ou 107----------\n\n");
    for(compteur = 1; compteur < 1001; compteur++){
        if((compteur % 103 == 0) || (compteur % 107 == 0)){
        printf("%d\n", compteur);
        }
    }
    //condition : divisible par 7 ou 5 mais pas par 3
    printf("\n\n----------Nombres divisibles par 7 ou 5 mais pas par 3----------\n\n");
    for(compteur = 1; compteur < 1001; compteur++){
        if(((compteur % 7 == 0) || (compteur % 5 == 0)) && (compteur % 3 != 0)){
        printf("%d\n", compteur);
        }
    }
}