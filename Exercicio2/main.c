#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int tabuada = 0;
    printf("\tTabuada\n");
    printf("Qual tabuada deseja: \n");
    scanf("%i", &tabuada);

    for (int x = 1; x <= 10; ++x) {
    printf("%i x %i =  ", x, tabuada);
    printf("%i\n", x*tabuada);

    }
    return 0;
}
