#include "bibliotecas.h"

void vet_sem_repeticao (int v1[],int n1,int v2[],int *n2) {
  int i,j;//i count 1,jcount 2;
  *n2 = 1;
  v2[0] = v1[0];
  for (i = 1,j = 1; i < n1; i++) {
    if (num_nao_apareceu (v1[i],*n2,v2)) {
      v2[j] = v1[i];
      j++;
      (*n2)++;
    }
  }
}

int main () {
  int v_original[20],v_aux[20],tamanho_o,tamanho_aux;
  scanf("%d", &tamanho_o);
  preenche_vet (v_original,tamanho_o);
  vet_sem_repeticao(v_original,tamanho_o,v_aux,&tamanho_aux);
  printf("--\n");
  print_vet (v_aux,tamanho_aux);
  return 0;
}
