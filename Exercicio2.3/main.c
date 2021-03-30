#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Aprendendo fazer sem uttilizar o if*/
  float preco;

  printf("Entre com o valor do produto: \n");
  scanf("%f", &preco);

  if(preco < 100) {
    preco = preco * 1.1;

  } else {
      preco = preco * 1.2;

  }
  printf("Preco inflacionado: %.2f", preco);
}
