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

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int maior_indice (int v[],int n) {
  int i,marcado = 0;
  for (i = 1; i < n; i++) {
    if (v[marcado] < v[i]) {
      marcado = i;
    }
  }
  return marcado;
}

int main () {
  int tamanho,maior_val;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  for (int i = 0; i < tamanho; i++) {
    for (int j = i + 1; j < tamanho; j++) {
      maior_val = v[i];
      if (maior_val < v[j]) {
        maior_val = v[j];
        troca (&v[i],&v[j]);
      }
    }
  }
  printf("---\n");
  print_vet (v,tamanho);
  return 0;
}
