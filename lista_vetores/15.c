#include <stdio.h>

void preenche_vet (int v1[],int v2[],int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &v1[i],&v2[i]);
  }
}

void transcreve_vet (int v1[],int v2[],int vresposta[],int n) {
  int i,j;
  for (i = 0,j = n-1; i < j; i++,j--) {
    vresposta[i] = v1[i];
    vresposta[j] = v2[i];
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int tamanho;
  scanf("%d", &tamanho);
  int v1[tamanho],v2[tamanho],vresp[tamanho*2];
  preenche_vet (v1,v2,tamanho);
  transcreve_vet (v1,v2,vresp,tamanho*2);
  print_vet (vresp,tamanho*2);
  return 0;
}
