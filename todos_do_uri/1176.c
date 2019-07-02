#include <stdio.h>

void preencher_fibonacci (unsigned long long int v[]) {
  int i = 2;
  v[0] = 0;
  v[1] = 1;
  for (; i <= 60; i++) {
    v[i] = v[i-1] + v[i-2];
  }
}

void printa_vetor (unsigned long long int v[],int x) {
  printf("Fib(%d) = %llu\n",x, v[x]);
}


int main () {
  unsigned long long int v[61];int num_de_loop,lugar_vetor;
  preencher_fibonacci (v);
  scanf("%d", &num_de_loop);
  for (; num_de_loop > 0; num_de_loop --) {
    scanf("%d", &lugar_vetor);
    printa_vetor (v,lugar_vetor);
  }
  return 0;
}
