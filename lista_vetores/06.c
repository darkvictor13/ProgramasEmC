#include "bibliotecas.h"

int main () {
  int v[20],n;
  preenche_vet_completo (v,&n);
  printf("%d\n", maior_indice (v,n) );
  return 0;
}
