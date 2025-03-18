#include<stdio.h>
#include<stdlib.h>

int main () {
    float a, b, c;
    //soma
    printf ("Digite o valor de a:\n");
    scanf ("%f", &a);
    printf ("Digite o valor de b:\n");
    scanf ("%f", &b);
    c = a + b;
    printf ("A soma de a e b eh: %.1f\n", c);

    //subtração
    c = a - b;
    printf ("A subtracao de a e b eh: %.1f\n", c);

    //multiplicação
    c = a * b;
    printf ("A multiplicacao de a e b eh: %.1f\n", c);

    //divisão de a por b com tratamento para divisão por zero
    if (b != 0) {
        float divisao = (float)a / b;
        printf("A divisao de a por b eh: %.6f\n", divisao);
    } else {
        printf("Erro: Nao eh possivel dividir por zero.\n");
    }
    return (0);
}