#include <stdio.h>
#include <stdlib.h>

int main () {
    char menor = '-', maior = '+', igual = '=', caracter;

    printf("Esse código lê o caracter e diz se ele é o sinal de maior (>), menor (<) e igual (=).\n");

    printf("Digite o caracter: ");
    scanf("%c", &caracter);

    if (caracter == '>')
    {
        printf("\nO '>' é o caracter de maior.\n\n");
    }
    else if (caracter == '<')
    {
        printf("\nO '<' é o caracter de menor.\n\n");
    }
    else if (caracter == '=')
    {
        printf("\nO '=' é o caracter de igual.\n\n");
    }
    else
    {
        printf("\nOutro caracter.\n\n");
    }


    return 0;
}