#include <stdio.h>
#include <stdlib.h>

float potencia(float num, int ex, float r) {
    if (ex >= 1) {
        r = r * num;
        ex = ex - 1;
        return(potencia(num, ex, r));

    } else {
        return(r);

    }

}
int main() {
    float numero, res;
    int expoente, resultado = 1;

    printf("Entre com um numero:\n");
    scanf("%f", &numero);

    printf("Entre com um expoente:\n");
    scanf("%d", &expoente);

    printf("Resultado: %.2f^%d %.2f\n",numero, expoente, potencia(numero, expoente, resultado));

    return 0;
}
