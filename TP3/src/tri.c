#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int tri(int tableau[],int taille){

//TRI DU TABLEAU
printf("Tableau trié :     ");
    for( int i = 0 ; i < (taille/sizeof(int))-1 ; i++){
        for( int j = i+1 ; j < taille/sizeof(int) ; j++){
            if(tableau[i]>tableau[j]){
                int a = tableau[i];
                tableau[i]=tableau[j];
                tableau[j] = a ;
            }
        }
    }

    for( int b = 0 ; b < (taille/sizeof(int)) ; b++){
        printf("%d  ",tableau[b]) ;
    }
    printf("\n");
    return 0;
}


int main(int argc, char const *argv[]){
    
    //CREATION DU TABLEAU
    int tab[10];
    srand(time(NULL));

printf("Tableau non trié : ");
    for( int i = 0 ; i < sizeof(tab)/sizeof(int) ; i++){
        tab[i] = rand()%100;
        printf("%d  ",tab[i]);
    }
    printf("\n");
    tri(tab,sizeof(tab));
    
    return 0;
}