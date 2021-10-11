#include <stdio.h>

int main(){

    char a;
    short b;
    int c;
    long int d;
    long long int e;
    float f;
    double g;
    long double h;

    unsigned char i;
    unsigned short j;
    unsigned int k;
    unsigned long int l;
    unsigned long long int m;

    printf("char : %ld\n", sizeof(a));
    printf("short : %ld\n", sizeof(b));
    printf("int : %ld\n", sizeof(c));
    printf("long int : %ld\n", sizeof(d));
    printf("long long int : %ld\n", sizeof(e));
    printf("float : %ld\n", sizeof(f));
    printf("double : %ld\n", sizeof(g));
    printf("long double : %ld\n", sizeof(h));

    printf("unsigned char : %ld\n", sizeof(i));
    printf("unsigned short : %ld\n", sizeof(j));
    printf("unsigned int : %ld\n", sizeof(k));
    printf("unsigned long int : %ld\n", sizeof(l));
    printf("unsigned long long int : %ld\n", sizeof(m));
}