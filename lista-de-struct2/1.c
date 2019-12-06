#include <stdio.h>

#define MAXV 100
#define MAXN 25
#define MAXS 50

typedef struct {
  float vet[MAXV];
  int tam;
  float media;
  float desvio_padrao;
}s_vetor;

typedef struct {
  //coeficientes da formula dada por y = ax + b
  float a;
  float b;
  float r;
}s_reta;

typedef struct {
  char nome[MAXN];
  s_vetor vx;
  s_vetor vy;
}s_serie;

void entradaDeDados(char nome_arq[],s_serie v[],int *n) {
  s_serie *inicio = v;
  FILE *arch = fopen (nome_arq,"r");

  if (arch == NULL) {
    printf("arquivo passado invalido!!\n");
    return 0;
  }

  for (; !feof(arch); v++) {
    fscanf(arch, "%[^\n]%*c",v->nome);
  }
}


int main (int argc,char *argv[]) {
  s_serie vs[MAXS];
  int qnt_series;
  entradaDeDados((argv + 1),vs,&qnt_series);
  calc(vs,qnt_series);
  escreveNoArqRelat("relatorio.txt",vs,qnt_series);
  return 0;
}