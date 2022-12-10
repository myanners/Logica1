#include <stdio.h>
#include <stdlib.h>
int main()
{
	int indvoto=1,c1=0,c2=0,c3=0;
	float candidato[5];

        printf("Digite 1 para votar no CANDIDATO 1 \n");
        printf("Digite 2 para votar no CANDIDATO 2 \n");
        printf("Digite 3 para votar no CANDIDATO 3 \n");

	while (indvoto<=5)
	{
        printf("Digite seu voto --->: ");
	 	scanf("%f",&candidato[indvoto]);

	 	if (candidato[indvoto] == 1)
	 	{
            c1= c1+1;
        }
            else
                if (candidato[indvoto] == 2)
                {
                c2= c2+1;
                }
                    else
                    {
                        c3= c3+1;
                    }

        indvoto =indvoto+1;
    };


        printf("Total de Votos: %i \n",c1);
        printf("Total de Votos: %i \n",c2);
        printf("Total de Votos: %i \n",c3);


    if(c1 >= c2 && c2>=c3)
		{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
 		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
		}
	else
		if(c1 >= c3 && c3>=c2)
		{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
 		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
		}
	    else
	    	if(c2 >= c1 && c1>=c3)
			{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
 		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
			}
			else
		if(c2 >= c3 && c3>=c1)
		{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
 		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
	}
		else
		if(c3 >= c1 && c1>=c2)
		{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
 		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
		}
		else
		{
		 printf("\n-------------------------\n");
		 printf("Primeiro colocado candidato 3\n");
		 printf("Total de Votos: %i\n",c3);
		 printf("Primeiro colocado candidato 2\n");
		 printf("Total de Votos: %i\n",c2);
 		 printf("Primeiro colocado candidato 1\n");
		 printf("Total de Votos: %i\n",c1);
		}
}
