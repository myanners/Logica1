#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int numero = 1;

    for (contador = 1; contador <= 250; contador = contador +1)
    {
    printf ("teste %i \n", contador);
    }
    printf("Fora do FOR\n");
    return 0;
}
