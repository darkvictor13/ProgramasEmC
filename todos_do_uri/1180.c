#include <stdio.h>

void preencher_vetor (int v[],int x) {
  int i,n;
  for (i = 0; i < x; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
}

int qual_menor (int v[],int x,int *muda_o_val_da_posicao) {
  int i = 0,menor = v[0];
  for (; i < x; i++) {
    if (v[i] < menor) {
      menor = v[i];
      *muda_o_val_da_posicao = i;
    }
    printf("%d\n", *muda_o_val_da_posicao);
  }
  return menor;
}

int main () {
  int v[100],tamanho_v,posicao,o_menor;
  scanf("%d", &tamanho_v);
  preencher_vetor (v,tamanho_v);
  o_menor = qual_menor (v,tamanho_v,&posicao);
  printf("Menor valor: %d\nPosicao: %d\n",o_menor , posicao);
  return 0;
}
