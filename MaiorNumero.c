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
//Escreva �N2 � maior ou igual a
//N1: �, N2
//Fim_se
//Fim
#include <stdio.h>
#include <conio.h>
int main()
{
int N1, N2;
printf("1%c numero: ",167);
scanf("%i",&N1);
printf("2%c numero: ",167);
scanf("%i",&N2);
if(N1 > N2)
printf("O maior eh o N1: %i", N1);
else
printf("N2 eh maior ou igual a N1: %i", N2);
getch();
}
