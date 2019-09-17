#include <stdio.h>

void preenche_matriz (float m[][100],int tam) {
  int i,j;
  for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
      scanf("%d", &m[i][j]);
      //m[i][j] = 1;
    }
  }
}

int soma_acima_da_diagonal_principal (int m[][100],int tam,int *casos) {
  int i,j,count = 0,aux = 0;
  for (i = 0; i < tam; i++) {
    for (j = i+1; j < tam; j++) {
      count += m[i][j];
      aux++;
    }
  }
  *casos = aux;
  return count;
}

int main () {
  float M[12][12],resposta;
  char soma_ou_media;
  int divisor = 0;
  scanf("%c", &soma_ou_media);
  preenche_matriz (M,12);
  resposta = soma_acima_da_diagonal_principal(M,12,&divisor);
  if (soma_ou_media == 'S') {
    printf("%.1f\n", resposta);
  }else if (soma_ou_media == 'M'){
    printf("%.1f\n", (resposta/divisor));
    //printf("%d\n", divisor);
  }
}
