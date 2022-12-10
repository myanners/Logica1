//2) Um instituto de pesquisa fez uma enquete de mercado para saber o nível de satisfação dos
//entrevistados em relação a um novo smartphone lançado no mercado. Para isso, solicitou o sexo do
//entrevistado e sua resposta em relação a satisfação (sim ou não). Dessa forma desenvolva um programa
//que receba os dados de N entrevistados (usando a estrutura for()) e no final, responda:
//- Quantos entrevistados responderam sim;
//- Quantos entrevistados responderam não;
//- Qual o percentual de mulheres que responderam sim;
//- Qual o percentual de homens que responderam não;
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sim=0, nao=0, total_e=0, m_sim=0, m_percent_sim=0, h_nao=0, h_percent_nao=0;
    int fim=0, entrev_sexo=0, entrev_sat=0;

    for (;;)
    {
        printf("\nQual seu sexo?");
        printf("\nDigite 1 para mulher e 2 para homem:");
        scanf ("%i", &entrev_sexo);
        printf("\nVoce ficou satisfeito com o novo modelo de celular?");
        printf("\nDigite 1 para SIM e 2 para NAO:");
        scanf ("%i", &entrev_sat);
        if (entrev_sat == 1)
            {
            sim=sim+1;

                if(entrev_sexo == 1)
                {
                m_sim=m_sim+1;
                }
             }
            else
            if(entrev_sat == 2)
            {
            nao=nao+1;
                if(entrev_sexo == 2)
                {
                h_nao=h_nao+1;
                }
            }
        total_e=total_e+1;
        printf("Fim das entrevistas?, digite 1");
        scanf("%i", &fim);
            if (fim==1)
            {
                printf ("\nQuantidade de entrevistados responderam sim: %4f", sim);
                printf ("\nQuantidade de entrevistados responderam nao: %4f", nao);
                m_percent_sim=((m_sim/total_e)*100);
                printf ("\nO percentual de mulheres que responderam sim: %2.2f", m_percent_sim);
                h_percent_nao=((h_nao/total_e)*100);
                printf ("\nO percentual de homens que responderam nao: %2.2f", h_percent_nao);
                break;
            }
    }

    return 0;
}
