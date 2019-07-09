#include <stdio.h>

void sequencia_f (int v[]) {
  int i = 0,j = 1;
  for (; i < 12; i++,j++) {
    v[i] = j;
  }
}

int fatorial (int v[],int num) {
  int i,resul = 1;
  for (i = 0; i < num; i++) {
    resul *= v[i];
  }
  return resul;
}

int main () {
  int n,v[13];
  sequencia_f (v);
  scanf("%d", &n);
  printf("%d\n",fatorial (v,n));
  return 0;
}
