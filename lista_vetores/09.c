#include "bibliotecas.h"

int main () {
  int v[20],casos;
  preenche_vet_completo (v,&casos);
  troca_2em2_otimizado (v,casos);
  print_vet (v,casos);
  return 0;
}
