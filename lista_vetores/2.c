#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void printa_vet_inv (int v[],int n) {
  for (int i = n - 1; i >= 0; i--) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int casos,v[100];
  scanf("%d", &casos);
  preenche_vet (v,casos);
  printa_vet_inv (v,casos);
  return 0;
}
