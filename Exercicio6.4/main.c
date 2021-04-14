#include <stdio.h>
#include <stdlib.h>


int main() {
    int tamanho = 0;
    int v[tamanho];

    printf("Digite um tamanho:");
    scanf("%i",&tamanho);

    for (int i=0; i < tamanho; i++) {
        printf("Indice: %i\n",i);
        scanf("%d",&v[i]);

    }
    for (int i=0; i < tamanho; i++) {
        printf("[ %d ]", v[i]);

    }
    system("PAUSE");
    return 0;
}

