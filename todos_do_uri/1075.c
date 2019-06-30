#include <stdio.h>

int resto_2 (int n,int v[]) {
  int i,tamanho_vetor;
  for (i = 2,tamanho_vetor = 0; i < 10000; i++) {
    if (i%n == 2) {
      v[tamanho_vetor] = i;
      tamanho_vetor++;
    }
  }
  return tamanho_vetor;
}

void print_vetor (int v[],int n) {
  int i = 0,aux = resto_2 (n,v)-1;
  for (; i <= aux; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int v[5000],divisor;
  scanf("%d", &divisor);
  print_vetor (v,divisor);
  return 0;
}
