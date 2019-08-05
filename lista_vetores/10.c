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

void elimina_maior (int v[],int vx[],int n,int marcado) {
  int i;
  for (i = marcado; i < n-1; i++) {
    v[i] = v[i+1];
  }
  for (i = 0; i < n-1; i++) {
    vx[i] = v[i];
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int main () {
  int tamanho,i_marcado;
  scanf("%d", &tamanho);
  int v[tamanho],v_resposta[tamanho-1];
  preenche_vet (v,tamanho);
  maior_indice (v,tamanho,&i_marcado);
  elimina_maior (v,v_resposta,tamanho,i_marcado);
  free (v[tamanho]);
  printf("--\n");
  print_vet (v_resposta,tamanho-1);
  return 0;
}
