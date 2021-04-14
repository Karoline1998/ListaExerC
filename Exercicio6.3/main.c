#include <stdio.h>
#include <stdlib.h>

float media(int n, float *vnotas);

int main() {
    float vnotas[5];
    float media_notas;

  for (int i = 1; i <= 5; i++)   {
    printf("Digite a nota do %do semestre: ", i);
    scanf("%f", &vnotas[i]);

  }
  media_notas = media(5,vnotas);

  printf ( "\nMedia = %.1f \n", media_notas );
  system("pause");
  return 0;

}
float media (int n, float *vnotas) {
  int i;
  float m = 0, soma = 0;

  for (i = 0; i < n; i++)
soma = soma + vnotas[i];

  m = soma / n;

  return m;

}
