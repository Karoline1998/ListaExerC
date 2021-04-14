#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
	int valor[N], soma=0, media, cont=0;

	for (int i=0; i<N; i++) {
		printf("Informe o %do valor: ", i+1);
		scanf("%d", &valor[i]);
		soma += valor[i];

	}
	media = soma / N;

	for (int i=0; i<N; i++)
		if (valor[i] == media)
			cont++;

	if (cont > 0)
		printf("%d valor%s igua%s a media (%d)\n", cont, (cont>1) ? "es" : "", (cont>1) ? "is" : "l", media);

	else
		printf("Nenhum valor igual à média\n");
	return 0;

}
