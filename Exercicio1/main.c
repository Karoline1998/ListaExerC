#include <stdio.h>
#include <stdlib.h>

int main()
{
   float metros,  decimetros, centimetros, milimetros;

   printf("Informe o valor em metros \n");
   scanf("%f", &metros);

   decimetros =  metros * 10;
   centimetros = metros * 100;
   milimetros = metros * 1000;

    printf("O valor dado foi: %f\n", metros);
    printf("Em decimetros: %f \n", decimetros);
    printf("Em centimetros: %f\n", centimetros);
    printf("Em milimetros: %f\n",milimetros);

    return 0;
}
