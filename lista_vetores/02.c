#include "bibliotecas.h"

int main () {
  int casos,v[100];
  scanf("%d", &casos);
  preenche_vet (v,casos);
  printa_vet_inv (v,casos);
  return 0;
}
