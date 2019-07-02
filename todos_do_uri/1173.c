#include <stdio.h>

void preencher_vetor (int v[],int n) {
  int i;
  v[0] = n;
  for (i = 1; i < 10; i++) {
    v[i] = v[i-1] * 2;
  }
}

void print_vetor (int v[]) {
  int i;
  for (i = 0; i < 10; i++) {
    printf("N[%d] = %d\n", i, v[i]);
  }
}

int main () {
  int x[10],num;
  scanf("%d", &num);
  preencher_vetor (x,num);
  print_vetor (x);
  return 0;
}
