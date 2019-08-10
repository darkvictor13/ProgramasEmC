#include <stdio.h>

int vet_com_as_saidas (int v[]) {//da certo
  int i = 0;
  while (1) {
    scanf("%d", &v[i]);
    if (v[i] < 1) {
      v[i] = 0;
      break;
    }
    i++;
  }
  return i;//todas as entradas q vou fazer o meu vet
}

void maior_indice (int v[],int n,int *marcado) {
  int i,aux = 0;
  for (i = 1; i <= n; i++) {
    if (v[aux] < v[i]) {
      aux = i;
    }
  }
  *marcado = aux;//nao esta marcando o maior termo do vet
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
  }
}

void preenche_vet_em_sequencia (int v_resposta[],int max_q_o_vet_vai) {
  for (int i = 0; i < max_q_o_vet_vai; i++) {
    v_resposta[i] = (i+1);
  }
}

int main () {
  int v_resposta[100],v_entradas[25],tam_resp,tam_entrada,tam_max_da_resposta;
  tam_entrada = vet_com_as_saidas (v_entradas);
  //printf("tam do vet de entradas = %d\n", tam_entrada);
  maior_indice (v_entradas,tam_entrada,&tam_max_da_resposta);
  printf("tam max = %d\n", tam_max_da_resposta);
  preenche_vet_em_sequencia (v_resposta,tam_max_da_resposta);
  for (int i = tam_entrada,j = 0; i > 0; i--,j++) {
    print_vet (v_resposta,v_entradas[j]);
    printf("==\n");
  }
  return 0;
}
