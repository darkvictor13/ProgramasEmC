#include "bibliotecas.h"

int main () {
  int tamanho,maior_i,menor_i;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  maior_i = maior_indice (v,tamanho);
  menor_i = menor_indice (v,tamanho);
  troca (&v[0],&v[menor_i]);//ele nao consegue realizar essa troca
  troca (&v[(tamanho-1)],&v[maior_i]);
  vem_1_para_frente (v,tamanho);
  printf("--\n");
  print_vet (v,(tamanho-2));
  return 0;
}
