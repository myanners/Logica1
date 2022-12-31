#include <stdio.h>
#include <stdlib.h>

// Define o esqueleto da estrutura "horario"
struct definicao_da_struct_horario
{
// Campos da estrutura "horario"
int horas;
int minutos;
int segundos;
};

int main()
{
// Declara a função "teste" que recebe uma estrutura do tipo "horario" como argumento e retorna uma estrutura do tipo "horario"
struct definicao_da_struct_horario teste(struct definicao_da_struct_horario x);

// Declara uma estrutura do tipo "horario" e atribui valores aos seus campos
struct definicao_da_struct_horario estrutura_antes_da_funcao;
estrutura_antes_da_funcao.horas = 10;
estrutura_antes_da_funcao.minutos = 15;
estrutura_antes_da_funcao.segundos = 40;

// Cria outra estrutura do tipo "horario" que vai receber o retorno da função "teste"
struct definicao_da_struct_horario estrutura_que_vai_sair_da_funcao;
estrutura_que_vai_sair_da_funcao = teste(estrutura_antes_da_funcao);

// Imprime os valores dos campos da estrutura "estrutura_que_vai_sair_da_funcao"
printf("\n\n%i:", estrutura_que_vai_sair_da_funcao.horas);
printf("%i:", estrutura_que_vai_sair_da_funcao.minutos);
printf("%i", estrutura_que_vai_sair_da_funcao.segundos);

return 0;
}

// Função "teste" que recebe uma estrutura do tipo "horario" e retorna uma estrutura do tipo "horario"
struct definicao_da_struct_horario teste(struct definicao_da_struct_horario x)
{
system("cls"); // Limpa a tela

// Imprime os valores dos campos da estrutura "x"
printf("%i:%i:%i", x.horas, x.minutos, x.segundos);

// Altera os valores dos campos da estrutura "x"
x.horas = 20;
x.minutos = 20;
x.segundos = 20;

// Retorna a estrutura "x"
return x;
}
