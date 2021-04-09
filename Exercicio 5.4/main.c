#include <stdio.h>
#include <stdlib.h>
/* Exercicio: d;
    Resultado: 23 - 10 - 24 - B
*/
int calcula(int);

int main() {
    int a, b, c;
    char d;

    a = 1;
    b = 2;
    c = 3;
    d = 'A';

    d = (a > 7)? d - 1: d + 1;

    b = calcula(b);
    c = calcula(calcula(a));
    a = c++;

    printf("%d - %d - %d - %c\n", a, b,c, d);
}
    int calcula(int x) {

        if((x = x * 2) > 5) return(x + 3);

        for (int i = 0; i < 10; i++) {
            if(i < 5) continue;
            if(x > 8) break;
            x += 2;
        }
        return x;
    }

