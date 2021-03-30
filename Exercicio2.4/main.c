#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, result;
    char op;

    printf("Entre com o primeiro valor:\n");
    scanf("%f",&valor1);

    fflush(stdin);

    printf("Entre com o operador matematico (+,-,*,/): \n");
    scanf("%c",&op);

    printf("Entre com o segundo valor:\n");
    scanf("%f",&valor2);

    switch (op) {
    case '+' :
       result =  valor1 + valor2;
       break;

    case '-':
        result = valor1 - valor2;
        break;

    case '*':
      result = valor1 * valor2;
      break;

    case '/':
        result = valor1 / valor2;
    }

    if(valor2 == 0) {
        printf("ERROR Denominador = 0");

    } else {
            printf("%.2f %c %.2f = %.2f\n", valor1,op,valor2,result);

    }
    return 0;
}
