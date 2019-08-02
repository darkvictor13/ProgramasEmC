#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

int soma_vet (int v[],int n) {
  int i,soma = 0;
  for (i = 0; i < n; i++) {
    soma += v[i];
  }
  return soma;
}

int main () {
  int casos,v[100],soma;
  scanf("%d", &casos);
  preenche_vet (v,casos);
  soma = soma_vet (v,casos);
  printf("%d\n", soma);
  return 0;
}
