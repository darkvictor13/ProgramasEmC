#include <stdio.h>
#include <stdlib.h>

int load(char nome_arq[], float v[], int *t) {
  float *inicio = v;

  FILE *arch = fopen(nome_arq,"r");
  if (!arch) return 0;

  for (; fscanf(arch, "%f", v) != EOF; v++) {
    ;
  }

  *t = v - inicio;
  fclose(arch);
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
  float *vet; int tam;
  
  vet = malloc(1000 * sizeof(float));
  load ("dados.txt", vet, &tam);
  vet = realloc(vet, tam * sizeof(float));
  printf("soma = %f\n", soma(vet,tam));
  
  free(vet);
  return 0;
}