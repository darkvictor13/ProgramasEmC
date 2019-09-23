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

double soma_area_inferior (double M[][12],int t,int *casos) {
  int i,j,diagonal_secundaria,soma = 0,count = 0,aux = 1;
  for (i = t-1; i > (t/2); i--,aux++) {
    for (j = aux,diagonal_secundaria = t-j; j < diagonal_secundaria; j++) {
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
  resposta = soma_area_inferior (M,12,&divisor_da_media);

  if (soma_ou_media == 'S') {
    printf("%.1lf\n", resposta);
  }else if (soma_ou_media == 'M') {
    printf("%.1lf\n", (resposta/divisor_da_media));
  }
  //printf("%d\n", divisor_da_media);
  return 0;
}
