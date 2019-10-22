#include <stdio.h>

#define maxtam 100

void preencheVet(int *v,int *t) {
  int *final;
  scanf("%d",t);

  for (final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void copiaVet(int *dest,int *org,int t) {
  int *p;
  for (p = (org + t); org < p; org++,dest++) {
    *dest = *org;
  }
}

void troca(int *a,int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void achaOMenorEJogaNoFinal(int *v,int t) {
  int *menor,*p;

  for (p = v,menor = v; p < (v + t); p++) {
    if (*p < *menor) {
      menor = p;
    }
  }
  //printf("ultimo = %d\nmenor = %d\n",*(v + t - 1),*(menor));
  troca ((v + t - 1),(menor));
}

void ordenaVet(int *dest,int *org,int t) {
  copiaVet(dest,org,t);
  //printf("copiei\n");
  for (; t > 1; t--) {
    achaOMenorEJogaNoFinal (dest,t);
    //printf("tam do vet = %d",t);
  }
}

void printaVet(int *v,int t) {
  int *p = (v + t);

  for (;v < p; v++) {
    printf ("[%d]",*v);
  }
  printf("\n");
}

int main () {
  int v1[maxtam],v2[maxtam],tam;
  preencheVet(v1,&tam);
  ordenaVet(v2,v1,tam);
  printaVet(v2,tam);
  return 0;
}