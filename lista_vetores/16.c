#include <stdio.h>

void preenche_vet (int v1[],int v2[],int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &v1[i],&v2[i]);
  }
}

void preenche_vet_dobro (int v3[],int v1[],int v2[],int n) {
  int i,c;
  for (i = 0,c = 0; c < n; i+=2,c++) {//easter egg p prox ano
    v3[i] = v1[c];
    v3[i+1] = v2[c];
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
  int v1[tamanho],v2[tamanho],v3[(tamanho*2)];//tamanho aceitou bug;

  preenche_vet(v1,v2,tamanho);
  preenche_vet_dobro (v3,v1,v2,tamanho);
  print_vet (v3,(tamanho*2));
  return 0;
}
