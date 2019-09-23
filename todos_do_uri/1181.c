#include <stdio.h>

int main () {
  int i,j,linha_somada;
  float matriz[12][12],soma;
  char soma_ou_media;

  scanf("%d ", &linha_somada);
  scanf("%c", &soma_ou_media);

  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      scanf("%f", &matriz[i][j]);
      //matriz[i][j] = 2;
    }
  }

  for (j = soma = 0, i = linha_somada; j < 12; j++) {
    soma += matriz[i][j];
  }
  if (soma_ou_media == 'S') {
    printf("%.1f\n", soma);
  }else if (soma_ou_media == 'M') {
    printf("%.1f\n", (soma/12));
  }
  return 0;
}
