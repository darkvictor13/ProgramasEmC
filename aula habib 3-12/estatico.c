#include <stdio.h>

int lerFloatsDoArquivo(char nome_arq[], float v[], int *t) {
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
  float vet[1000];
  int tam;
  lerFloatsDoArquivo("dados.txt", vet, &tam);
  printf("soma = %f\n", soma(vet,tam));
}