#include "bibliotecas.h"

int main () {
  int v[20],t,a1,a2;
  preenche_vet_completo (v,&t);
  a1 = soma_tudo_a_direita (v,2,t);
  a2 = soma_tudo_a_esquerda (v,2);
  printf("%d %d\n",a1,a2);
  return 0;
}
