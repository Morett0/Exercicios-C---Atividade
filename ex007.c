#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade;
    printf("Esse código diz sua categoria baseado na sua idade.\n\n");

    printf("Qual a sua idade?: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("\nSua categoria é Infantil A.\n\n");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf ("\nSua cateforia é Infantil B.\n\n");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("\nSua categoria é Juvenil A.\n\n");

    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("\nSua categoria é Juvenil B.\n\n");
    }
    else if (idade >= 18 && idade <= 30)
    {
        printf("\nSua categoria é Adulto.\n\n");
    }
    else if (idade > 30)
    {
        printf("\nSua categoria é Sênior.\n\n");
    }
    else
    {
        printf("\nVocê não tem idade para ser nadador.\n\n");
    }
    return 0;
}