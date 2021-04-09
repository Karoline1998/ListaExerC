#include <stdio.h>
#include <stdlib.h>

/* Exercicio: a;
    resultado:  5 5  */

int main() {
    int a,b,*c;

    a = 3;
    b = 4;
    c = &a;
    b++;

    *c = a+2;

    printf("%d %d",a,b);

}
