#include <stdio.h>

void preencher_vetor_quadrados (int v[],int x) {
  int i,j;
  for (i = 0,j = 2; j <= x; i++,j += 2) {
    v[i] = j * j;
  }
}

void printa_vetor (int v[],int n) {
  int i,j;
  for (i = 0,j = 2; j <= n; i++,j += 2) {
    printf("%d^2 = %d\n",j,v[i]);
  }
  printf("\n");
}

int main () {
  int v[1000],num;
  scanf("%d",&num);
  preencher_vetor_quadrados (v,num);
  printa_vetor (v,num);
  return 0;
}
