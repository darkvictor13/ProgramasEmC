#include <stdio.h>

void preenche_matriz (float m[][12],int tam) {
  int i,j;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      //scanf("%f", &m[i][j]);
      m[i][j] = 1;
    }
  }
}

float soma_coluna (float matriz[][12],int coluna_somada,int tam_matriz) {
  float aux = 0;int i;

  for (i = 0; i < tam_matriz; i++) {
    aux += matriz[i][coluna_somada];
  }
  return aux;
}

int main () {
  float M[12][12],resposta;
  int coluna_somada;
  char soma_ou_media;

  scanf("%d ", &coluna_somada);
  scanf("%c", &soma_ou_media);

  preenche_matriz (M,12);
  resposta = soma_coluna (M,coluna_somada,12);

  if (soma_ou_media == 'S') {
    printf("%.1f\n", resposta);
  }else if (soma_ou_media == 'M') {
    printf("%.1f\n", (resposta/12));
  }else {
    printf("deu ruim\n");
  }
  return 0;
}
