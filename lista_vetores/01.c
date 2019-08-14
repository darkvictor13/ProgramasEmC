#include "bibliotecas.h"
//#include "../minhas bibliotecas/vet.h

int main () {
  int casos,v[100],soma;
  preenche_vet_completo (v,&casos);
  soma = soma_vet (v,casos);
  printf("%d\n", soma);
  return 0;
}
