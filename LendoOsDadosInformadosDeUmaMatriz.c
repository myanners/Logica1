#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5] =  {{  1,  2,  3,  4,  5},
                         {  6,  7,  8,  9, 10},
                         { 11, 12, 13, 14, 15},
                         { 16, 17, 18, 19, 20},
                         { 21, 22, 23, 24, 25}};

// Exibe na tela os dados da Matriz especificados / inicializados acima
    for (int L = 0; L < 5; ++L){
         for (int C = 0; C < 5; ++C){
            printf("%i ", matriz[L][C]);
         }
         printf("\n");
    }


// Recebe os novos dados digitados na Matriz recebidos através do Scanf
    for (int L = 0; L < 5; ++L){
         for (int C = 0; C < 5; ++C){
            scanf("%i ", &matriz[L][C]);
         }
    }


// Exibe na tela os dados da Matriz que foram informados no Scanf
    for (int L = 0; L < 5; ++L){
         for (int C = 0; C < 5; ++C){
            printf("%i ", matriz[L][C]);
         }
    }

    return 0;
}
