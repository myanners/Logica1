#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int RESP, N, FAT, VAL;
    RESP=1;
    while ( RESP == 1)
    {
        system("cls");
        FAT = 1;
        printf("Número para calculo: ");
        scanf("%i", &N);
        for(VAL = 1; VAL <= N; VAL++)
        {
        FAT = FAT * VAL;
        }
    printf("Fatorial de %i = %i\n", N, FAT);
    printf("Digite 1 para continua");
    scanf("%i", &RESP);

    }
}
