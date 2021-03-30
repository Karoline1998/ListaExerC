#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor1, valor2;

   printf("Entre com o primeiro valor:\n");
   scanf("%i", &valor1);

   printf("Entre com o segundo valor:\n");
   scanf("%i", &valor2);

   if (valor1 == valor2) {
        printf("\nValores iguais!!!\n");

   } else {
        if (valor1 < valor2) {
                printf("\nPrimeiro valor menor que o segundo\n\n");

            for (int i = valor1 ; i <= valor2; i++) {
                printf("%i - ", i);

            }
            printf("\n");

        } else {
            printf("\nPrimeiro valor maior que o segundo\n\n");

            for(int i = valor1; i >= valor2; i--) {
                printf("%i - ", i);

            }
            printf("\n");
        }
   }
    return 0;
}
