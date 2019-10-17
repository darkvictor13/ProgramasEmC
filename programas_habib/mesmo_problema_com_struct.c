#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define maxl 100

typedef struct A{
  float peso,alt,imc;
  char nome[maxl];
}pessoa;

void ler(pessoa *v,int *t) {
  int i;

  for (i = 0; strcmp(gets(v[i].nome),"fim"); i++) {
    scanf("%f %f%*c", &v[i].peso, &v[i].alt);
  }
  *t = i;
}

void calc(pessoa *v,int t) {
  pessoa *p = (v + t);

  for (; v < p; v++) {
    (*v).imc = ((*v).peso/((*v).alt * (*v).alt));
  }
}

int main () {
  pessoa vp[maxl];
  int i,t;

  ler(vp,&t);
  calc(vp,t);

  for (int i = 0; i < t; i++) {
    printf("|%f| ",vp[i].imc);
  }
  //relat(vp,t);

  return 0;
}
