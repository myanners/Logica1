/* Fa�a um programa na linguagem C (use a estrutura do/while()), que receba
as m�dias finais de 5 alunos. No final mostre as m�dias digitadas e quantos
alunos foram: aprovados, reprovados ou ficaram em IFA.
M�dia >= 6 ? aprovado
M�dia >= 4 e M�dia < 6 ? IFA
M�dia < 4 ? reprovado
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int cont=0,apr=0, repr=0, ifa=0;
	float notas[5];
	while(cont<5)
	 {
	 	printf("Digite a media %d: ",cont+1);
	 	scanf("%f",&notas[cont]); //vair ser 0, 1, 2, 3 e 4
	 	if(notas[cont]>=6)
	 		apr++;
	 	else
	 	 	if(notas[cont]<4)
	 			repr++;
	 		else
	 			ifa++;

	  cont++; //cont = cont + 1;
	 }
	 system("cls"); //limpa tela
	 cont = 0;
	 while(cont<5)
	 {
	 	printf("Nota %d - R$ %4.1f\n",cont+1,notas[cont]);
	 	cont++; //cont = cont + 1;
	 }
	 printf("\nAluno(s) aprovado(s)...: %d\n",apr);
	 printf("\nAluno(s) reprovado(s)..: %d\n",repr);
	 printf("\nAluno(s) em IFA........: %d\n",ifa);
}
