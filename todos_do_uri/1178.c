#include <stdio.h>

void preencher_metades (double v[],double n) {
  int i;
  v[0] = n;
  for (i = 1; i < 100; i++) {
    v[i] = (v[i-1]/2);
  }
}

void printa_vetor (double v[]) {
  int i;
  for (i = 0; i < 100; i++) {
    printf("N[%d] = %.4lf\n",i,v[i]);
  }
}

int main () {
  double x,v[100];
  scanf("%lf", &x);
  preencher_metades (v,x);
  printa_vetor (v);
  return 0;
}
