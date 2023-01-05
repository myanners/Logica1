#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca que tem funções sobre strings


int main(void)
{
    //1o. Exemplo:

    // varias forma certa e erradas de declarar string
    char palavra1[3] = {'I','S','A'};

    char palavra2[] = {'I','S','A'};

    char palavra3[6] = {"Belle"}; // precisa sempre declarar uma posição
                                  //a mais para o caracter de fim de string

    char palavra4[6] = {"Belle\0"}; // \0 significa caracter nulo e apesar
                                    //de aprecer como dois caracteres, na
                                    //string ocupa apenas 1 posição
    char palavra5[] = {"Belle"};

    char palavra6[] = {"Belle\0"};

    char palavra7[6] = "Belle";

    char palavra8[6] = "Belle\0";

    // mostra na tela o resultado das strings
    printf("1 %s\n", palavra1);
    printf("2 %s\n", palavra2);
    printf("3 %s\n", palavra3);
    printf("4 %s\n", palavra4);
    printf("5 %s\n", palavra5);
    printf("6 %s\n", palavra6);
    printf("7 %s\n", palavra7);
    printf("8 %s\n", palavra8);

    //2o. exemplo
    _Bool comparastrings(char s1[], char s2[]);
    if(comparastrings("cAsa", "casa")) //Diferencia maiusculas e minusculas
    {
       printf("\n\nsao iguais\n");
    } else  {
       printf("\n\nnao sao iguais\n");
            }

    //3o. Exemplo:

    char linha [100];
    char caractere;
    int i = 0;

    do{
       caractere = getchar();
       linha[i] = caractere;
       ++i;
    } while (caractere != '\n');

    linha[i - 1] = '\0';

    printf("%s\n", linha);

    //4o. Exemplo:

    void alfabetico(char variavel);

    char nome[20];
    printf("Digite uma palavra: ");
    scanf("%s", nome);

    int ialfa = 0;

    while(nome[ialfa] != '\0')
    {
        alfabetico(nome[ialfa]);
        ++ialfa;
    }

    return 0;
}



    //2o. Exemplo:

_Bool comparastrings(char s1[], char s2[]){
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
    ++i;
    }
        if (s1[i] == '\0' && s2[i] == '\0')
            {
            return 1;
            }
            else
                {
                return 0;
                }
}


    //4o. Exemplo:

    void alfabetico(char variavel)
    {
        if((variavel >= 'a' && variavel <= 'z')||
           (variavel >= 'A' && variavel <= 'Z'))
        {
        printf("%c e uma letra\n", variavel);
        }
            else
            {
            printf("%c nao e uma letra\n", variavel);
            }

    }
