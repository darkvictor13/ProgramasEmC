#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
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

void menor_indice (int v[],int n,int *marcado) {
  int i,aux = v[0];
  for (i = 1; i < n; i++) {
    if (aux > v[i]) {
      aux = v[i];
      *marcado = i;
    }
  }
}

void vem_1_para_frente (int v[],int n) {
  for (int i = 0; i < n; i++) {
    v[i] = v[i+1];
  }
}

int main () {
  int tamanho,maior_i,menor_i;
  scanf("%d", &tamanho);
  int v[tamanho];
  preenche_vet (v,tamanho);
  maior_indice (v,tamanho,&maior_i);
  menor_indice (v,tamanho,&menor_i);
  troca (&v[0],&v[menor_i]);//ele nao consegue realizar essa troca
  troca (&v[(tamanho-1)],&v[maior_i]);
  vem_1_para_frente (v,tamanho);
  printf("--\n");
  print_vet (v,(tamanho-2));
  return 0;
}
