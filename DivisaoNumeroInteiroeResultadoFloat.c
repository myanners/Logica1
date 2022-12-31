#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara as vari�veis x e y como inteiros
    int x = 16;
    int y = 3;

    // Calcula o resultado da divis�o inteira x / y e armazena em resultado1
    float resultado1 = x / y;

    // Calcula o resultado da divis�o ponto flutuante (float) x / y e armazena em resultado2
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

    /* Exlica��o:

    Neste c�digo, x e y s�o ambos inteiros, e o resultado
    da divis�o x / y tamb�m � um inteiro. Em C, quando ambos
    os operandos do operador de divis�o (/) s�o inteiros, o
    resultado � um inteiro, o que significa que a parte
    fracion�ria do resultado � truncada.

    Por exemplo, quando x � 16 e y � 3, o resultado de x / y � 5,
    porque 16 dividido por 3 � 5 com um resto de 1. No entanto,
    o resultado da divis�o � armazenado como um inteiro, ent�o
    o resto � descartado e o resultado � simplesmente 5.

    Para obter o resultado correto da divis�o, com a parte
    fracion�ria inclu�da, voc� pode fazer o cast de um dos
    operandos para um tipo ponto flutuante, usando o operador
    de cast de tipo (float). Neste caso, o resultado da
    divis�o (float) x / y ser� um n�mero ponto flutuante, que
    inclui a parte fracion�ria do resultado.

    Quando o c�digo � executado, a fun��o printf imprimir� os
    resultados das divis�es resultado1 e resultado2. A sa�da
    ser� algo assim:


    5.000000

    5.333333

    A primeira divis�o, resultado1, � uma divis�o inteira,
    e o resultado � 5. A segunda divis�o, resultado2, � uma
    divis�o ponto flutuante, e o resultado � 5,333333.

    */

