#include <stdio.h>

void preencher_vetor_teste (int v[]) {
  int n,i;
  for (i = 0; i < 5; i++) {
    scanf("%d", &n);
    v[i] = n;
  }
}

int eh_impar (int v[]){
  int impares = 0,i;
  for (i = 0; i < 5; i++) {
    if (v[i]%2 == 1) {
      impares ++;
    }
  }
  return impares;
}

int eh_par (int v[]) {
  int pares = 0,i;
  for (i = 0; i < 5; i++) {
    if (v[i]%2 == 0) {
      pares ++;
    }
  }
  return pares;
}

int eh_positivo (int v[]) {
  int positivos = 0,i;
  for (i = 0; i < 5; i++) {
    if (v[i] > 0) {
      positivos ++;
    }
  }
  return positivos;
}

int eh_negativo (int v[]) {
  int negativos = 0,i;
  for (i = 0; i < 5; i++) {
    if (v[i] < 0) {
      negativos ++;
    }
  }
  return negativos;
}

int main () {
  int v[5];
  preencher_vetor_teste (v);
  printf("%d valor(es) par(es)\n", eh_par (v));
  printf("%d valor(es) impar(es)\n", eh_impar (v));
  printf("%d valor(es) positivo(s)\n", eh_positivo (v));
  printf("%d valor(es) negativo(s)\n", eh_negativo (v));
  return 0;
}
