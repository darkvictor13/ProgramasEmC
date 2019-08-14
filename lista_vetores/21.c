#include "bibliotecas.h"

void limpa_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    v[i] = 0;
  }
}

int eh_palandrimo (int v[],int n) {
  int i,j;
  for (i = 0,j = n-1; i <= j; i++,j--) {
    if (v[i] != v[j]) {
      return 0;
    }
  }
  return 1;
}

void printa_resposta_bonito (int v[],int n) {
  int aux = eh_palandrimo (v,n);
  if (aux == 1) {
    printf("Sim\n");
  }else {
    printf("Nao\n");
  }
}

int main () {
  int v[30],tamanho;
  limpa_vet (v,30);
  while (1) {
    scanf("%d", &tamanho);
    if (tamanho < 1) {
      break;
    }
    preenche_vet (v,tamanho);
    printa_resposta_bonito (v,tamanho);
    limpa_vet (v,tamanho);
  }
  return 0;
}
