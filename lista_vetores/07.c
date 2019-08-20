#include "bibliotecas.h"

void troca_maior_com1 (int v[],int indice_do_maior) {
  troca (&v[0],&v[indice_do_maior]);
}

int main () {
  int v[20],cas,ind_maior_num_vet;
  preenche_vet_completo (v,&cas);
  ind_maior_num_vet = maior_indice (v,cas);
  troca_maior_com1 (v,ind_maior_num_vet);
  print_vet (v,cas);
  return 0;
}
