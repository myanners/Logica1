#include <stdio.h>
#include <conio.h>
main() {
int h;
float s;
printf(“\nHoras trabalhadas? ”);
scanf(“%d”, &h);
s = h*19.50;
if( s>1500.00 )
s = 0.90*s;
printf(“\nSalário líquido: R$ %.2f”, s);
getch();
}
//Obviamente, para calcular o salário bruto, basta multiplicar o
//número de horas trabalhadas pelo valor pago por hora. O salário
//líquido será igual ao salário bruto, a menos que o seu valor
//exceda o limite de R$ 1500,00. Nesse caso, o salário líquido
//será apenas 90% do salário bruto.
