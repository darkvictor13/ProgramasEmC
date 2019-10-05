#include <stdio.h>

void cria_cebola (int m[][1000],int t) {
  int i,j,indice = 1,aux = 0,pergunta;

  if (t%2) {
    pergunta = (t/2)+1;
  }else {
    pergunta = (t/2);
  }

  for (i = j = aux; i < pergunta; aux++,indice++) {
    i = j = aux;
    for (; j < t-aux; j++) {
      m[i][j] = indice;
    }
    j--;
    for (; i < t-aux; i++) {
      m[i][j] = indice;
    }
    i--;
    for (; j > 0+aux; j--) {
      m[i][j] = indice;
    }
    for (; i > 0+aux; i--) {
      m[i][j] = indice;
    }
  }
}

void printa_bonitinhu (int m[][1000],int t) {
  int i,j;

  if (t == 1) {
    printf("%3d\n",1);
    return ;
  }

  for (i = 0; i < t; i++) {
    for (j = 1; j < t-1; j++) {
      if (j == 0) {
        printf("%3d", m[i][j]);
      }else {
        printf(" %3d", m[i][j]);
      }
    }
    printf("\n");
  }
  printf("\n");
}

int main () {
  int matriz[1000][1000],tamanho;
  scanf("%d", &tamanho);
  while (tamanho > 0) {
    cria_cebola (matriz,tamanho);
    printa_bonitinhu (matriz,tamanho);
    scanf("%d", &tamanho);
  }
  return 0;
}
