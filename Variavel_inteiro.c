#include <stdio.h>
#include <stdlib.h>

int main()
{
int inteiro = 0;

printf("Variavel apos ser zerada e sem ser carregada");
printf("\n");
printf("---------------------------------------------------");
printf("\n");
printf("\n");

printf("int inteiro (i) = %i",inteiro);
printf("\n");
printf("int inteiro (d) = %d",inteiro);
printf("\n");

printf("\n");
printf("\n");
printf("Variavel apos ser carregada");
printf("\n");
printf("---------------------------------------------------");
printf("\n");
printf("\n");

inteiro = 123;

printf("int inteiro (i) = %i",inteiro);
printf("\n");
printf("int inteiro (d) = %d",inteiro);
printf("\n");


printf("\n");
printf("\n");
printf("Mostrando a variavel depois do valor ser digitado: ");
printf("\n");
printf("---------------------------------------------------");
printf("\n");
printf("\n");

printf("Entre valor mascara (i): ");
scanf("%i", &inteiro);
printf("\n");
printf("int inteiro (i) = %i",inteiro);

printf("\n");
printf("\n");


printf("Entre valor mascara (i): ");
scanf("%d", &inteiro);
printf("\n");
printf("int inteiro (d) = %d",inteiro);

    return 0;
}
