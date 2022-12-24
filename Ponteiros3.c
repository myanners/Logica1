#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;
    // para fazer operação matematica é preciso por o * (*pX + *pY)
    // para enxergar o valor da variável, pois sem
    // "*" (pX + pY)estariamos usando endereços de memoria,
    // o que na linguagem C não é possível

    printf("(soma = *pX + *pY) Valor = %f\n\n", soma);

    int *resultado;
    resultado = &x;
    printf("Valor do endereco de memoria RAM de x = %i\n\n", resultado);

    resultado = 6422192;
    printf("Valor do endereco de memoria RAM de x = %i\n", resultado);
    printf("Valor que esta no endereco de memoria RAM 6422192 = %i\n", *resultado);

    getchar();

    return 0;
}
