// ax + b = 0
// onde a <> 0
#include <stdio.h> //entrada/sa�da padr�o - usar fun��es scanf() e printf()
#include <stdlib.h>
int main() //fun��o main() - indica onde est� o programa principal
{ //chave de In�cio do main()
//printf() fun��o para escrever na tela
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
