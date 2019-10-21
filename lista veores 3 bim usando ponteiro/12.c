#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  int *final;
  scanf("%d",t);

  for (final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

void printaVet(int v[],int t) {
  int *p = (v + t);

  for (;v < p; v++) {
    printf ("[%d]",*v);
  }
  printf("\n");
}

void excluiPares (int dest[],int *tdest,int org[],int torg) {
  int *p = (org + torg),*salva_inicio_dest = dest;

  for (;org < p; org++) {
    if (*org % 2) {
      *dest = *org;
      dest++;
    }
  }
  *tdest = (dest - salva_inicio_dest);
}

int main () {
  int v1[maxtam],t1,v2[maxtam],t2;
  preencheVet(v1,&t1);
  excluiPares(v2,&t2,v1,t1);
  printaVet(v2,t2);
  return 0;
}