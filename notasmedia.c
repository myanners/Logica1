//le 5 valores inteiros e os exibe na ordem inversa
//#include <stdio.h>
//#include <conio.h>
//int main()
//{ int VETOR[5], INDICE;
// for (INDICE=1; INDICE<=5; INDICE++)
// {
//   printf("%2.d%c valor: ", INDICE,167);
//   scanf("%d",&VETOR[INDICE]);
// }
// printf("\n\n");
// for (INDICE=5; INDICE >=1; INDICE--)
// 	printf("VETOR[%2.d] = %5.d\n", INDICE, VETOR[INDICE]);
 //getch();
//}


//le e exibe 5 notas e a media entre elas
#include <stdio.h>
#include <conio.h>
int main()
{ float notas[5], media=0; int i;
 for (i=1;i<=5;i++)
 {
   printf("%2.d%c nota: ", i,166);
   scanf("%f",&notas[i]);
   media = media + notas[i];
 }
 printf("\n\n");
 for (i=1;i<=5;i++)
    printf("Notas[%2.d] = %4.1f\n", i, notas[i]);

 printf("Media = %3.1f",media/5);
}
