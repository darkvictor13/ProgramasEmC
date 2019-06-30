#include <stdio.h>

void preencher_vetor (int v[],int quantas_repeticoes) {
  int i,num;
  for (i = 0; i < quantas_repeticoes; i++) {
    scanf("%d", &num);
    v[i] = num;
  }
}

int impar (int n){
    if (n%2 != 0) {
      return 1;
    }
  return 0;
}

int par (int n) {
  if (n%2 == 0){
    return 1;
  }
  return 0;
}

int positivo (int n) {
  if (n > 0) {
    return 1;
  }
  return 0;
}

int negativo (int n) {
  if (n < 0) {
    return 1;
  }
  return 0;
}

int nulo (int n) {
  if (n == 0) {
    return 1;
  }
  return 0;
}

void resposta (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (impar(v[i])== 1 && positivo(v[i])== 1) {
      printf("ODD POSITIVE\n");
    }else if (impar(v[i])== 1 && negativo(v[i])== 1) {
      printf("ODD NEGATIVE\n");
    }else if (par(v[i])== 1 && positivo(v[i])== 1) {
      printf("EVEN POSITIVE\n");
    }else if (par(v[i]== 1) && negativo(v[i])== 1) {
      printf("EVEN NEGATIVE\n");
    }else if (nulo(v[i]== 1)){
      printf("NULL\n");
  }
}
}

int main () {
  int v[10000],n;
  scanf("%d", &n);
  preencher_vetor (v,n);
  resposta (v,n);
  return 0;
}
