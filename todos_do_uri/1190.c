#include <stdio.h>

void preenche_matriz (double m[][12],int tam) {
  int i,j;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      scanf("%lf", &m[i][j]);
      //m[i][j] = 100;
    }
  }
}

double soma_area_esquerda (double M[][12],int t,int *casos) {
  int i,j,count,diagonal_secundaria = t - 2;
  double soma = 0;
  for (i = 1; i < t-1; i++,diagonal_secundaria--) {
    for (j = t-1; j > diagonal_secundaria && j > i; j--) {
        soma += M[i][j];
        count++;
        //printf("[%d] [%d]\n", i,j);
    }
  }
  *casos = count;
  return soma;
}

int main () {
  int divisor_da_media;
  double M[12][12],resposta;
  char soma_ou_media;

  scanf("%c", &soma_ou_media);

  preenche_matriz (M,12);
  resposta = soma_area_esquerda (M,12,&divisor_da_media);

  if (soma_ou_media == 'S') {
    printf("%.1lf\n", resposta);
  }else if (soma_ou_media == 'M') {
    printf("%.1lf\n", (resposta/divisor_da_media));
  }
  return 0;
}
