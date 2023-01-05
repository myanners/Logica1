/*Este c�digo l� uma linha de entrada do usu�rio
e armazena-a na matriz linha. A entrada � lida
caractere por vez usando getchar(), e o loop
continua at� o usu�rio pressionar a tecla Enter
(que � representada por um caractere de nova linha
'\n'). O caractere de nova linha � substitu�do
por um caractere nulo '\0' no final da string,
para que a string possa ser impressa corretamente
usando printf("%s\n", linha).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
char linha [100]; //declara uma matriz de char com tamanho 100
char caractere; //declara uma variavel do tipo char
int i = 0; //declara e inicializa uma variavel int com valor 0

//inicio de um loop do-while
do{
   caractere = getchar(); //le um caractere da entrada padrao
   linha[i] = caractere; //armazena o caractere lido na matriz linha
   ++i; //incrementa o valor de i
} while (caractere != '\n'); //condicao de continuacao do loop: o caractere lido nao eh uma nova linha

linha[i - 1] = '\0'; //substitui o ultimo caractere da matriz por um caractere nulo

printf("%s\n", linha); //imprime a string armazenada em linha
}
