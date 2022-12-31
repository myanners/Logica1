#include <stdio.h>

#define TAMANHO_ARRAY 100

int main(void) {
  int indice_atual, indice_comparacao;
  int array_numeros[TAMANHO_ARRAY] = {57, 82, 14, 97, 4, 83, 35, 75, 94, 65, 23, 45, 52, 7, 93, 81, 59, 26, 60, 37, 38, 91, 43, 100, 31, 11, 85, 99, 79, 24, 64, 53, 1, 89, 54, 12, 44, 15, 68, 32, 29, 69, 21, 84, 10, 58, 90, 78, 50, 3, 36, 41, 16, 28, 96, 6, 20, 8, 40, 25, 74, 18, 92, 76, 17, 46, 70, 86, 34, 73, 61, 63, 49, 87, 19, 48, 77, 55, 95, 62, 72, 66, 5, 67, 51, 33, 27, 39, 42, 80, 22, 88, 47, 9, 13, 2, 30, 71, 56, 98};
  int valor_temporario;  // Variável temporária para armazenar o valor enquanto o array é ordenado

  // Loop externo para percorrer o array de números
  for (indice_atual = 0; indice_atual < TAMANHO_ARRAY - 1; indice_atual++) {
    // Loop interno para comparar os elementos do array
    for (indice_comparacao = 0; indice_comparacao < TAMANHO_ARRAY - 1 - indice_atual; indice_comparacao++) {
      // Se o número atual for maior que o próximo, troque os dois de lugar
      if (array_numeros[indice_comparacao] > array_numeros[indice_comparacao + 1]) {
        valor_temporario = array_numeros[indice_comparacao];
        array_numeros[indice_comparacao] = array_numeros[indice_comparacao + 1];
        array_numeros[indice_comparacao + 1] = valor_temporario;
      }
    }
  }

  // Imprima o array ordenado
  for (indice_atual = 0; indice_atual < TAMANHO_ARRAY; indice_atual++) {
    printf("%d ", array_numeros[indice_atual]);
  }
  printf("\n");

  return 0;
}

