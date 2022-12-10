//Meire Ellen Renna SP3110672
//desenvolvido no Dev-C 5.11 Build time 25/04/2015 11:11

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    void evolucaoalunos(void);
    void mensalidadeatraso(void);
    void pesquisa(void);
    char opcao;

    {
    printf("\nAcademia IFSP");
    printf("\n");
    printf("\nMenu Principal");
    printf("\n--------------");
    printf("\n");
    printf("\n1 - Evolucao Mensal Alunos");
    printf("\n2 - Pagamento em atraso");
    printf("\n3 - Pesquisa");
    printf("\n4 - Fim de Programa");
    printf("\n");
    printf("\nEscolha uma opcao: ");
    scanf("%c",&opcao);
    switch(opcao)
        {
        case'1': evolucaoalunos();      break;
        case'2': mensalidadeatraso();   break;
        case'3': pesquisa();            break;
        case'4':                        break;
        default: printf("Opção inválida!");
    }
    return 0;
    }
}
// Funções

void evolucaoalunos(void)
{
int i, isem, x, y, z;
char nome[4][40], aux[40];
float peso[4][4], pesototal[4], aux2[4][4];

//recebe os dados

for(i=0; i<4; i++)
    {
    printf("\n");
    printf("Digite o nome do aluno %i: ", i+1);
    fflush(stdin);
    gets(nome[i]);
    for(isem=0; isem<4; isem++)
        {
        printf("Digite o peso da %i semana: ", isem+1);
        scanf("%f", &peso[i][isem]);
        }
    }

//mostra os dados
    fflush(stdin);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n--------------------------------");
    printf("\n");
    printf("Relatorio da Evolucao dos Alunos");
    printf("\n--------------------------------");

    printf("\n");
    printf("\n");
    printf(" 1 - Relatorio de Peso Semanal dos Alunos");
    printf("\n");


for(i=0; i<4; i++)
    {
    printf("\n");
    printf("\n");
    printf("\n");
    printf("     Aluno %i: ", i+1);
    printf("%s", nome[i]);
    for(isem=0; isem<4; isem++)
        {
        printf("\n");
        printf("     Peso da %i semana: ", isem+1);
        printf("%.2f", peso[i][isem]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


fflush(stdin);
    printf("\n");
    printf("\n");
    printf("\n");
    printf(" 2 - Relatorio de Peso Medio Mensal dos Alunos");
    printf("\n");
    printf("\n");
    printf("\n");

for(i=0; i<4; i++)
{
    for(isem=0; isem<4; isem++)
    {
    fflush(stdin);
    pesototal[i] = pesototal[i] + peso[i][isem];
    }
printf("\n");
printf("     Aluno %i: %.2f \n", i+1, pesototal[i]/4);
}
    printf("\n");
    printf("\n");
    printf("\n");
    printf(" 3 - Relatorio de Nome dos Alunos em Ordem Alfabetica");
    printf("\n");
    printf("\n");
    printf("\n");

//ordena dados
for (x=0; x<4; x++)
{
    for(y=x+1; y <4; y++)
    {
    z = strcmp (nome[x], nome[y]);
        if (z>0)
        {
        strcpy(aux, nome[x]);
        aux2[x][0] = peso[x][0];
        aux2[x][1] = peso[x][1];
        aux2[x][2] = peso[x][2];
        aux2[x][3] = peso[x][3];
        strcpy(nome[x],nome[y]);
        peso[x][0] = peso[y][0];
        peso[x][1] = peso[y][1];
        peso[x][2] = peso[y][2];
        peso[x][3] = peso[y][3];
        strcpy(nome[y], aux);
        peso[y][0] = aux2[x][0];
        peso[y][1] = aux2[x][1];
        peso[y][2] = aux2[x][2];
        peso[y][3] = aux2[x][3];
        }
    }
}
for(i=0; i<4; i++)
    {
    printf("\n");
    printf("     Aluno %i: ", i+1);
    printf("%s", nome[i]);
    printf("\n");
    for(isem=0; isem<4; isem++)
        {
        printf("\n");
        printf("     Peso da %i semana: ", isem+1);
        printf("%.2f", peso[i][isem]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");


return;

}

void mensalidadeatraso(void)
{
float valorprestacao=0, taxa=0, prestacaoatualizada;
int tempo=0;
    printf("\n");
    printf("Digite o valor da prestacao em atraso: ");
    scanf("%f", &valorprestacao);
    printf("\n");
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    printf("\n");
    printf("Digite o tempo em atraso: ");
    scanf("%d", &tempo);
    prestacaoatualizada=valorprestacao+(valorprestacao*(taxa/100)*tempo);
    printf("\n");
    printf("O valor da prestacao atualizada com juros e de R$ %2.f", prestacaoatualizada);
    printf("\n");
    printf("\n");
return;
}
void pesquisa(void)
{
char escrevesexf[] = "Feminino" , escrevesexm[]="Masculino";

 struct PES_HABITANTE
    {
    int IDADE;
    int SEXO;
    float VSALARIO;
    int NFILHOS;
    };
    struct PES_HABITANTE HABITANTE[500];
    int a, totalfem=0, totalmas=0, totalentrevistados=0;
    float mediasalario=0, maiorsalario=0;
    for(a=0; a<500; a++)
    {
    totalentrevistados++;
    printf("Digite a idade: ");
    scanf("%d", &HABITANTE[a].IDADE);
    printf("Digite 1 para Feminimo ou 2 para Masculino: ");
    scanf("%d", &HABITANTE[a].SEXO);
    if (HABITANTE[a].SEXO==1)
        totalfem++;
    else
        if (HABITANTE[a].SEXO==2)
        totalmas++;
 //   printf("\nTotal FEM e MAS %d e %d \n", totalfem, totalmas);
    printf("Digite o salario: ");
    scanf("%f", &HABITANTE[a].VSALARIO);
    mediasalario = (mediasalario + HABITANTE[a].VSALARIO);
    printf("Digite o numero de filhos: ");
    scanf("%d", &HABITANTE[a].NFILHOS);

    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n--------------------------------");
    printf("\n");
    printf("Relatorio sobre a Pesquisa");
    printf("\n--------------------------------");

    printf("\n");
    printf("\n");
    printf(" 1 - Relatorio de Dados Coletados");
    printf("\n");
    printf("\n");

        for(a=0; a<500; a++)
        {
            printf("\n");
            printf("\n    -> Habitante %i: ", a+1);
            printf("\n");
            printf("\n       Idade.............: %d",HABITANTE[a].IDADE);
            printf("\n       Sexo..............: ");
                if (HABITANTE[a].SEXO==1)
                printf("%c", escrevesexf[8]);
                if (HABITANTE[a].SEXO==2)
                printf("%c", escrevesexm[9]);
            printf("\n       Salario...........: R$ %.2f",HABITANTE[a].VSALARIO);
            if (HABITANTE[a].VSALARIO > maiorsalario)
                {
                maiorsalario = HABITANTE[a].VSALARIO;
                }
            printf("\n       Numero de Filhos..: %d",HABITANTE[a].NFILHOS);
        }

    printf("\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf(" 2 - Relatorio de Maior Salario Informado");
    printf("\n");
    printf("\n");
    printf("\n     -> O Maior Salario informado R$ %.2f: ", maiorsalario);
    printf("\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf(" 3 - Relatorio de Media de Salario dos Habitantes");
    printf("\n");
    printf("\n");
    printf("\n     -> A Media de Salario dos entrevistado: R$ %.2f ", mediasalario/totalentrevistados);
    printf("\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf(" 4 - Relatorio sobre o Sexo dos entrevistados");
    printf("\n");
    printf("\n");
    printf("\n     -> Total de Mulheres: %d \n", totalfem);
    printf("\n     -> Total de Homens  : %d \n", totalmas);
    printf("\n");
    printf("\n");
    getch();
    return;
}
