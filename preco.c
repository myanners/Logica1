/*Faça um programa na linguagem C (use a estrutura while()), que receba os
preços de 5 produtos. No final mostre os preços digitados e a quantidade de
preços inferiores a R$ 60,00.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int cont=0,cont60=0;
	float preco[5];
	while(cont<5)
	 {
	 	printf("Digite o preco %d: ",cont+1);
	 	scanf("%f",&preco[cont]); //vair ser 0, 1, 2, 3 e 4
	 	if(preco[cont]<60)
	 		cont60++;
	 	cont++; //cont = cont + 1;
	 }
	 system("cls"); //limpa tela
	 cont = 0;
	 while(cont<5)
	 {
	 	printf("Preco %d - R$ %9.2f\n",cont+1,preco[cont]);
	 	cont++; //cont = cont + 1;
	 }
	 printf("\nQuantidade de precos menores que R$ 60,00: %d",cont60);
}
