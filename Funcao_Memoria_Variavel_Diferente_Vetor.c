/*
Observe que o valor de vetor[0] muda de 10 para 20 depois que a função
funcaoImprime é chamada, mas o valor de variavel permanece o mesmo. Isso
ocorre porque a função funcaoImprime modifica o valor de vetor[0], mas não
modifica o valor de variavel passado para ela. O valor de variavel na
função funcaoImprime é uma cópia separada de variavel na função principal,
e modificá-lo não afeta o valor de variavel na função principal.

No entanto, o valor de vetor na função funcaoImprime é um ponteiro para
o mesmo array que vetor na função principal. Modificar os elementos do
array através do ponteiro na função funcaoImprime afetará os valores dos
elementos na função principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração da função "funcaoImprime"
    void funcaoImprime( int variavel, int vetor[]);

    // Declaração da variável "variavel" e do array "vetor"
    int variavel = 10;
    int vetor[1] = {10};

    // Impressão da mensagem e dos valores de "variavel" e "vetor" antes de chamar a função "funcaoImprime"
    printf("    \n\nAntes da funcao --> funcaoImprime ser chamada \n\n\n");
    printf("    Variavel.. = 10   na funcao main() retorna = %i \n", variavel);
    printf("    Vetor[0].. = {10} na funcao main() retorna = %i \n\n", vetor[0]);

    // Chamada da função "funcaoImprime"
    funcaoImprime(variavel, vetor);

    // Impressão da mensagem e dos valores de "variavel" e "vetor" depois de chamar a função "funcaoImprime"
    printf("Depois da funcao --> funcaoImprime ser chamada \n\n\n");
    printf("    Variavel.. = 10   na funcao main() retorna = %i \n", variavel);
    printf("    Vetor[0].. = {10} na funcao main() retorna = %i \n\n", vetor[0]);

    // Fim da função principal
    return 0;
}

// Definição da função "funcaoImprime"
void funcaoImprime(int variavel, int vetor[]) {
    // Modificação dos valores de "variavel" e "vetor"
    variavel = variavel + 10;
    vetor[0] = 20;

    // Impressão da mensagem e dos valores de "variavel" e "vetor" dentro da função "funcaoImprime"
    printf("Funcao --> funcaoImprime esta sendo executada \n\n\n");
    printf("    Variavel.. = variavel + 10 na funcao funcaoImprime() retorna = %i \n", variavel);
    printf("    Vetor[0].. = 20            na funcao funcaoImprime() retorna = %i \n\n", vetor[0]);
}
