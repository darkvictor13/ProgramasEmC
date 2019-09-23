#include <stdio.h>

void preenche_matriz (float m[][12],int tam) {
  int i,j;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      scanf("%f", &m[i][j]);
      //m[i][j] = 100;
    }
  }
}

float soma_acima_da_diagonal_secundaria (float m[][12],int tamanho) {
  int i,j,marca; float soma;
  for (i = soma = 0,marca = tamanho - 1; i < tamanho; i++,marca--) {
    for (j = 0; j < marca; j++) {
      soma += m[i][j];
      //printf("[%d] [%d]\n", i,j);
    }
  }
  return soma;
}

int main () {
  float M[12][12],resposta;
  char soma_ou_media;

  scanf("%c", &soma_ou_media);

  preenche_matriz (M,12);
  resposta = soma_acima_da_diagonal_secundaria (M,12);

  if (soma_ou_media == 'S') {
    printf("%.1f\n", resposta);
  }else if (soma_ou_media == 'M') {
    printf("%.1f\n", (resposta/66));
  }
  return 0;
}
