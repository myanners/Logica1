/*
Observe que o valor de vetor[0] muda de 10 para 20 depois que a fun��o
funcaoImprime � chamada, mas o valor de variavel permanece o mesmo. Isso
ocorre porque a fun��o funcaoImprime modifica o valor de vetor[0], mas n�o
modifica o valor de variavel passado para ela. O valor de variavel na
fun��o funcaoImprime � uma c�pia separada de variavel na fun��o principal,
e modific�-lo n�o afeta o valor de variavel na fun��o principal.

No entanto, o valor de vetor na fun��o funcaoImprime � um ponteiro para
o mesmo array que vetor na fun��o principal. Modificar os elementos do
array atrav�s do ponteiro na fun��o funcaoImprime afetar� os valores dos
elementos na fun��o principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declara��o da fun��o "funcaoImprime"
    void funcaoImprime( int variavel, int vetor[]);

    // Declara��o da vari�vel "variavel" e do array "vetor"
    int variavel = 10;
    int vetor[1] = {10};

    // Impress�o da mensagem e dos valores de "variavel" e "vetor" antes de chamar a fun��o "funcaoImprime"
    printf("    \n\nAntes da funcao --> funcaoImprime ser chamada \n\n\n");
    printf("    Variavel.. = 10   na funcao main() retorna = %i \n", variavel);
    printf("    Vetor[0].. = {10} na funcao main() retorna = %i \n\n", vetor[0]);

    // Chamada da fun��o "funcaoImprime"
    funcaoImprime(variavel, vetor);

    // Impress�o da mensagem e dos valores de "variavel" e "vetor" depois de chamar a fun��o "funcaoImprime"
    printf("Depois da funcao --> funcaoImprime ser chamada \n\n\n");
    printf("    Variavel.. = 10   na funcao main() retorna = %i \n", variavel);
    printf("    Vetor[0].. = {10} na funcao main() retorna = %i \n\n", vetor[0]);

    // Fim da fun��o principal
    return 0;
}

// Defini��o da fun��o "funcaoImprime"
void funcaoImprime(int variavel, int vetor[]) {
    // Modifica��o dos valores de "variavel" e "vetor"
    variavel = variavel + 10;
    vetor[0] = 20;

    // Impress�o da mensagem e dos valores de "variavel" e "vetor" dentro da fun��o "funcaoImprime"
    printf("Funcao --> funcaoImprime esta sendo executada \n\n\n");
    printf("    Variavel.. = variavel + 10 na funcao funcaoImprime() retorna = %i \n", variavel);
    printf("    Vetor[0].. = 20            na funcao funcaoImprime() retorna = %i \n\n", vetor[0]);
}
