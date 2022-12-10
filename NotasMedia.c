//Le e exibe 5 notas e a media entre elas
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
