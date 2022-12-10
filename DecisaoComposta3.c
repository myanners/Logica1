//O uso de blocos de instruções.
#include <stdio.h>
#include <conio.h>
main()
{
float a, b,m;
printf("\n Informe as duas notas obtidas: ");
scanf("%f%f",&a,&b);
m =(a+b)/2;
system("CLS"); //limpa a tela
printf("Nota1:%4.1f\nNota2:%4.1f", a,b);
if(m >=7.0)
    {
    printf("\nMedia.:%4.1f", m);
    printf("\nAprovado");
    }
    else
        {
        printf("\nMedia.:%4.1f", m);
        printf("\nReprovado");
        }
getch();
}
