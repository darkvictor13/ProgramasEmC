#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void maior_indice (int v[],int n,int *marcado) {
  int i,aux = v[0];
  for (i = 1; i < n; i++) {
    if (aux < v[i]) {
      aux = v[i];
      *marcado = i;
    }
  }
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void troca_maior_com1 (int v[],int indice_do_maior) {
  troca (&v[0],&v[indice_do_maior]);
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int v[20],cas,ind_maior_num_vet;
  scanf("%d", &cas);
  preenche_vet (v,cas);
  maior_indice (v,cas,&ind_maior_num_vet);
  troca_maior_com1 (v,ind_maior_num_vet);
  print_vet (v,cas);
  return 0;
}
