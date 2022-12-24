#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

// Declara��o de constantes
#define NUM_ALUNOS 3
#define NUM_SEMANAS 4
#define NUM_HABITANTES 2

// Declara��o de Estrutura Struct Habitantes
struct habitante {
  int idade;
  char sexo;
  float salario;
  int num_filhos;
};

// Declara��o de fun��es
void aluno();
float boleto(float valor, float taxa, int tempo);
void pesquisa();
void imprime_relatorio(struct habitante *dados);
void relatorio_salario(struct habitante *dados);
void relatorio_maior_salario(struct habitante *dados);

//Fun��es
void relatorio_salario(struct habitante *dados) {
  // Calcula a soma dos sal�rios
  float soma_salarios = 0;
  for (int i = 0; i < NUM_HABITANTES; i++) {
    soma_salarios += dados[i].salario;
  }

  // Calcula a m�dia de sal�rio
  float media_salario = soma_salarios / NUM_HABITANTES;

  // Exibe a m�dia de sal�rio
  printf("M�dia de sal�rio: %.2f\n", media_salario);
}

void imprime_relatorio(struct habitante *dados) {
  for (int i = 0; i < NUM_HABITANTES; i++) {
    printf("Habitante %d:\n", i + 1);
    printf("Idade: %d\n", dados[i].idade);

    // Verifica o sexo do habitante e imprime a string correspondente
    if (dados[i].sexo == 'M') {
      printf("Sexo: Masculino\n");
    } else if (dados[i].sex
