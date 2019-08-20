#include "bibliotecas.h"

void printando (int i) {
  if (i == 1) {
    printf("\nsim\n");
  } else {
    printf("\nnao\n");
  }
}

int main() {
  int v1[20],v2[20],tam1,tam2,inicio_subseq,aux;
  preenche_vet_completo (v1,&tam1);
  preenche_vet_completo (v2,&tam2);
  inicio_subseq = onde_comeca_a_subsequencia (v1,tam1,v2[0]);
  aux = subsequencia_eh_valida (v1,v2,tam2,inicio_subseq);
  printando (aux);
  return 0;
}
