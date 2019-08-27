#include "bibliotecas.h"

int main () {
  int v_original[20],v_aux[20],tamanho_o,tamanho_aux;
  scanf("%d", &tamanho_o);
  preenche_vet (v_original,tamanho_o);
  salva_os_impares_em_um_novo_vet (v_original,v_aux,&tamanho_aux,tamanho_o);
  printf("--\n");
  print_vet (v_aux,tamanho_aux);
  return 0;
}
