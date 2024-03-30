#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2, r;
    char divisão = '/', multiplicação = '*', soma = '+', subtração = '-', operação;

    printf("Esse código faz a operação de soma, subtração, multiplicação e divisão de dois números.\n\n");

    printf("Qual operação deseja fazer, soma (+), subtracão (-), multiplicação (*) ou divisão (/)?: ");
    scanf("%c", &operação);

    printf("\nQual o primeiro número?: ");
    scanf("%f", &n1);
    printf("Qual o segundo número?: ");
    scanf("%f", &n2);

    if (operação=='+')
    {
        r=n1+n2;
        printf("\nA soma entre %.2f", n1), printf(" + "), printf("%.2f", n2), printf(" = "), printf("%.2f", r), printf("\n\n");
    }
    else if (operação=='-')
    {
        r=n1-n2;
        printf("\nA subtração entre %.2f", n1), printf(" - "), printf("%.2f", n2), printf(" = "), printf("%.2f", r), printf("\n\n");
 
    }
    else if (operação=='*')
    {
        r=n1*n2;
        printf("\nA subtração entre %.2f", n1), printf(" * "), printf("%.2f", n2), printf(" = "), printf("%.2f", r), printf("\n\n");
        
    }
    else if (operação=='/')
    {
        r=n1/n2;
        printf("\nA divisão entre %.2f", n1), printf(" / "), printf("%.2f", n2), printf(" = "), printf("%.2f", r), printf("\n\n");
    }
    else
    {
        printf("Essa operação não exite.");
    }
    return 0;
}