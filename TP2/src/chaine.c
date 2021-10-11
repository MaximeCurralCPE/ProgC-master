#include<stdio.h>

int main()
{
    int i;
    char chaine[] = "Bonjour a tous";
    long int taillechaine;
    taillechaine = (sizeof(chaine)/sizeof(char))-1;
    printf("on compte %ld characteres dans cette chaine: %s \n" , taillechaine, chaine );
// ---------------------------------------------------------------------------------------
    char nouvelleChaine[taillechaine];
    for(  i = 0; i< sizeof(nouvelleChaine); i++)
    {
        nouvelleChaine[i]= chaine[i]; 
    }
    printf("la nouvelle chaine: %s\n", nouvelleChaine);
// ---------------------------------------------------------------------------------------
    char concat[sizeof(chaine)+sizeof(nouvelleChaine)];

    for( i = 0; i< sizeof(chaine)-1; i++ )
    {
        concat[i] = chaine[i];
    }

    for( i = 0 ; i< sizeof(nouvelleChaine); i++ )
    {
        concat[i+sizeof(chaine)] = nouvelleChaine[i];
    }
     printf("la concatenation: %s\n", concat);


    return 0;
}