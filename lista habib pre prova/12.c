#include <stdio.h>

void lerVet(int v[],int *t) {
  scanf("%d",t);

  for (int *p = (v + *t); v < p; v++) {
    scanf("%d",v);
  }
}

void vetToMat(int m[][100],int lin,int col,int v[],int t) {
  int i,j,*ultimo_termo_do_vet = (v + t);

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++,v++) {
      if (v == ultimo_termo_do_vet) {
        v -= t;
      }
      m[i][j] = *v;
    }
  }
}

void printaMatriz(int m[][100],int l,int c) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }
}

int main () {
  int vet[10000],tam_vet,m[100][100],l,c;

  printf("Entre com o num de linhas e colunas da matriz :\n");
  printf("linhas = ");
  scanf("%d",&l);
  printf("colunas = ");
  scanf("%d",&c);
  printf("Agora entre com o tamanho do vet, e ele mesmo :\n");
  lerVet(vet,&tam_vet);
  printf("Sua matriz ficou assim :\n");
  vetToMat(m,l,c,vet,tam_vet);
  printaMatriz(m,l,c);
}