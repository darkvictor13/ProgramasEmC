#include <stdio.h>

int eh_par (int n) {
  if (n % 2 == 0) {
    return 1;
  }
  return 0;
}

int eh_impar (int n) {
  if (n % 2 == 0) {
    return 0;
  }
  return 1;
}
void preenche_vet_15 (int v[]) {
  int i;
  for (i = 0; i < 15; i++) {
    scanf("%d", &v[i]);
  }
}
