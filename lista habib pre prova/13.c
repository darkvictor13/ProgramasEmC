#include <stdio.h>

#define maxtam 100

void lerMat(int m[][maxtam],int *n) {
  int i,j;

  scanf("%d",n);

  for (i = 0; i < *n; i++) {
    for (j = 0; j < *n; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

void max(int m[][maxtam],int t,int *k,int *lin,int *col) {
  int i,j,marcado;

  marcado = m[0][0];

  for (i = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      if (m[i][j] > marcado) {
        marcado = m[i][j];
        *lin = i;
        *col = j;
      }
    }
  }
  *k = marcado;
}

int main () {
  int matriz[maxtam][maxtam],tam = 1,num_maior,lin_maior,col_maior;

  while (tam > 0) {
    lerMat(matriz,&tam);
    max(matriz,tam,&num_maior,&lin_maior,&col_maior);
    printf("\nk = %d\nLin = %d\nCol = %d\n\n",num_maior,lin_maior,col_maior);
  }
  return 0;
}