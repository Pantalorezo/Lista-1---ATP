#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main () {
    float R, pi, A;
    pi = 3.14159;
    printf ("Digite o valor do raio:\n");
    scanf ("%f", &R);
    A = pi * pow(R, 2);
    printf ("A area do circulo eh de aproximadamente: %f\n", A);
    return (0);
}