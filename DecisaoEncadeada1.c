//Programa MAIOR_NUM;
//Var //declara��o de vari�veis
//N1, N2 : Inteiro
//Inicio
//Escreva �1� n�mero: �
//Leia N1
//Escreva �2� n�mero: �
//Leia N2
//Se (N1 > N2) ent�o
//Escreva �O maior � o N1: �, N1
//Sen�o
//Se (N1 = N2) ent�o
//Escreva �Os n�meros s�o iguais�
//Sen�o
//Escreva �O maior � o N2: �, N2
//Fim_se
//Fim_se
//Fim
#include <stdio.h>
#include <conio.h>
int main()
{ int N1, N2;
printf("1%c numero: ",167);
scanf("%i",&N1);
printf("2%c numero: ",167);
scanf("%i",&N2);
if(N1 > N2)
printf("O maior eh o N1: %i", N1);
else
if(N1 == N2)
printf("Os numeros sao iguais");
else
printf("O maior eh o N2: %i", N2);
getch();
}
