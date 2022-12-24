#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("\nFavor informar idade: ");
    scanf("%i", &idade);
    if (idade < 18)
    {
        printf("Voc%c s%c pode dirigir a partir dos 18 anos!", 136, 162);
    }
    else
    {
        printf("Voc%c j%c est%c liberado para iniciar se habilitar a dirigir!", 136, 160, 160);
    }

    return 0;
}
