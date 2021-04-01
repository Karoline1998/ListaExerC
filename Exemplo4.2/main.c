#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double fatorial(int n);

int main() {
    int numero;
    double f;

    printf("Digite o numero que deseja calcular o fatorial:\n");
    scanf("%d",&numero);

    f = fatorial(numero);

    printf("Fatorial de %d = %.0lf\n", numero, f);
    getch();

    return 0;

}

double fatorial(int n) {
   double vFatorial;

   if(n <= 1) {
        return (1);

   } else {
        vFatorial = n * fatorial(n -1);
        return (vFatorial);

   }

}
