#include <stdio.h>
#include <stdlib.h>

int soma (num1, num2) {

    int result;
    result = num1 + num2;

    return (result);
}

int sub (num1, num2){

    int result;
    result = num1 / num2;

    return (result);
}

int main() {
    int v1, v2, resultSoma, resultSub ;

    printf("Entre com o primeiro valor:\n");
    scanf("%i",&v1);
    printf("Entre com o segundo valor:\n");
    scanf("%i", &v2);

    resultSoma = soma(v1, v2);
    resultSub = sub(v1, v2);

    printf("O resultado da soma: %i\nO resultado da subtracao: %i\n", resultSoma, resultSub);

    return 0;
}
