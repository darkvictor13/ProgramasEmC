#include <stdio.h>

void preencher_vetor (int v[]) {
  int i,n;
  for (i = 0; i < 20; i++) {
    scanf("%d", &n);
    v[19-i] = n;
  }
}

void printa_vetor (int v[]) {
  int i;
  for (i = 0; i < 20; i++) {
    printf("N[%d] = %d\n",i,v[i]);
  }
}

int main () {
  int v[20];
  preencher_vetor (v);
  printa_vetor (v);
  return 0;
}
