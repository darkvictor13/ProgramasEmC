#include <stdio.h>

void preencher_vetor (int v[]) {
  int i,n;
  for (i = 0; i < 10; i++) {
    scanf("%d", &n);
    if (n <= 0) {
      v[i] = 1;
    }else {
    v[i] = n;
    }
   }
}

void print_vetor (int v[]) {
  int i;
  for (i = 0; i < 10; i++) {
    printf("X[%d] = %d\n", i, v[i]);
  }
}

int main () {
  int x[10];
  preencher_vetor (x);
  print_vetor (x);
  return 0;
}
