#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;

    do {
        do {
            printf("Entre com a nota da primeira prova:\n");
            scanf("%f",&nota1);

            if(nota1 == 50) {
                break;

            }
            printf("Entre com a nota da segunda prova:\n");
            scanf("%f", &nota2);

            if((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 > 10)) {
                printf("Escreva as notas novamente\n");

            }
        } while ((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 > 10));

        if(nota1 == 50) {
            break;

        }
        media = (nota1 + nota2) / 2;
        printf("Media: %.2f\n", media);

    } while(nota1 != 50);

    return 0;
}
