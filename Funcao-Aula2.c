#include <stdio.h>
#include <stdlib.h>

void imprimaMensagem(void){

    printf("teste");

}
int main()
{

//->  void impriaMensagem(void);
//
//    quando a fun��o � escrita antes da funcao main()
//    n�o h� necessidade de declarar sua existencia para que ela seja
//    colocada na memoria, pois o programa j� leu a fun��o

    imprimaMensagem();

    return 0;
}


