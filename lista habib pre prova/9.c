#include <stdio.h>

void preenche_matriz (int m[][100],int *t)
{
  int i,j;

  scanf ("%d",t);

  for (i = 0; i < *t; i++) 
  {
    for (j = 0; j < *t; j++) 
    {
      scanf ("%d",&m[i][j]);
    }
  }
}

int ehCisilhameneto(int m[][100],int t) {
  int i,j,um_num_diferente;

  for (i = um_num_diferente = 0; i < t; i++) {
    for (j = 0; j < t; j++) {
      if (i == j) {
        if (m[i][i] != 1) {
          return 0;
        }
      }else if (m[i][j]) {
        um_num_diferente++;
      }
    }
  }
  if (um_num_diferente == 1) {
    return 1;
  }else {
    return 0;
  }
}

int main () {
  int matrix[100][100],t;
  preenche_matriz(matrix,&t);
  if (ehCisilhameneto(matrix,t)) {
    printf("eh cisilhameneto\n");
  }else {
    printf("nao eh cisilhameneto\n");
  }
  return 0;
}