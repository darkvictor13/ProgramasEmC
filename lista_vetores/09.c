#include "bibliotecas.h"

void troca_2em2 (int v[],int n) {
  int i;
  if (n%2 == 0) {
    for (i = 0; i < n; i+=2) {
      troca (&v[i],&v[i+1]);
    }
  }else {
    for (i = 0; i < n - 1; i+=2) {
      troca (&v[i],&v[i+1]);
    }
  }
}

int main () {
  int v[20],casos;
  preenche_vet_completo (v,&casos);
  troca_2em2 (v,casos);
  print_vet (v,casos);
  return 0;
}
