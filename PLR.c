#include <stdio.h>
int main()
{
	float resultado, salario, plr=0;
	int i=1;
	while(i<=3)
	{
		printf("Resultado da empresa: ");
		scanf("%f",&resultado);
		printf("Salario base........: ");
		scanf("%f",&salario);
		if (resultado > 0 && resultado <=5)
		   plr = salario * 0.1;
		else
			if (resultado > 5 && resultado <=10)
		   		plr = salario * 0.3;
		   	else
		   		if (resultado > 10 && resultado <=20)
		   			plr = salario * 0.5;
		   		else
		   		    plr = salario;
		system("CLS"); //limpa a tela
		printf("Resultado da empresa..... %.2f%%\n",resultado);
		printf("Valot de PLR............. R$ %.2f\n",plr);
		i++;

	}
}
