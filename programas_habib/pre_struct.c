#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define PESO 0
#define ALTURA 1
#define IMC 2
#define maxl 100
#define maxc 100

void ler(char *n[maxc],float *mat[3],int *t) {
  scanf ("%d",t);
  
}

int main () {
  char nome[maxl][maxc];
  float matriz[maxl][3];
  int linhas_usadas;

  ler(nome,matriz,&linhas_usadas);
  calcImc(matriz,linhas_usadas);
  relat(nome,matriz,linhas_usadas);
  return 0;
}