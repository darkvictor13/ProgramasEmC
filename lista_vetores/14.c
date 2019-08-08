#include <stdio.h>

void preenche_vet (int v1[],int v2[],int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &v1[i],&v2[i]);
  }
}

long long int soma_dos_produtos (int v1[],int v2[],int n) {
  int soma = 0;
  for (int i = 0; i < n; i++) {
    soma += (v1[i] * v2[i]);
  }
  return soma;
}

int main () {
  int tamanho;
  scanf("%d", &tamanho);
  int v1[tamanho],v2[tamanho];
  preenche_vet (v1,v2,tamanho);
  printf("%lld\n", soma_dos_produtos (v1,v2,tamanho) );
  return 0;
}
