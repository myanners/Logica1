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

    printf("(int pX   )Endereco de memoria X = %i esta com o (*pX) valor = %i\n", pX, *pX);
    printf("(double pY)Endereco de memoria Y = %i esta com o (*pY) valor = %f\n", pY, *pY);
    printf("(char pZ  )Endereco de memoria Z = %i esta com o (*pZ) valor = %c\n", pZ, *pZ);

    getchar();

    return 0;
}
