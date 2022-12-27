#include <stdio.h>
#include <stdlib.h>

int main()
{
    void teste(void);

    teste();
    teste();
    teste();

    return 0;
}

void teste(void) {

    int variavelLocalRecriacaoAutomatica = 2;
    variavelLocalRecriacaoAutomatica *=2;

    static int variavelLocalEstaticaDeCriacaoUnica = 2;
    variavelLocalEstaticaDeCriacaoUnica *=2;

    printf("  Local Automatica (Ao Chamar a Funcao a Variavel Recria na RAM)=================== %i \n", variavelLocalRecriacaoAutomatica);
    printf("Local Estatica (  Ao Chamar a Funcao a Variavel So eh criada a 1a. vez na RAM)=== %i \n\n", variavelLocalEstaticaDeCriacaoUnica);


}
