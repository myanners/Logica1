#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario {
           int *pHora; //declara um ponteiro como a variavel inteira
           int *pMinuto; //declara um ponteiro como a variavel inteira
           int *pSegundo; //declara um ponteiro como a variavel inteira
    };

    struct horario hoje; // declara a variavel hoje atribuindo o tipo horario

    // Declaração de variavel para onde os ponteiros apontarão

    int hora = 22;
    int minuto = 30;
    int segundo = 59;

    //Apontado o ponteiro para o endereço de memoria da variavel

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    //Mostra o conteudo de membro ponteiro de uma estrutura

    printf("\nHH:MM:SS - %i:%i:%i \n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    //Alteração de valor de ponteiro

    *hoje.pMinuto = 45;

    //Mostra o conteudo de membro ponteiro de uma estrutura

    printf("\nHH:MM:SS - %i:%i:%i \n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    //Mostra o valor das variaveis inteiras

    printf("\nHH:MM:SS - %i:%i:%i \n", hora, minuto, segundo);

    return 0;
}
