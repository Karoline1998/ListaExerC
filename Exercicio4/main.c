#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c_Double;
    int c_Int, f;

    printf("\tConversor de graus Fahrenheit para Celcius\n");
    printf("Entre com um valor em graus Farenheit:\n");
    scanf("%d",&f);

    c_Double = (f-32.0) * (5.0/9.0);
    c_Int = (f-32) * (5/9);

    printf("O valor com casa decimais: %f\n", c_Double);
    printf("O valor inteiro: %d", c_Int);

    return 0;
}
