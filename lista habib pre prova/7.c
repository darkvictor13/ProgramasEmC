#include <stdio.h>

void ler(int m[][100],int *t) {
  int i,j;

  scanf("%d",t);
  
  for (i = 0; i < *t; i++) {
    for (j = 0; j < *t; j++) {
      scanf("%d",&m[i][j]);
    }
  }
}

int ehIdent(int m[][100],int n) {
  int i,j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (j != i) {
        if (m[i][j]) {
          return 0;
        }
      }else if (m[i][i] != 1) {
        return 0;
      }
    }
  }return 1;
}

int main() {
  int matriz[100][100],tamanho;
  ler(matriz,&tamanho);

  if (ehIdent(matriz,tamanho)) {
    printf("eh identidade\n");
  }else {
    printf("nao eh identidade\n");
  }

  return 0;
}