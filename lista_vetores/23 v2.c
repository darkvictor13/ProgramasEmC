#include "bibliotecas.h"

int ponto_de_equilibrio (int v[],int t) {
  int i,diferenca_entre_direita_e_esquerda,compara,count_compara = 0;
  compara = soma_tudo_a_direita (v,0,t-1);
  for (i = 1; i < t; i++) {
    diferenca_entre_direita_e_esquerda = ((soma_tudo_a_direita (v,i,t))-(soma_tudo_a_esquerda(v,i)));
    vira_positivo (&diferenca_entre_direita_e_esquerda);
    if (diferenca_entre_direita_e_esquerda < compara) {
      compara = diferenca_entre_direita_e_esquerda;
      count_compara = i;
    }
  }
  return count_compara;
}

int main () {
  int v[20],tamanho,resp;
  while (1) {
    scanf("%d", &tamanho);
    if (tamanho == 0) {
      break;
    }
    preenche_vet (v,tamanho);
    resp = ponto_de_equilibrio (v,tamanho);
    printf("ponto de equilibrio = %d\n", resp);
    limpa_vet (v,20);
  }
  return 0;
}
