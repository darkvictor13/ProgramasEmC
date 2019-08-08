#include <stdio.h>
//nao esta fazendo a comparacao com a 1 casa

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

int maior_indice (int v[],int n,int aux) {
  int i,marcado = 0;
  for (i = aux; i < n; i++) {
    if (v[marcado] < v[i]) {
      marcado = i;
    }
  }
  return marcado;
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int tamanho,maior_i,i;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  for (i = 0; i < tamanho; i++) {
    maior_i = maior_indice (v,tamanho,i);
    troca (&v[maior_i],&v[i]);
  }
  printf("--\n");
  print_vet (v,tamanho);
  return 0;
}
