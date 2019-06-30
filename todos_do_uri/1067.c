#include <stdio.h>

int preencher_vetor_impares (int v[],int n) {
  int i,j = 0;
  for (i = 0; j < n; i++,j += 2) {
    v[i] = 1 + j;
  }
  return i;
}

void printa_vetor (int v[],int x) {
  int i;
  for (i = 0; i < x; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int tamanho_vetor, v[501], num, aux;
  scanf("%d", &num);
  aux = preencher_vetor_impares(v,num);
  printa_vetor (v,aux);
  return 0;
}
