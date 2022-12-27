#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int periodoNotas = 4;
    const int qtdadeAlunos = 4;
    int notas = 0;

    float notasAlunos[qtdadeAlunos][periodoNotas];
    float mediaAlunos[qtdadeAlunos];

    float medias = 0;

    printf("Insira as 4 notas do aluno 1:\n");
    for (int aluno = 0; aluno < qtdadeAlunos; ++aluno){
           for ( notas = 0; notas < periodoNotas; ++notas){
                scanf("%f", &notasAlunos[aluno][notas]);
                medias += notasAlunos[aluno][notas];
    }
           mediaAlunos[aluno] = medias / periodoNotas;
           medias = 0;
           printf("Insira as 4 notas do aluno %i: \n", aluno + 2);
    }
    for (int aluno = 0; aluno < qtdadeAlunos; ++aluno){
        printf("A media do aluno %i e %.2f\n", aluno + 1, mediaAlunos[aluno]);
    }
    return 0;
}
