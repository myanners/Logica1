#include <stdio.h>
#include <conio.h>
main() {
int h;
float s;
printf(�\nHoras trabalhadas? �);
scanf(�%d�, &h);
s = h*19.50;
if( s>1500.00 )
s = 0.90*s;
printf(�\nSal�rio l�quido: R$ %.2f�, s);
getch();
}
//Obviamente, para calcular o sal�rio bruto, basta multiplicar o
//n�mero de horas trabalhadas pelo valor pago por hora. O sal�rio
//l�quido ser� igual ao sal�rio bruto, a menos que o seu valor
//exceda o limite de R$ 1500,00. Nesse caso, o sal�rio l�quido
//ser� apenas 90% do sal�rio bruto.
