#include <stdio.h>

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

int somaVet(int v[],int t) {
  int soma,*p = (v + t);

  for (soma = 0; v < p; v++) {
    soma += *v;
  }
  return soma;
}

int main () {
  int vet[100],soma,tam = 1;

  while (tam > 0) {
    preencheVet(vet,&tam);
    soma = somaVet(vet,tam);
    printf("soma = %d\n",soma);
  }
  return 0;
}