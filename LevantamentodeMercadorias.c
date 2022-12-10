//Um comerciante deseja fazer o levantamento dos números que envolvem as mercadorias que ele
//comercializa. Para isso, quer um programa que receba N entradas (usando while()) , com o nome, preço
//de compra e preço de venda de mercadorias. Assim, desenvolva um código em Linguagem C para o
//levantamento dos seguintes dados:
//- Valor Total de mercadorias compradas;
//- Total de vendas efetuadas com lucro de 10 a 20%;
//- Total de vendas efetuadas com lucro superior a 20%;
//- Total geral de vendas efetuadas; e
//- Lucro sobre todas as vendas.

#include <stdio.h>
#include <stdlib.h>
int main()
{

int ind=0, sn=0;
char nomeprod[30][ind];
float prodcom[ind],prodven[ind],totalmer=0, totalven=0, perc_luc=0,
      total_ven1020=0, total_vensup20=0, lucrototal=0, temp1=0, temp2=0;

while (sn==0)
    {
    sn=sn+1;
    printf ("\nDigite o nome do produto............................:");
    scanf ("%s", &nomeprod[ind]);
    printf ("%s", nomeprod[ind]);
    printf ("\nDigite o preco de compra............................:");
    scanf ("%f", &prodcom[ind]);
    temp1=prodcom[ind];
    totalmer=totalmer+prodcom[ind];
    printf ("%.2f", prodcom[ind]);
    printf ("\nDigite o preco de venda.............................:");
    scanf ("%f", &prodven[ind]);
    temp2=prodven[ind];
    totalven=totalven+prodcom[ind];
    perc_luc=100-(temp1/temp2*100);
    lucrototal=lucrototal+(temp2-temp1);
    if (perc_luc>=10 && perc_luc<=20)
        {
        total_ven1020=total_ven1020+prodven[ind];
        }
        else
        if (perc_luc>20)
            {
            total_vensup20=total_vensup20+prodven[ind];
            }
    printf ("%.2f", prodven[ind]);
    printf ("\nSe deseja cadastrar outro produto, digite 0? .......:");
    scanf ("%d", &sn);
    printf ("\n%i", ind);
    ind=ind+1;
    printf ("\n%i", ind);
    }
    printf ("\nO total de mercadorias compradas e......................: %.2f", totalmer);
    printf ("\nO total de mercadorias vendidas com lucro entre 10 e 20%..: %.2f", total_ven1020);
    printf ("\nO total de mercadorias vendidas com lucro acima de 20%....: %.2f", total_vensup20);
    printf ("\nO total de mercadorias vendidas e.......................: %.2f", totalven);
    printf ("\nO total de lucro das mercadorias vendidas e.............: %.2f", lucrototal);
    printf ("\nobrigada!");
}
