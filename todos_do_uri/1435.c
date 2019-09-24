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


/*for (; j < t; j++) {
  m[i][j] = indice;
}
j--;
for (; i < t; i++) {
  m[i][j] = indice;
}
i--;
for (; j > 0; j--) {
  m[i][j] = indice;
}
for (; i > 0; i--) {
  m[i][j] = indice;
}*/


void cria_cebola (int m[][100],int t) {
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

void printa_bonitinhu (int m[][100],int t) {
  int i,j;
  if (t == 1) {
    printf("%3d\n",1);
    return ;
  }

  for (i = 0; i < t; i++) {
    printf("%3d", m[i][j]);
    for (j = 1; j < t-1; j++) {
      printf(" %3d", m[i][j]);
    }
    printf(" %3d\n", m[i][j]);
  }
  printf("\n");
}

int main () {
  int matriz[100][100],tamanho;
  scanf("%d", &tamanho);
  while (tamanho > 0) {
    cria_cebola (matriz,tamanho);
    printa_bonitinhu (matriz,tamanho);
    scanf("%d", &tamanho);
  }
  return 0;
}
