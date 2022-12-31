#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3


int main(void)
{
    int indice_linha, indice_coluna;
    int matriz_numeros[LIN][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Loop externo para percorrer as linhas da matriz
    for(indice_linha = 0; indice_linha < LIN; indice_linha++){
        // Loop interno para percorrer as colunas da matriz}
        for(indice_coluna=0; indice_coluna < COL; indice_coluna++){
                    //Imprime matriz lida
                    printf("%i ", matriz_numeros[indice_linha][indice_coluna]);
        }
        printf("\n");
    }

    return 0;
}
