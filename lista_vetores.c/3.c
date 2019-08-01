#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void inv_vet (int v[],int n) {
  int i,j;
  for (i = 0,j = n-1; i < j; i++,j--) {
    troca (&v[i],&v[j]);
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int v[10],tamanho;
  scanf("%d", &tamanho);
  preenche_vet (v,tamanho);
  inv_vet (v,tamanho);
  printf("--\n");
  print_vet (v,tamanho);
  return 0;
}
