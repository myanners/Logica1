#include <stdio.h>
#include <stdlib.h>

// Aprendendo ponteiros

int main(void)
{
    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;

    printf("%i %i\n", x, y);
    getchar();
    return 0;
}

/*

Exemplo 1
int main(void)
{
    int x;
    x = 10;
    int *ponteiro;
    ponteiro = &x; (endereços de memoria apontando para endereço de memoria)


    printf("%i\n", *ponteiro);
    getchar();
    return 0;
}

Exemplo 2

int main(void)
{
    int x = 10;
    int y = x;
    x = 20;

    printf("%i %i\n", x, y);
    getchar();
    return 0;
}
*/
