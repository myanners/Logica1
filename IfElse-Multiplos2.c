#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("\nFavor informar idade: ");
    scanf("%i", &idade);

    if      (idade <= 5)
        printf("Bebe");
    else if (idade > 5 && idade <= 10)
        printf ("Crianca");
    else if (idade > 10 && idade <= 18)
        printf ("Adolescente");
    else if (idade > 18 && idade <= 50)
        printf ("Adulto");
    else
        printf("Idoso");

    return 0;
}
