#include <stdio.h>

void preencher_vetor (float v[]) {
  int i;
  for (i = 0; i < 100; i++) {
    scanf("%f", &v[i]);
  }
}

void printa_vetor (float v[]) {
  int i;
  for (i = 0; i < 100; i++) {
    if (v[i] <= 10) {
      printf("A[%d] = %.1f\n",i,v[i]);
    }
  }
}

int main () {
  float v[100];
  preencher_vetor (v);
  printa_vetor (v);
  return 0;
}
