#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto, opcao;

    while (opcao != 2)
    {

    printf("Digite um n%cmero inteiro: ", 163);
    scanf("%i", &numero);

    if(numero >= 0 )
    {
        do
        {
            resto = numero % 10;
            printf("%i", resto);
            numero /= 10;

        }
        while ( numero != 0);
        printf("\n");
        printf("Divis%co de n%cmero positivo", 198, 163);
        printf("\n");
        printf("\n");
    }
    else if (numero < 1)
    {
        numero = numero * -1;

        printf("-");

        do
        {
            resto = numero % 10;
            printf("%i", resto);
            numero /= 10;

        }
        while ( numero != 0);
        printf("\n");
        printf("Divis%co de n%cmero negativo", 198, 163);
        printf("\n");
        printf("\n");
    }
    printf("Deseja testar outro n%cmero? digite 1 (Sim) ou 2 (N%co): ", 163, 198);
    scanf("%i", &opcao);
    }
    return 0;
}
