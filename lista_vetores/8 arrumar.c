#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
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

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void maior_por_primeiro (int v[],int n) {
  troca (&v[0],&v[maior_indice (v,n)]);
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int tamanho,maior_val;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  for (int i = tamanho; i > 0; i--) {
    maior_por_primeiro (v,i);
    print_vet (v,i);
    printf("\n--\n   %d\n",i);
  }
  print_vet (v,tamanho);
  return 0;
}
