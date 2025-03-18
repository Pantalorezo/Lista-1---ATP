#include<stdio.h>
#include<stdlib.h>

int main () {
    float a, b, c;
    printf ("Digite o valor de a:\n");
    scanf ("%.2f", &a);
    printf ("Digite o valor de b:\n");
    scanf ("%.2f", &b);
    c = a + b;
    printf ("A soma de a e b eh: %.2f", c);
    return (0);
}