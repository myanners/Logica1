#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as variáveis x e y como inteiros
    int x = 16;
    int y = 3;

    // Calcula o resultado da divisão inteira x / y e armazena em resultado1
    float resultado1 = x / y;

    // Calcula o resultado da divisão ponto flutuante (float) x / y e armazena em resultado2
    float resultado2 = (float) x / y;

    // Imprime duas linhas em branco
    printf("\n\n\n");

    // Imprime o valor de resultado1
    printf("    %f\n\n", resultado1);

    // Imprime o valor de resultado2
    printf("    %f\n\n", resultado2);

    // Retorna 0 para indicar sucesso
    return 0;
}

    /* Exlicação:

    Neste código, x e y são ambos inteiros, e o resultado
    da divisão x / y também é um inteiro. Em C, quando ambos
    os operandos do operador de divisão (/) são inteiros, o
    resultado é um inteiro, o que significa que a parte
    fracionária do resultado é truncada.

    Por exemplo, quando x é 16 e y é 3, o resultado de x / y é 5,
    porque 16 dividido por 3 é 5 com um resto de 1. No entanto,
    o resultado da divisão é armazenado como um inteiro, então
    o resto é descartado e o resultado é simplesmente 5.

    Para obter o resultado correto da divisão, com a parte
    fracionária incluída, você pode fazer o cast de um dos
    operandos para um tipo ponto flutuante, usando o operador
    de cast de tipo (float). Neste caso, o resultado da
    divisão (float) x / y será um número ponto flutuante, que
    inclui a parte fracionária do resultado.

    Quando o código é executado, a função printf imprimirá os
    resultados das divisões resultado1 e resultado2. A saída
    será algo assim:


    5.000000

    5.333333

    A primeira divisão, resultado1, é uma divisão inteira,
    e o resultado é 5. A segunda divisão, resultado2, é uma
    divisão ponto flutuante, e o resultado é 5,333333.

    */

