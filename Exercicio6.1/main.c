#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, maior, menor = 0;

    printf("Digite um numero:\n");
    scanf("%i", &num);

    menor = num;
    maior = num;

    for(int i = 1; i <= 10; i++) {
        printf("Digite um numero:\n");
        scanf("%i", &num);

        if(num > maior) maior = num;
        if(num < menor) menor = num;

    }
    printf ("%d %d\n",menor, maior);

    return 0;
}
