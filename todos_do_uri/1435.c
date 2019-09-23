#include <stdio.h>

/*void cria_matriz_quadrada (int m[][100],int t) {
  int i,j,j_inv,aux;

  for (i = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      m[i][j] = 1;
    }
  }

  for (i = 1; i < t-1; i++) {
    for (j = 0,j_inv = t-1,aux = 1; j <= j_inv; j++,j_inv--,aux++) {
      m[i][j] = aux;
      m[i][j_inv] = aux;
    }
  }

  for (; i < t; i++) {
    for (j = 0; j < t; j++) {
      m[i][j] = 1;
    }
  }
}*/

void printa_bonitinhu (int m[][100],int t) {
  int i,j;
  for (i = 0; i < t; i++) {
    printf("  ");
    for (j = 0; j < t; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main () {
  int matriz[100][100],tamanho;
  scanf("%d", &tamanho);
  while (tamanho > 0) {
    cria_matriz_quadrada (matriz,tamanho);
    printa_bonitinhu (matriz,tamanho);
    scanf("%d", &tamanho);
  }
  return 0;
}
