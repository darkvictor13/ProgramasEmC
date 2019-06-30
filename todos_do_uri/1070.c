#include <stdio.h>

void preencher_vetor_impares (int v[],int n) {
  int i,j;
  if (n % 2 == 1) {
    for (i = 0,j = 0; i < 6; i++,j += 2) {
      v[i] = n + j;
    }
  }
  if (n % 2 == 0) {
    for (i = 0,j = 1; i < 6; i++,j += 2) {
      v[i] = n + j;
    }
  }
}

void printa_vetor (int v[]) {
  int i;
  for (i = 0; i < 6; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int num,v[6];
  scanf("%d", &num);
  preencher_vetor_impares (v,num);
  printa_vetor (v);
  return 0;
}
