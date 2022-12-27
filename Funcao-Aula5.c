#include <stdio.h>
#include <stdlib.h>

int gVariavelGlobal = 10;

int main()
{
    void teste(void);

    printf("\n\nVariavel Global na main() ======> %i\n\n\n", gVariavelGlobal);
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

    printf("  Local Automatica (Ao Chamar a Funcao a Variavel Recria na RAM)===================> %i \n", variavelLocalRecriacaoAutomatica);
    printf("    Local Estatica (  Ao Chamar a Funcao a Variavel So eh criada a 1a. vez na RAM)======> %i \n", variavelLocalEstaticaDeCriacaoUnica);
    printf("      Variavel Global na teste() ============================================================> %i\n\n", gVariavelGlobal);

}
