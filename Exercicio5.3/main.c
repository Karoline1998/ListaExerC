#include <stdio.h>
#include <stdlib.h>

/* Exercicio: c
    Resultado: 3 2*/

int main() {
    int a,b,*c, *d, *f;

    a = 4;
    b = 3;
    c = &a;
    d = &b;
    *c /= 2;
    f = c;
    c = d;
    d = f;

    printf("%d %d", *c, *d);
}
