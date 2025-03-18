#include<stdio.h>
#include<stdlib.h>

int main () {
    float R, pi, A;
    pi = 3.14159;
    printf ("Digite o valor do raio:\n");
    scanf ("%f", &R);
    A = pi * R * R;
    printf ("A area do circulo eh de aproximadamente: %f\n", A);
    return (0);
}