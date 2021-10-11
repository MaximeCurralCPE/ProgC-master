#include <stdio.h>
#include <math.h>

int main(){
    float rayon;
    rayon = 5;
    float aire;
    float perimetre;

    aire = M_PI*rayon*rayon;
    perimetre = 2*M_PI*rayon;

    printf("%f\n", aire);
    printf("%f", perimetre);
}