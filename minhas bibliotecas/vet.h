//home/victor/github/ProgramasEmC1/minhas bibliotecas/vet.h
#ifnedf MYSTRING_H
#define MYSTRING_H

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void preenche_2vet_ao_mesmo_tempo (int v1[],int v2[],int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &v1[i],&v2[i]);
  }
}

void preenche_vet_completo (int v[],int *tamanho) {
  scanf("%d", tamanho);
  for (int i = 0; i < *tamanho; i++) {
    scanf("%d", &v[i]);
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

void printa_vet_inv (int v[],int n) {
  for (int i = n - 1; i >= 0; i--) {
    printf("%d\n", v[i]);
  }
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

int menor_indice (int v[],int n) {
  int i,marcado = 0;
  for (i = 1; i < n; i++) {
    if (v[marcado] > v[i]) {
      marcado = i;
    }
  }return marcado;
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

void vem_1_para_frente (int v[],int n) {
  for (int i = 0; i < n; i++) {
    v[i] = v[i+1];
  }
}

int soma_tudo_a_esquerda (int v[],int num_referencia) {
  int soma = 0,i;
  for (i = 0; i < num_referencia; i++) {
    soma += v[i];
  }
  return soma;
}


int soma_tudo_a_direita (int v[],int num_referencia,int t) {
  int soma = 0,i;
  for (i = (num_referencia + 1); i < t; i++) {
    soma += v[i];
  }
  return soma;
}

int num_nao_apareceu (int num,int tamanho,int v[]) {
  for (int i = 0; i < tamanho; i++) {
    if (v[i] == num) {
      return 0;
    }
  }
}

long long int soma_dos_produtos (int v1[],int v2[],int n) {
  int soma = 0;
  for (int i = 0; i < n; i++) {
    soma += (v1[i] * v2[i]);
  }
  return soma;
}

int esse_num_aparece_no_vet(int v[],int tam,int num){
  for (int i = 0; i < tam; i++) {
    if (v[i] == num) {
      return 1;
    }
  }
  return 0;
}

int todos_os_num_aparece_no_vet (int v1[],int v2[],int tam) {
  for (int i = 0; i < tam; i++) {
    if (esse_num_aparece_no_vet (v1,tam,v2[i]) == 0) {
      return 0;
    }
  }
  return 1;
}

int onde_comeca_a_subsequencia (int v1[],int tam1,int primeiro_num_v2) {
  for (int i = 0; i < tam1; i++) {
    if (v1[i] == primeiro_num_v2) {
      return i;
    }
  }
  return -1;//no caso a subsequencia nao existe
}

int subsequencia_eh_valida(int v1[],int v2[],int tam_menor,int inicio_subseq) {
  for (int i = 0,j = inicio_subseq; i < tam_menor; i++,j++) {//j percorre o maior
    if (v2[i] != v1[j]) {
      return 0;
    }
  }
  return 1;
}

#endif
