#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float somaDeDigitos(float num1, float num2);
    float a, b, soma;

    printf("Digite dois numeros: \n");
    printf("   Primeiro numero: ");
    scanf("%f", &a);
    printf("   Segundo numero: ");
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);

    printf("A soma eh %.2f\n", soma);

    return 0;
}

float somaDeDigitos(float num1, float num2){

        float valorAbsoluto(float x);

        if (num1 < 0){
            num1 = valorAbsoluto(num1);
        }
        if(num2 <0) {
            num2 = valorAbsoluto(num2);
        }
        return num1 + num2;
}

float valorAbsoluto(float x) {

    return x * -1;

}
