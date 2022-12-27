#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fatorial(int x);
    int numero, resultado;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial eh %i", resultado);


    return 0;
}

int fatorial(int x){

    int resultado;

    if(x ==0){
       resultado =1;
    }else {
    resultado = x * fatorial(x - 1);

    }

    return resultado;

    }

