#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matrizA[3][3] = { {0,1,2},
                          {3,4,5},
                          {6,7,8} };

    int matrizB[3][4] = {2, 1, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1};


    printf("\nMatriz A\n\n");
    //Matriz A
    //mostra linha 1 colunas 1,2,3
    printf(" | %i | " , matrizA[0][0]);
    printf("%i | "    , matrizA[0][1]);
    printf("%i |\n"   , matrizA[0][2]);

    //mostra linha 2 colunas 1,2,3
    printf(" | %i | " , matrizA[1][0]);
    printf("%i | "    , matrizA[1][1]);
    printf("%i |\n"   , matrizA[1][2]);

    //mostra linha 3 colunas 1,2,3
    printf(" | %i | " , matrizA[2][0]);
    printf("%i | "    , matrizA[2][1]);
    printf("%i |\n"   , matrizA[2][2]);

    printf("\nMatriz B\n\n");
    //Matriz B
    //mostra linha 1 colunas 1,2,3,4
    printf(" | %i | " , matrizB[0][0]);
    printf("%i | "    , matrizB[0][1]);
    printf("%i | "    , matrizB[0][2]);
    printf("%i |\n"   , matrizB[0][3]);

    //mostra linha 2 colunas 1,2,3,4
    printf(" | %i | " , matrizB[1][0]);
    printf("%i | "    , matrizB[1][1]);
    printf("%i | "    , matrizB[1][2]);
    printf("%i |\n"   , matrizB[1][3]);

    //mostra linha 3 colunas 1,2,3,4
    printf(" | %i | " , matrizB[2][0]);
    printf("%i | "    , matrizB[2][1]);
    printf("%i | "    , matrizB[2][2]);
    printf("%i |\n"   , matrizB[2][3]);

    return 0;
}
