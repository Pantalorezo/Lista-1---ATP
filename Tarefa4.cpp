#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    a = 1;
    b = 2;
    
    // Troca os valores de a e b
    int temp = a;
    a = b;
    b = temp;
    printf("Apos a troca, a = %d e b = %d\n", a, b);
    return 0;
}
