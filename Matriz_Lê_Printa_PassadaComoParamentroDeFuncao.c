#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3


int main(void)
{
    void funcao_Imprime_Em_Tela(int matriz_numeros_imprime[LIN][COL]);

    int matriz_numeros[LIN][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Chama funcao que usa matriz como paramentro
    funcao_Imprime_Em_Tela(matriz_numeros); //Não precisa informar as chaves e nem a tipagem INT

    return 0;
}
// funcao que recebe a matriz como paramento
void funcao_Imprime_Em_Tela(int matriz_numeros_imprime[][COL]){

    int indice_linha, indice_coluna;

    //Loop externo para percorrer as linhas da matriz
    for(indice_linha = 0; indice_linha < LIN; indice_linha++){
        // Loop interno para percorrer as colunas da matriz}
        for(indice_coluna=0; indice_coluna < COL; indice_coluna++){
                    //Imprime matriz lida
                    printf("%i ", matriz_numeros_imprime[indice_linha][indice_coluna]);
        }
        printf("\n");
    }

return 0;

}
