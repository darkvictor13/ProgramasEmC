#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void limpa_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    v[i] = 0;
  }
}
