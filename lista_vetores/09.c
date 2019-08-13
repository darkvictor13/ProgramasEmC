#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void troca_2em2 (int v[],int n) {
  int i;
  if (n%2 == 0) {
    for (i = 0; i < n; i+=2) {
      troca (&v[i],&v[i+1]);
    }
  }else {
    for (i = 0; i < n - 1; i+=2) {
      troca (&v[i],&v[i+1]);
    }
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int v[20],casos;
  scanf("%d", &casos);
  preenche_vet (v,casos);
  troca_2em2 (v,casos);
  print_vet (v,casos);
  return 0;
}
