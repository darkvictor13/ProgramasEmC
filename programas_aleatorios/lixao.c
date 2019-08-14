#include <stdio.h>
#include "vet.h"

int main () {
  int tamanho;
  printf("Quantos lixos vc quer no seu vetor?\n");
  scanf("%d", &tamanho);
  int v[tamanho];
  print_vet (v,tamanho);
  return 0;
}
