#include <stdio.h>

#define max 100

void preencheMatriz (int m[][max],int *t) {
  int i,j;

  scanf ("%d",t);

  for (i = 0; i < *t; i++) {
    for (j = 0; j < *t; j++) {
      scanf ("%d",&m[i][j]);
    }
  }
}

int numApareceNoVetComparacao(int num,int v[],int t_v) {
  int *p = (v + t_v);

  for (; v < p; v++) {
    if (*v == num) {
      return 1;
    }
  }
  return 0;
}

int linhaEstaCerta (int *v,int vet_comp[],int t) {
  int *ponteiro = (v + t);

  for (; v < ponteiro; v++) {
    if (!numApareceNoVetComparacao(*v,vet_comp,t)) {
      return 0;
    }
  }
}

int quadradoLatino (int m[][max],int t) {
  int i,vet_comp [t];

  for (i = 0; i < t; i++) {
    vet_comp[i] = i+1;
  }
  
  for (i = 0; i < t; i++) {
    if (!linhaEstaCerta (m[i],vet_comp,t)) {
      return 0;
    }
  }
  return 1;
} 

int main () {
  int m[max][max],t = 1;

  while (t) {
    preencheMatriz(m,&t);
    if (quadradoLatino(m,t)) {
      printf("eh quadrado latino\n");
    }else {
      printf("nao eh quadrado latino\n");
    }
  }
  return 0;
}