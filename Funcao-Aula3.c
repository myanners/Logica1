#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float calcularAreaRetangulo(float x, float y);

    float area = calcularAreaRetangulo(10.0 , 20.0);

    printf("A area e: %.2f", area);

    return 0;
}

float calcularAreaRetangulo(float base, float altura)
{
    float area = base * altura;

    return area;
}

