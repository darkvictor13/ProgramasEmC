#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

int maior_indice (int v[],int n) {
  int i,aux = v[0],marcado = 0;
  for (i = 1; i < n; i++) {
    if (aux < v[i]) {
      aux = v[i];
      marcado = i;
    }
  }
  return marcado;
}

int main () {
  int v[20],n;
  scanf("%d", &n);
  preenche_vet (v,n);
  printf("%d\n", maior_indice (v,n) );
  return 0;
}
