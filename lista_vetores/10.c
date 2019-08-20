#include "bibliotecas.h"

void elimina_maior (int v[],int vx[],int n,int marcado) {
  int i;
  for (i = marcado; i < n-1; i++) {
    v[i] = v[i+1];
  }
  for (i = 0; i < n-1; i++) {
    vx[i] = v[i];
  }
}

int main () {
  int tamanho,i_marcado;
  scanf("%d", &tamanho);
  int v[tamanho],v_resposta[tamanho-1];
  preenche_vet (v,tamanho);
  i_marcado = maior_indice (v,tamanho);
  elimina_maior (v,v_resposta,tamanho,i_marcado);
  printf("--\n");
  print_vet (v_resposta,tamanho-1);
  return 0;
}
