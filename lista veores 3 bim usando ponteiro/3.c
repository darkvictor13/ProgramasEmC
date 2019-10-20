#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void inverteVet(int *dest,int *org,int t) {
  int *p = (org + t - 1);

  for (;p >= org; p--,dest++) {
    *dest = *p;
  }
}

void printaVet(int *v,int t) {
  int *final = (v + t);

  for (;v < final; v++) {
    printf("%d\n",*v);
  }
}

int main () {
  int vet_org[100],vet_dest[100],tam;

  preencheVet(vet_org,&tam);
  inverteVet(vet_dest,vet_org,tam);
  printaVet(vet_dest,tam);
  return 0;
}