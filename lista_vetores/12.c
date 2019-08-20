#include "bibliotecas.h"

void salva_os_impares_em_um_novo_vet (int v1[],int v2[],int *n2,int n1) {
  *n2 = 0;
  for (int i = 0; i < n1; i++) {
    if (eh_par(v1[i]) == 0) {
      v2[*n2] = v1[i];
      (*n2)++;
    }
  }
}

int main () {
  int v_original[20],v_aux[20],tamanho_o,tamanho_aux;
  scanf("%d", &tamanho_o);
  preenche_vet (v_original,tamanho_o);
  salva_os_impares_em_um_novo_vet (v_original,v_aux,&tamanho_aux,tamanho_o);
  printf("--\n");
  print_vet (v_aux,tamanho_aux);
  return 0;
}
