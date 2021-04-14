#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];

    for(int i = 1; i <= 10; i++) {
        printf("Digite um valor na posicao %d:\n",i);
        scanf("%d", &vet[i]);

    }
    for(int i = 1; i <= 10; i++) {
            printf("Posicao: %d\nValor: %d\n", i, vet[i]);

    }
    return 0;
}
