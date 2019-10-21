#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  int *final;
  scanf("%d",t);

  for (final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void troca(int *a,int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void copiaVet(int dest[],int org[],int t) {
  int *p;
  for (p = (org + t); org < p; org++,dest++) {
    *dest = *org;
  }
}

void permuta2A2(int dest[],int org[],int t) {
  int *p;

  copiaVet(dest,org,t);
  p = (dest + t);

  for (dest++; dest < p; dest += 2) {
    troca(dest,(dest - 1));
  }
}

void printaVet(int v[],int t) {
  int *p = (v + t);

  for (;v < p; v++) {
    printf ("[%d]",*v);
  }
  printf("\n");
}

int main () {
  int v1[maxtam],v2[maxtam],tam;
  preencheVet(v1,&tam);
  permuta2A2(v2,v1,tam);
  printaVet(v2,tam);
  return 0;
}