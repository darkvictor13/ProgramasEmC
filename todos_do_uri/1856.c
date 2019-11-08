#include <stdio.h>

void lerVet (int v[],int *t) {
  scanf ("%d",t);
  int *p = (v + *t);

  for (; v < p; v++) {
    scanf("%d",v);
  }
}

int achaOMenor (int v[],int t) {
  int *local_do_menor = v;
  int *fim = (v + t);
  int *inicio = v;

  for (v++; v < fim; v++) {
    if (*v < *local_do_menor) {
      local_do_menor = v;
    }
  }
  return (local_do_menor - inicio);
}

int main () {
  int v[100],tam;
  lerVet(v,&tam);
  printf("%d\n",achaOMenor(v,tam) + 1);
  return 0;
}