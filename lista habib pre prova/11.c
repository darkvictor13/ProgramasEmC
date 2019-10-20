#include <stdio.h>

#define maxc 100

void lerMatriz(int m[][maxc],int ln,int cn) {
  for (int i = 0; i < ln; i++) {
    for (int j = 0; j < cn; j++) {
      scanf("%d",&m[i][j]);
    }
  }
}

int *matToVet(int v[],int *n,int m[][maxc],int ln,int cn) {
  int i,j;

  *n = (ln * cn);

  for (i = 0; i < ln; i++) {
    for (j = 0; j < cn; j++,v++) {
      *v = m[i][j];
    }
  }
  return (v - n);
}

void printaVet(int *v,int t) {
  int *p;

  for (p = (v + t); v < p; v++) {
    printf("[%d]",*v);
  }
  printf("\n");
}

int main () {
  int matriz[100][100],lin_mat,col_mat,v[10000],tam_vet;

  scanf("%d %d",&lin_mat,&col_mat);

  lerMatriz(matriz,lin_mat,col_mat);
  matToVet(v,&tam_vet,matriz,lin_mat,col_mat);
  printaVet(v,tam_vet);
  
  return 0;
}