#include <stdio.h>
//home/victor/github/ProgramasEmC1/minhas bibliotecas/vet.h
void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

int retorna_maior (int a,int b) {
  if (a > b) {
    return a;
  }
  return b;
}

int retorna_menor (int a,int b) {
  if (a > b) {
    return b;
  }
  return a;
}

void preenche_vet_completo (int v[],int *tamanho) {
  scanf("%d", tamanho);
  for (int i = 0; i < *tamanho; i++) {
    scanf("%d", &v[i]);
  }
}

void troca (int *a,int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int soma_vet (int v[],int n) {
  int i,soma = 0;
  for (i = 0; i < n; i++) {
    soma += v[i];
  }
  return soma;
}

void inv_vet (int v[],int n) {
  int i,j;
  for (i = 0,j = n-1; i < j; i++,j--) {
    troca (&v[i],&v[j]);
  }
}

int maior_indice (int v[],int n) {
  int i,marcado = 0;
  for (i = 1; i < n; i++) {
    if (v[marcado] < v[i]) {
      marcado = i;
    }
  }
  return marcado;
}

int maior_indice_podendo_alterar_onde_inicia (int v[],int n,int aux) {
  int i,marcado;
  for (i = aux,marcado = aux; i < n; i++) {
    if (v[marcado] < v[i]) {
      marcado = i;
    }
  }
  return marcado;
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

int eh_palandrimo (int v[],int n) {
  int i,j;
  for (i = 0,j = n-1; i <= j; i++,j--) {
    if (v[i] != v[j]) {
      return 0;
    }
  }
  return 1;
}

void limpa_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    v[i] = 0;
  }
}


/*void print_vet_locais_de_memoria (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", &v[i]);
  }
}*/

void vem_1_para_frente (int v[],int n) {
  for (int i = 0; i < n; i++) {
    v[i] = v[i+1];
  }
}
