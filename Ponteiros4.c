#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct horario {
        int hora;
        int minuto;
        int segundo;
    };
    struct horario agora, *depois;
    depois = &agora;

 // Pode informar o ponteiro escrevendo com seta ->:
    depois->hora = 20;
    depois->minuto = 30;
    depois->segundo = 50;

 /* ou Pode escrever deste jeito também:
    (*depois).hora = 20;
    (*depois).minuto = 30;
    (*depois). segundo = 50;
 */
    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
    return 0;
}
