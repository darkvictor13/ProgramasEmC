#include "bibliotecas.h"

int main () {
  int v[10],tamanho;
  preenche_vet_completo (v,&tamanho);
  inv_vet (v,tamanho);
  print_vet (v,tamanho);
  return 0;
}
