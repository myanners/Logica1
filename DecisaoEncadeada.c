//“Dados três números verificar se eles podem
//representar as medidas dos lados de um triângulo e, se
//puderem, classificar o triângulo em equilátero, isósceles ou
//escaleno”.
#include <stdio.h>
#include <conio.h>
main()
{
float a, b, c;
printf(“\nInforme tres numeros: “);
scanf(“%f %f %f”, &a, &b, &c);
if( a<b+c && b<a+c && c<a+b )
    {
    printf(“\nE um triangulo: ”);
        if( a==b && b==c )
        printf(“equilatero”);
        else
            if( a==b || a==c || b==c )
            printf(“isosceles”);
            else
            printf(“escaleno”);
    }
else printf(“\nNao e um triangulo”);
getch();
}
