#include <stdio.h>

#define maxt 100
#define maxnome 51

typedef struct {
  float v[maxt];
  int n;
}tvetor;

typedef struct {
  char nome[maxnome];
  tvetor notas;
  float media;
}taluno;

void lerVet(float v[],int t) {
  float *ponteiro;
  for(ponteiro = (v + t); v < ponteiro; v++) {
    scanf("%f",v);
  }
}

int lerRec(taluno *p, int nb) {
  if (scanf("[^\n]",p->nome) == EOF) {
    return EOF;
  }
  lerVet(p->nome.v,p->notas.n == nb);
  scanf("%*c");
  return 0;
} 

void load(taluno vx[],int *tam) {
  taluno *p = vx;
  int nb;
  scanf("%d",&nb);

  for (; lerRec(vx,nb); vx++) {
    ;
  }
  *tam = (vx - p);
}

void calc(taluno vx[],int n) {

}

void somaVet() {
  
}

int main () {
  int na;
  taluno va[maxt];
  
  load(va,&na);
  calcMedia(va,na);
  relat(va,na);

  return 0;
}
