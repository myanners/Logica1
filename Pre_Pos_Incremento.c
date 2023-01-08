#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y=1;
    int z=0;
    int w=1;

    x = ++y;

    z = w++;
    printf("\n");
    printf("x = ++y = %i\n", x);
    printf("z = w++ = %i\n", z);
    printf("\n");
    printf("Sendo inicialmente x=0 e y=1 tendo entao PRE incremento x = ++y = %i, sendo ao final x=%i e y=%i\n", x, x, y);
    printf("Sendo inicialmente z=0 e w=1 tendo entao POS incremento z = w++ = %i, sendo ao final z=%i e w=%i\n", z, z, w);

    return 0;
}
