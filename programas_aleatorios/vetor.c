#include <stdio.h>

void vetor_impares (int v[]) {
  int i,a;
  for (i = 0,a = 1; a < 1000; i++,a += 2) {
    v[i] = a;
  }
}

void printa_vetor (int v[]) {
  for (int i = 0; i < 500; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int v[500];
  vetor_impares (v);
  printa_vetor (v);
  return 0;
}
