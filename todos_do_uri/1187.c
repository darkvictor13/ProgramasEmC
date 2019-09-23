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

double soma_area_superior (double m[][12],int tamanho,int *casos) {
  int i,j,marca = tamanho -1,aux = 0; //marca = marca_diagonal_sec
  double soma = 0;
  for (i = 0; i <= marca; i++,marca--) {
    for (j = i+1; j < marca; j++) {
      soma += m[i][j];
      aux++;
      //printf("[%d] [%d]\n", i,j);
    }
  }
  *casos = aux;
  return soma;
}

int main () {
  int divisor_da_media;
  double M[12][12],resposta;
  char soma_ou_media;

  scanf("%c", &soma_ou_media);

  preenche_matriz (M,12);
  resposta = soma_area_superior (M,12,&divisor_da_media);

  if (soma_ou_media == 'S') {
    printf("%.1lf\n", resposta);
  }else if (soma_ou_media == 'M') {
    printf("%.1lf\n", (resposta/divisor_da_media));
  }
  //printf("%d\n", divisor_da_media);
  return 0;
}
