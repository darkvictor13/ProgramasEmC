#include "bibliotecas.h"

int main () {
  int tamanho;
  scanf("%d", &tamanho);
  int v1[tamanho],v2[tamanho];
  preenche_2vet_ao_mesmo_tempo (v1,v2,tamanho);
  printf("%lld\n", soma_dos_produtos (v1,v2,tamanho) );
  return 0;
}
