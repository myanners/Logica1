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
    };

    // Declara um nome para a estrutura
    struct definicao_da_struct_tipo_horario agora; // "agora" é o nome dado à estrutura "horario"

    // Atribui valores aos campos da estrutura "agora"
    agora.horas = 8;
    agora.minutos = 39;
    agora.segundos = 45;

    // Imprime os valores dos campos da estrutura "agora"
    printf("\n  %2d:%2d:%2d hs\n", agora.horas, agora.minutos, agora.segundos);

    // Fim da função principal
    return 0;
}
