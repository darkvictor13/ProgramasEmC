#include "bibliotecas.h"

void transcreve_vet (int v1[],int v2[],int t1) {
  for (int i = 0; i < t1 - 1; i++) {
    v2[i] = v1[i+1];
  }
}

int main () {
  int tam_original;
  scanf("%d", &tam_original);
  int v[tam_original], tam_resp = tam_original - 2, v_resp[(tam_resp)];
  preenche_vet (v,tam_original);
  transcreve_vet (v,v_resp,tam_original);
  printf("--\n");
  print_vet (v_resp,tam_resp);
  return 0;
}
