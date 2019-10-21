#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  int *final;
  scanf("%d",t);

  for (final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void excluiULtimoEPrimeiro(int *dest,int *tam_dest,int *org,int tam_org) {
  int *final_vet = (org + tam_org - 1);

  *tam_dest = (tam_org - 2);

  for(org++; org < final_vet; org++,dest++) {
    *dest = *org;
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
  int v1[maxtam],t1,v2[maxtam],t2;
  preencheVet(v1,&t1);
  excluiULtimoEPrimeiro(v2,&t2,v1,t1);
  printaVet(v2,t2);
  return 0;
}