#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

// Declaração de constantes
#define NUM_ALUNOS 3
#define NUM_SEMANAS 4
#define NUM_HABITANTES 2

// Declaração de Estrutura Struct Habitantes
struct habitante {
  int idade;
  char sexo;
  float salario;
  int num_filhos;
};

// Declaração de funções
void aluno();
float boleto(float valor, float taxa, int tempo);
void pesquisa();
void imprime_relatorio(struct habitante *dados);
void relatorio_salario(struct habitante *dados);
void relatorio_maior_salario(struct habitante *dados);

//Funções
void relatorio_salario(struct habitante *dados) {
  // Calcula a soma dos salários
  float soma_salarios = 0;
  for (int i = 0; i < NUM_HABITANTES; i++) {
    soma_salarios += dados[i].salario;
  }

  // Calcula a média de salário
  float media_salario = soma_salarios / NUM_HABITANTES;

  // Exibe a média de salário
  printf("Média de salário: %.2f\n", media_salario);
}

void imprime_relatorio(struct habitante *dados) {
  for (int i = 0; i < NUM_HABITANTES; i++) {
    printf("Habitante %d:\n", i + 1);
    printf("Idade: %d\n", dados[i].idade);

    // Verifica o sexo do habitante e imprime a string correspondente
    if (dados[i].sexo == 'M') {
      printf("Sexo: Masculino\n");
    } else if (dados[i].sex
