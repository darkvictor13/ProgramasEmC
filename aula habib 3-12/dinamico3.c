#include <stdio.h>
#include <stdlib.h>

int load (char nome_arq[], float **p, int *t) {
  float *aux;
  FILE *arch = fopen(nome_arq, "r");
  if (!arch) return 0;

  *p = malloc(1000 * sizeof(float));
  aux = *p;
  
  for (; !feof(arch); aux++) {
    fscanf(arch, "%f", aux);
  }

  *t = aux - *p;
  *p = realloc(*p, *t * sizeof(float));
  return 1;
}

float soma(float v[], int t) {
  float soma, *fim = (v + t);

  for (soma = 0; v < fim; v++) {
    soma += *v;
  }
  return soma;
}

int main () {
  float *vx; int nx;
  if (! load ("dados.txt", &vx, &nx)) {
    printf("nao foi possivel ler o arquivo!\n");
  }
  printf("soma = %f\n", soma(vx,nx));
  return 0;
}