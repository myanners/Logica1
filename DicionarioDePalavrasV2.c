#include <stdio.h>
#include <string.h>

#define MAX_WORDS 50

// Estrutura para armazenar uma palavra e sua defini��o
struct Word {
char word[30];
char definition[100];
};

int main(void) {
// Array de estruturas para armazenar as palavras e defini��es
struct Word dictionary[MAX_WORDS];
int num_words = 0; // N�mero de palavras no dicion�rio

// Inicializa o contador de palavras para 0
num_words = 0;


// Tenta abrir o arquivo "dictionary.txt" para leitura
FILE* fp = fopen("c:\\qt\\dictionary.txt", "r");
if (fp == NULL) {
    // O arquivo n�o p�de ser aberto. Imprime uma mensagem de erro e sai.
    printf("Erro ao abrir o arquivo!\n");
    // Exclui essa linha
} else {
    printf("Arquivo encontrado e aberto com sucesso!\n");
}

// L� as palavras e defini��es do arquivo e as adiciona ao dicion�rio
while (fscanf(fp, "%s: %[^\n]", dictionary[num_words].word, dictionary[num_words].definition) == 2) {
  printf("Lida a palavra '%s' com a defini��o '%s'\n", dictionary[num_words].word, dictionary[num_words].definition);
  num_words++;
}

// Fecha o arquivo
fclose(fp);

int input;
do {
printf("\n");
printf("1. Carregar palavras e defini�oes\n");
printf("2. Remover palavras duplicadas\n");
printf("3. Adicionar palavra\n");
printf("4. Alterar uma palavra\n");
printf("5. Alterar defini��o de uma palavra\n");
printf("6. Apagar palavra e defini��o\n");
printf("7. Procurar por palavra\n");
printf("8. Imprimir dicion�rio\n");
printf("9. Imprimir arquivo\n");
printf("10. Salvar dicion�rio\n");
printf("11. Salvar dicion�rio em um arquivo diferente\n");
printf("12. Sair\n");
printf("\nEscolha uma op��o: ");
scanf("%d", &input);
if (input == 1) {
// Tenta abrir o arquivo "dictionary.txt" para leitura
FILE* fp = fopen("c:\\qt\\dictionary.txt", "r");
if (fp == NULL) {
// O arquivo n�o p�de ser aberto. Imprime uma mensagem de erro e sai.
printf("Erro ao abrir o arquivo!\n");
return 1;
} else {
printf("Arquivo encontrado e aberto com sucesso!\n");
}
// L� as palavras e defini��es do arquivo e as adiciona ao dicion�rio
char line[200];
while (fgets(line, sizeof(line), fp)) {
  sscanf(line, "%29[^:]: %99[^\n]", dictionary[num_words].word, dictionary[num_words].definition);
  printf("Lida a palavra '%s' com a defini��o '%s'\n", dictionary[num_words].word, dictionary[num_words].definition);
  num_words++;
}

// Fecha o arquivo
fclose(fp);

} else if (input == 2) {
// Remover palavras duplicadas do dicion�rio
for (int i = 0; i < num_words; i++) {
for (int j = i+1; j < num_words; j++) {
if (strcmp(dictionary[i].word, dictionary[j].word) == 0) {
// Palavras s�o iguais, remove a palavra j
for (int k = j; k < num_words-1; k++) {
strcpy(dictionary[k].word, dictionary[k+1].word);
strcpy(dictionary[k].definition, dictionary[k+1].definition);
}
num_words--;
j--; // Decrementa j para verificar a pr�xima palavra
}
}
}
} else if (input == 3) {
    // Adiciona uma nova palavra ao dicion�rio
printf("Digite a palavra: ");
scanf("%s", dictionary[num_words].word);
getchar(); // L� o caractere de nova linha deixado no buffer de entrada
printf("Digite a defini��o: ");
fgets(dictionary[num_words].definition, sizeof(dictionary[num_words].definition), stdin);
// Remove o caractere de nova linha do final da defini��o
int len = strlen(dictionary[num_words].definition);
if (len > 0 && dictionary[num_words].definition[len-1] == '\n') {
dictionary[num_words].definition[len-1] = '\0';
}
num_words++;
} else if (input == 4) {
// Alterar uma palavra no dicion�rio
char word[30];
printf("Digite a palavra a ser alterada: ");
scanf("%s", word);
for (int i = 0; i < num_words; i++) {
if (strcmp(word, dictionary[i].word) == 0) {
// Palavra encontrada, solicita nova palavra e redefine
printf("Digite a nova palavra: ");
scanf("%s", dictionary[i].word);
break;
}
}
} else if (input == 5) {
printf("Digite o nome da palavra cuja defini��o deseja alterar: ");
char word_to_change[30];
scanf("%s", word_to_change);

// Procura a palavra no dicion�rio
int found = 0;
for (int i = 0; i < num_words; i++) {
    if (strcmp(dictionary[i].word, word_to_change) == 0) {
        // Palavra encontrada. Pergunta qual a nova defini��o
        printf("Digite a nova defini��o para a palavra '%s': ", word_to_change);
        scanf("%s", dictionary[i].definition);
        found = 1;
        break;
    }
}

if (!found) {
    printf("Palavra '%s' n�o encontrada no dicion�rio!\n", word_to_change);
}

} else if (input == 6) {
    printf("Digite a palavra a ser removida: ");
    char word_to_remove[30];
    scanf("%29s", word_to_remove);
    printf("A palavra digitada foi: %s\n", word_to_remove);

    // Limpa o buffer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    // Remove a palavra do dicion�rio
    int removed = 0;
    for (int i = 0; i < num_words; i++) {
        if (strcmp(dictionary[i].word, word_to_remove) == 0) {
            for (int j = i; j < num_words - 1; j++) {
                dictionary[j] = dictionary[j + 1];
            }
            num_words--;
            removed = 1;
        }
    }

    if (removed) {
        printf("Palavra removida com sucesso!\n");
    } else {
        printf("Palavra n�o encontrada!\n");
    }
} else if (input == 7) {
// Procurar por uma palavra no dicion�rio
char word[30];
printf("Digite a palavra a ser procurada: ");
scanf("%s", word);
for (int i = 0; i < num_words; i++) {
if (strcmp(word, dictionary[i].word) == 0) {
// Palavra encontrada, imprime a defini��o
printf("Defini��o de '%s': %s\n", word, dictionary[i].definition);
break;
}
}
} else if (input == 8) {
// Imprimir o dicion�rio
printf("Dicion�rio:\n");
for (int i = 0; i < num_words; i++) {
printf("%s: %s\n", dictionary[i].word, dictionary[i].definition);
}
} else if (input == 9) {
// Imprimir o arquivo
// Tenta abrir o arquivo "dictionary.txt" para leitura
FILE* fp = fopen("c:\\qt\\dictionary.txt", "r");
if (fp == NULL) {
// O arquivo n�o p�de ser aberto. Imprime uma mensagem de erro e sai.
printf("Erro ao abrir o arquivo!\n");
return 1;
} else {
printf("Arquivo encontrado e aberto com sucesso!\n");
}
// L� e imprime as linhas do arquivo
char line[200];
while (fgets(line, sizeof(line), fp)) {
  printf("%s", line);
}

// Fecha o arquivo
fclose(fp);

} else if (input == 10) {
// Salvar dicion�rio no arquivo "dictionary.txt"
// Tenta abrir o arquivo "dictionary.txt" para escrita
FILE* fp = fopen("c:\\qt\\dictionary.txt", "w");
if (fp == NULL) {
// O arquivo n�o p�de ser aberto. Imprime uma mensagem de erro e sai.
printf("Erro ao abrir o arquivo!\n");
return 1;
} else {
printf("Arquivo encontrado e aberto com sucesso!\n");
}
// Escreve as palavras e defini��es no arquivo
for (int i = 0; i < num_words; i++) {
  fprintf(fp, "%s: %s\n", dictionary[i].word, dictionary[i].definition);
}

// Fecha o arquivo
fclose(fp);
} else if (input == 11) {
// Salvar dicion�rio em um arquivo diferente
char file_name[50];
printf("Digite o nome do arquivo: ");
scanf("%s", file_name);

// Tenta abrir o arquivo para escrita
FILE* fp = fopen(file_name, "w");
if (fp == NULL) {
  // O arquivo n�o p�de ser aberto. Imprime uma mensagem de erro e sai.
  printf("Erro ao abrir o arquivo!\n");
  return 1;
} else {
  printf("Arquivo encontrado e aberto com sucesso!\n");
}

// Escreve as palavras e defini��es no arquivo
for (int i = 0; i < num_words; i++) {
  fprintf(fp, "%s: %s\n", dictionary[i].word, dictionary[i].definition);
}

// Fecha o arquivo
fclose(fp);

}
} while (input != 12);

return 0;
}
