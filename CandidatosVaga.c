//3) O mercado de trabalho para os jovens que est�o em busca de uma vaga de trabalho conta com
//v�rias oportunidades e alguns desafios. Um dos maiores obst�culos � a falta de experi�ncia. Mesmo
//quem acabou de se formar, no geral, tem muito conhecimento e pouca pr�tica. Essa adversidade �
//agravada em momentos de crise, em que muitas empresas preferem contratar profissionais experientes
//que j� come�am produzindo. Infelizmente, per�odos de recess�o econ�mica, como a causada pelo
//coronav�rus, tamb�m prejudicam a entrada dos jovens no mercado. Em abril de 2020, a contrata��o
//de estagi�rios e jovens aprendizes caiu e assinalou queda hist�rica de 84,9% em rela��o ao mesmo
//per�odo de 2019. Mas o jovem n�o encontra apenas dificuldades no mercado de trabalho. Muitas
//empresas ainda abrem programas de est�gios e trainees, em busca de jovens em forma��o ou rec�mformados. 
//O importante � que eles conhe�am as teorias das suas �reas e estejam dispostos a coloc�-las
//em pr�tica no mundo corporativo. Mesmo em organiza��es onde que n�o existe esse tipo de programa,
//mas t�m a cultura de formar pessoas, � poss�vel encontrar boas oportunidades. (fonte de pesquisa:
//https://blog.orientu.com.br/orientacao-profissional/mercado-de-trabalho/). Apesar das dificuldades, uma empresa decidiu fazer
//um levantamento em rela��o aos candidatos que se apresentarem para preenchimento de vagas no seu
//quadro de funcion�rios, utilizando processamento eletr�nico. Para tanto, desenvolva um programa que
//possa receber os dados de N candidatos (use a estrutura for()), como n�mero de inscri��o, idade, sexo e
//experiencia (sim ou n�o). No final devem ser mostrados os seguintes dados:
//- Mulheres com experiencia e idade menor de 35 anos;
//- Total de homens inscritos;
//- Total de mulheres inscritas;
//- M�dia de homens com experiencia;
//- Homens com mais de 45 anos; e
//- Menor idade de mulher com experiencia.

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, n;
 float  n_insc=0, idade=0, sexo=0, total_h=0, total_m=0, h_media_exp=0, h_media_exp2=0, h_45=0, m_menor_idade=0, m_35=0, exper=0;
 printf ("Digite o numero de vagas que deseja verficar:");
 scanf ("%d",&n);
 for (i=1; i <= n; i++)
 {
     printf("\nDigite o numero de inscricao..: ");
     scanf("%f", &n_insc);
     printf("\nDigite sua idade..: ");
     scanf("%f", &idade);
     printf("\nQual seu sexo? '1' para homem e '2' para mulher..: ");
     scanf("%f", &sexo);
     printf("\nPossue experiencia anterior? SIM digite '1' ou NAO digite '2'..: ");
     scanf("%f", &exper);
     if (sexo == 1)
     {
        total_h=total_h+1;
            if (exper == 1)
            {
                h_media_exp=h_media_exp+idade;
                h_media_exp2=h_media_exp/total_h;
            }
            if (idade > 45)
            {
                h_45=h_45+1;
            }
     }
     else
     if (sexo == 2)
     {
        total_m=total_m+1;

            if (m_menor_idade==0)
            {
                m_menor_idade=idade;
            }
            else
                if(m_menor_idade>idade)
                    {
                    m_menor_idade=idade;
                    }
     if (exper == 1 && idade < 35)
            m_35=m_35+1;
     }

 }
 printf ("\nMulheres com experiencia e idade menor de 35 anos: %3f", m_35);
 printf ("\nTotal de homens inscritos: %3f", total_h);
 printf ("\nTotal de mulheres inscritas: %3f", total_m);
 printf ("\nMedia de idade de homens com experiencia: %3f", h_media_exp2);
 printf ("\nHomens com mais de 45 anos: %3f", h_45);
 printf ("\nMenor idade de mulher com experiencia: %3f", m_menor_idade);

 return 0;
}
