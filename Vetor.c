#include <stdio.h>
#include <conio.h>
int main()
{
int VETOR[10], INDICE;
for (INDICE=1; INDICE<=10; INDICE++)
    {
    printf("%2.d%c valor: ", INDICE, 167);
    scanf("%d",&VETOR[INDICE]);
    }
printf("\n\n");
getchar();
for (INDICE=1; INDICE<=10; INDICE++)
    {
    printf("VETOR[%2.d] = %5.d\n", INDICE, VETOR[INDICE]);
    }
    getch();
}
