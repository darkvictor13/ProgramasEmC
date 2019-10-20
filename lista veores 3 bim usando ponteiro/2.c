#include <stdio.h>

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void printaInv(int *v,int t) {
  int *p = (v + t - 1);

  for (;p >= v; p--) {
    printf("%d\n",*p);
  }
}

int main () {
  int vet[100],tam;

  preencheVet(vet,&tam);
  printaInv(vet,tam);
  return 0;
}