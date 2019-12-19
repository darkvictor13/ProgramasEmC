#include <stdio.h>
#include <stdlib.h>

void inicializacao(int *linhas, int *colunas) {
printf("Entre com num de linhas e colunas\n");
  printf("linhas : ");
  scanf("%d", linhas);
  printf("colunas : ");
  scanf("%d", colunas);
}

void lerVet(int v[], int t) {
  for (int *fim = (v + t); v < fim; v++) {
    scanf("%d", v);
  }
}

void printMatriz(int **m, int l, int c) {
  int i,j;

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main () {
  int **m;
  int linhas,colunas;

  inicializacao(&linhas, &colunas);

  m = malloc(linhas * sizeof(int *));

  for (int count = 0; count < linhas; count++) {
    m[count] = malloc(colunas * sizeof(int));
    lerVet(m[count], colunas);
  }
  printMatriz(m, linhas, colunas);
  return 0;
}