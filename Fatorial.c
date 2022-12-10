//Calcular fatorial usando laço for()
#include <stdio.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"Portuguese");
 int RESP, N, FAT, VAL;
 RESP=1;
 while(RESP == 1)
 {  system("cls");
     FAT = 1;
     printf("Número para cálculo: ");
     scanf("%i",&N);
     for(VAL = 1;VAL<=N;VAL++)
     { //NÃO PRECISA DE CHAVES
       FAT = FAT * VAL; //FAT*=VAL;
     }
  printf("Fatorial de %i = %i\n",N,FAT);
  printf("digite 1 para repetir: ");
  scanf("%i",&RESP);
 }
}

