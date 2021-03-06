#include <stdio.h>

int nota_valid (float x) {
  if (x < 0 || x > 10) {
    return 0;
  }
  return 1;
}

void ate_a_nota_dar_certo (float *n) {
  int aux;
  scanf("%f", n);
  aux = nota_valid (*n);
  while (aux == 0) {
    printf("nota invalida\n");
    scanf("%f", n);
    aux = nota_valid (*n);
  }
}

float calcula_nota (float n1,float n2) {
  return (n1 + n2)/2;
}

void acerta_continuacao (int * x) {
  while (*x != 1 && *x != 2) {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", x);
  }
}
  int continua_o_codigo (int x) {
  if (x == 1) {
    return 1; //continua o codigo
  }else if (x == 2) {
    return 0; // para o codigo
  }
}

int main () {
  float n1,n2,media;int continua;
  ate_a_nota_dar_certo (&n1);
  ate_a_nota_dar_certo (&n2);
  media = calcula_nota (n1,n2);
  printf("media = %.2f\n", media);
  while (1) {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &continua);
    acerta_continuacao (&continua);
    if (continua_o_codigo (continua) == 1) {
      ate_a_nota_dar_certo (&n1);
      ate_a_nota_dar_certo (&n2);
      media = calcula_nota (n1,n2);
      printf("media = %.2f\n", media);
    }else return 0;
  }
  return 0;
}
