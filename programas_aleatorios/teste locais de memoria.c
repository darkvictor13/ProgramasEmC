#include <stdio.h>
#include "vet.h"

int main () {
  int tamanho;
  printf("Qual o tamanho do seu vetor?\n");
  scanf("%d", &tamanho);
  int v[tamanho];
  print_vet_locais_de_memoria (v,tamanho);
  return 0;
}
