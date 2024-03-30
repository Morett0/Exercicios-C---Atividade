#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, x;
    printf("Esse foi feito para dividir o primeiro número pelo segundo número.\n\n");
    printf("Escreva o primeiro número (Inteiro): ");
    scanf("%f", &a);
    printf("Escreva o segundo número (Inteiro): ");
    scanf("%f", &b);
    if (b == 0)
    {
        printf("Invalido.\n\n");
    }
    else
    {
        x = a/b;
        printf("O resultado do primeiro número dividido pelo segundo é de: %.2f", x);
    }
    
    return 0;
}