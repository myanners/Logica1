#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, opcao;
    printf("Informa se o n%cmero %c positivo ou negativo", 163, 130);
    printf("\n");
    printf("\n");

    while (opcao != 2)
    {
    printf("Digite um n%cmero: ", 163);
    scanf("%i", &numero);

    numero >= 0 ? printf ("N%cmero positivo \n", 163) : printf("N%cmero negativo \n", 163);
    printf("\n");

    printf("Deseja testar outro n%cmero? digite 1 (Sim) ou 2 (N%co): ", 163, 198);
    scanf("%i", &opcao);
    printf("\n");
    printf("\n");
    }
    return 0;
}
