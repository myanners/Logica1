#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Define o esqueleto da estrutura "horario"
    struct definicao_da_struct_tipo_horario // Cria um tipo de estrutura
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    // Declara um nome para a estrutura
    struct definicao_da_struct_tipo_horario agora; // "agora" é o nome dado à estrutura "horario"

    // Atribui valores aos campos da estrutura "agora"
    agora.horas = 8;
    agora.minutos = 39;
    agora.segundos = 45;

    // Imprime os valores dos campos da estrutura "depois"
    printf("\n    %2d:%2d:%2d hs\n\n\n", agora.horas, agora.minutos, agora.segundos);

    // Declara um nome para a estrutura
    struct definicao_da_struct_tipo_horario depois; // "agora" é o nome dado à estrutura "horario"

    // Atribui valores aos campos da estrutura "depois"
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    // Imprime os valores dos campos da estrutura "depois"
    printf("    %i\n", depois.horas);
    printf("    %i\n", depois.minutos);
    printf("    %f\n", depois.teste);
    printf("    %c\n", depois.letra);

    // Fim da função principal
    return 0;
}
