#include "bibliotecas.h"

int o_proximo_eh_maior (int v[],int n) {
  int count = 0;
  for (int i = 0; i < n - 1; i++) {// o ultimo n tem proximo
    if (v[i] < v[i+1]) {
      count ++;
    }
  }
  return count;
}

int main () {
  int v[10],tamanho,resposta;
  scanf("%d", &tamanho);
  preenche_vet (v,tamanho);
  resposta = o_proximo_eh_maior (v,tamanho);
  printf("%d\n", resposta);
  return 0;
}
