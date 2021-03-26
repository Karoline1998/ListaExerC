#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec = 0;
    printf("\tConversor de decimal\n");
    printf("Entre com um Decimal para ser convertido em Octal e Hexadecimal:\n");
    scanf("%d", &dec);

    printf("O valor convertido em Octal: %o\n", dec);
    printf("O valor convertido em Hexadecimal: %x\n", dec);

    return 0;
}
