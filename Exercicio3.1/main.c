#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool true_or_false(int num1) {
    bool t = true;
    if (num1% 2 == 1) {
        t = false;
    }
    return t;
}
int main() {

    int num;
    bool a;

    printf("Informe um numero:\n");
    scanf("%i", &num);

    a = true_or_false(num);

    if (a == true) {
        printf("O numero informado %i e par\n", num);

    } else {
        printf("O numero informado %i e impar\n", num);

    }
    return 0;

}
