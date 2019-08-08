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

void salva_o_primeiro_vet (int v[],int n1,int n2) {
  int i,j;
  for (j = n2,i = 0; j < (n1 +n2); i++,j++) {
    v[j] = v[i];
  }
}

void adiciona_o_segundo_ao_primeiro (int v1[],int v2[],int tam1,int tam2) {
  int i;
  for (i = 0; i < tam2; i++) {
    v1[i] = v2[i];
  }
}

int main () {
  int v1[40],v2[20],tamanho1,tamanho2;
  scanf("%d", &tamanho1);
  preenche_vet (v1,tamanho1);
  scanf("%d", &tamanho2);
  preenche_vet (v2,tamanho2);
  salva_o_primeiro_vet (v1,tamanho1,tamanho2);
  adiciona_o_segundo_ao_primeiro (v1,v2,tamanho1,tamanho2);
  printf("--\n");
  print_vet (v1,(tamanho1+tamanho2));
  return 0;
}
