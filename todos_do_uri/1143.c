#include <stdio.h>
#include <math.h>

void quadrado_cubo (int n) {
  int q;long long int c;
  q = pow (n,2);
  c = pow (n,3);
  printf("%d %d %lld\n",n,q,c);
}

void resposta (int n_linhas) {
  int i;
  for (i = 1; i <= n_linhas; i++) {
    quadrado_cubo (i);
  }
}

int main () {
  int x;
  scanf("%d", &x);
  resposta (x);
  return 0;
}
