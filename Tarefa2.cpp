#include<stdio.h>
#include<stdlib.h>

int main () {
    int a, b;
    printf ("Digite o valor de a:\n");
    scanf ("%d", &a);
    printf ("Digite o valor de b:\n");
    scanf ("%d", &b);
    while (b > 0) {
        a++; // incrementa a
        b--; // decrementa b
    }
    printf ("Resultado da soma: %d", a);
    return (0);
}