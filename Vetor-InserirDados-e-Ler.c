#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float notas[5] = {0};
    float total = 0;
    float media = 0;

    printf("insira 5 notas: \n");

    for (int i = 0; i < 5; ++i)
        scanf("%f", &notas[i]);

    for (int i = 0; i <5; ++i)
        total += notas[i];

    media = total / 5;

    printf("A media do aluno e %2.1f", media);
    printf("\n");
    return 0;
}
