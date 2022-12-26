#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <=3; ++i)
    {
        printf("\n\n***********************************************");
        printf("\n**************CATEGORIA AAA Item %i*************\n", i);
        printf("***********************************************");
        for (int j = 1; j <=5; ++j)
        {
            printf("\n\n----CATEGORIA B Item%i\n", j);
            for (int k = 1; k <= 3; ++k)
            {
                printf("\n    Item%i\n      ", k);
                for (int l = 1; l <=9; ++l)
                {
                    printf("%i", l);
                }
            }
        }
    }
    return 0;
}
