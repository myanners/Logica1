// ax + b = 0
// onde a <> 0
#include <stdio.h> //entrada/saída padrão - usar funções scanf() e printf()
#include <stdlib.h>
int main() //função main() - indica onde está o programa principal
{ //chave de Início do main()
//printf() função para escrever na tela
float a,b,x;
printf("\nInforme dois numeros: ");
scanf("%f %f", &a, &b);
if(a!=0)
 { x=-b/a;
   printf("x = %.2f\n",x);
 }
else
  printf("\no valor de \'a' deve ser diferente de zero");

return 0;
}
