#include <stdio.h>
#include <stdlib.h>

void imprimaMensagem(void){

    printf("teste");

}
int main()
{

//->  void impriaMensagem(void);
//
//    quando a função é escrita antes da funcao main()
//    não há necessidade de declarar sua existencia para que ela seja
//    colocada na memoria, pois o programa já leu a função

    imprimaMensagem();

    return 0;
}


