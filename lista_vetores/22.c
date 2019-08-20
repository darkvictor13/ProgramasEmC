#include "bibliotecas.h"

int vet_com_as_saidas (int v[]) {
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

void preenche_vet_primos (int v_resposta[],int max_q_o_vet_vai) {
  int aux = 0;
  for (int i = 1,j = 0; j < max_q_o_vet_vai; i++) {
    aux = (eh_primo (i));
    if (aux == 1) {
      v_resposta[j] = i;
      j++;
    }
  }
}

int main () {
  int v_resposta[100],v_entradas[25],tam_resp,tam_entrada,tam_max_da_resposta;
  tam_entrada = vet_com_as_saidas (v_entradas);
  tam_max_da_resposta = maior_indice (v_entradas,tam_entrada);
  preenche_vet_primos (v_resposta,v_entradas[tam_max_da_resposta]);
  for (int i = 0; i < tam_entrada; i++) {
    print_vet (v_resposta,v_entradas[i]);
    printf("==\n");
  }
  return 0;
}
