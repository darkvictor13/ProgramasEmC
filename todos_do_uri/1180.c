#include <stdio.h>

void preencher_vetor (int v[],int x) {
  int i,n;
  for (i = 0; i < x; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
}

int qual_menor (int v[],int x) {
  int i = 0,menor = v[0],posicao = 0;
  for (; i < x; i++) {
    if (v[i] < menor) {
      menor = v[i];
      posicao = i;
    }
  }
  printf("Menor valor: %d\nPosicao: %d\n",menor , posicao);
}

int main () {
  int v[1001],tamanho_v;
  scanf("%d", &tamanho_v);
  preencher_vetor (v,tamanho_v);
  qual_menor (v,tamanho_v);
  return 0;
}
