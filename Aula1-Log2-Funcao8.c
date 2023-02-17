#include <stdio.h>
#include <stdlib.h>

    float soma;

int main(void)
{
    float somador(float num1, float num2);
    float n1, n2;

    printf("Digite os numeros: \n");
    printf("   Numero 1: ");
    scanf("%f", &n1);
    printf("   Numero 2: ");
    scanf("%f", &n2);

    somador(n1 , n2);

    printf("A soma eh %.2f\n", soma);

    return 0;
}

float somador(float num1, float num2){

    return soma = num1 + num2;

}
