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

int numApareceNoVet(int v[],int t,int num) {
  for (int *p = (v + t); v < p; v++) {
    if (*v == num) {
      return 1;
    }
  }
  return 0;
}

int excluiOsRepitidos (int dest[],int *tdest,int org[],int torg) {
  int *inicio = org,*fim = (org + torg);
  int *salva_inicio_dest = dest;

  for (; org < fim; org++) {
    if (!numApareceNoVet(inicio,(org - inicio),*org)) {
      *dest = *org;
      dest++;
    }
  }
  *tdest = (dest - salva_inicio_dest);
}

int main () {
  int v1[maxtam],t1,v2[maxtam],t2;
  preencheVet(v1,&t1);
  excluiOsRepitidos(v2,&t2,v1,t1);
  printaVet(v2,t2);
  return 0;
}