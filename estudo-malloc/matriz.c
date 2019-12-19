#include <stdio.h>
#include <stdlib.h>

void lerVet(FILE *a, int v[], int t) {
	for (int *fim = (v + t); v < fim; v++) {
		fscanf(a, "%f", v);
	}
}

int carregaMatrizDoArquivo(char nome_arq[],int **m,int *x, int *y) {
	int **inicio = m;
	int *percorre_x;
	char ch;

	FILE *arch = fopen(nome_arq,"r");
	if (!arch) return 0;

	m = malloc(100 * sizeof(int*));
	*m = malloc (100 * sizeof(int));
	percorre_x = *m;
	for (;ch != '\n'; percorre_x++) {
		fscanf(arch, "%f%c", percorre_x,&ch);
	}
	*x = *m - percorre_x;

	for (m++; !feof(arch); m++) {
		m = malloc(*x * sizeof(int *));
		lerVet(arch, *m, *x);
	}
	
	*y = m - inicio;
	fclose(arch);
	return 1;
}

void printaMatriz (int **m, int x, int y) {
	int i,j;

	for (i = 0; i < y; i++) {
		for (j = 0; j < x; j++) {
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main () {
  int **m = NULL;
	int largura;
	int comprimento;
	carregaMatrizDoArquivo("matriz.txt",m,&largura,&comprimento);
	printaMatriz(m,largura,comprimento);
	return 0;
}