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

int * localDeMemoriaDoMaior(int *v,int t) {
  int *p = (v + t),*maior = v;

  for (; v < p; v++) {
    if (*maior < *v) {
      maior = v;
    }
  }
  return maior;
}

void excluiOMaior(int dest[],int td,int org[],int to) {
  copiaVet(dest,org,td);
  troca (localDeMemoriaDoMaior(dest,td),(dest + to));
}

void printaVet(int v[],int t) {
  int *p = (v + t);

  for (;v < p; v++) {
    printf ("[%d]",*v);
  }
  printf("\n");
}

int main () {
  int v_entrada[maxtam],t_v_entrada;

  preencheVet(v_entrada,t_v_entrada);

  int v_excluido[t_v_entrada],t_v_saida = t_v_entrada - 1;

  excluiOMaior(v_excluido,t_v_saida,t_v_entrada,t_v_entrada);
  printaVet(v_excluido,t_v_saida);
  return 0;
}