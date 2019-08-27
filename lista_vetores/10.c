#include "bibliotecas.h"

int main () {
  int tamanho,i_marcado;
  scanf("%d", &tamanho);
  int v[tamanho],v_resposta[tamanho-1];
  preenche_vet (v,tamanho);
  i_marcado = maior_indice (v,tamanho);
  elimina_maior_menos_burro (v,v_resposta,tamanho,i_marcado);
  printf("--\n");
  print_vet (v_resposta,tamanho-1);
  return 0;
}
