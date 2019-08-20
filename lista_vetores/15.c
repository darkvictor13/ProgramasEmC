#include "bibliotecas.h"

void transcreve_vet (int v1[],int v2[],int vresposta[],int n) {
  int i,j;
  for (i = 0,j = n-1; i < j; i++,j--) {
    vresposta[i] = v1[i];
    vresposta[j] = v2[i];
  }
}

int main () {
  int tamanho;
  scanf("%d", &tamanho);
  int v1[tamanho],v2[tamanho],vresp[tamanho*2];
  preenche_2vet_ao_mesmo_tempo (v1,v2,tamanho);
  transcreve_vet (v1,v2,vresp,tamanho*2);
  print_vet (vresp,tamanho*2);
  return 0;
}
