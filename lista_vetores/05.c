#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void anterior_proximo_par (int v[],int n,int *count) {
  int i;
  for (i = 1; i < n -1; i++) {
    if (v[i-1]%2 == 0 && v[i+1]%2 == 0) {
      (*count) ++;
    }
  }
}

int main () {
  int v[10],tamanho,resposta = 0;
  scanf("%d", &tamanho);
  preenche_vet (v,tamanho);
  anterior_proximo_par (v,tamanho,&resposta);
  printf("%d\n", resposta);
  return 0;
}
