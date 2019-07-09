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

int main () {
  float nota1,nota2;
  ate_a_nota_dar_certo (&nota1);
  ate_a_nota_dar_certo (&nota2);
  printf("media = %.2f\n",calcula_nota(nota1,nota2));
  return 0;
}
