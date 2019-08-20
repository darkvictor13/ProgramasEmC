#include "bibliotecas.h"

int main () {
  int tamanho,maior_i,i;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  for (i = 0; i < tamanho; i++) {
    maior_i = maior_indice_podendo_alterar_onde_inicia (v,tamanho,i);
    troca (&v[maior_i],&v[i]);
  }
  printf("--\n");
  print_vet (v,tamanho);
  return 0;
}
