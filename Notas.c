//receber as notas de N alunos
//mostrar a maior, a menor e
//a m�dia
#include <stdio.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL,"Portuguese");
 int I,N;
 float NT,ME,MA,MED;
 char RESP = 's';
 while(RESP == 'S' || RESP=='s')
 {  system("cls");
     ME=MA=MED=0;
     I=1;
     printf("Digite o n�mero de alunos: ");
     scanf("%i",&N);
     do
     {
        printf("Digite a %i� nota: ",I);
        scanf("%f",&NT);
        if (I==1)
        {
            ME = NT;
            MA = NT;
        }
        else
        {
           if(NT<ME)
             ME = NT;
           if (NT>MA)
             MA = NT;
        }

        MED = MED + NT; //MED+=NT;
        I=I+1; //I++; ++I  I+=1
     }while(I<=N);
  MED = MED/N;
  printf("Menor nota: %.1f\n",ME);
  printf("Maior nota: %.1f\n",MA);
  printf("M�dia.....: %.1f\n",MED);
  printf("digite S para repetir: ");
 //ffklush(stdin); //limpa o buffer do teclado
  getchar(); //vai atribuir espa�o em branco a memoria do teclado
  scanf("%c",&RESP);
 }
}
