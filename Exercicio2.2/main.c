#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tabela ASCII\n");

    for(int i = 0; i <=127; i++) {
        printf("Decimal: %i\nHexadecimal: %x\nCaracter: %c\n", i,i,i);
    }

    return 0;
}
