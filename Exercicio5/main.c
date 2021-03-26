#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1, num2, soma,quadrado, produto,sen_diferenca, modulo, raiz = 0;

   printf("Entre com o primeiro numero a ser calculado:\n");
   scanf("%lf", &num1);
   printf("Entre com o segundo numero a ser calculado:\n");
   scanf("%lf", &num2);

    printf("\n\tOperacoes:\n");
//a
    soma = num1 + num2;
    printf("A soma dos numeros: %lf\n", soma);
//b
    produto = num1 * pow(num2,2);
    printf("O produto do primeiro numero pelo quadrado do segundo: %lf\n", produto);
//c
    quadrado = pow(num1,2);
    printf("O quadrado do primeiro numero:%lf\n", quadrado);
//d
    raiz = sqrt(pow(num1,2) + pow(num2,2));
    printf("A raiz quadrada da soma dos quadrados: %lf\n", raiz);
//e
   sen_diferenca = sin(num1 - num2);
   printf("O seno da diferença do primeiro numero pelo segundo: %lf\n", sen_diferenca);
//f
    modulo = fabs(num1);
    printf("O modulo do primeiro numero: %f\n", modulo);
    return 0;
}
