#include "bibliotecas.h"

int soma_os_em_volta (int a,int b) {//a = (i-1)/b = (i+1)
  return a+b;
}

void compara (int v[],int t,int *marcado) {
  int i,aux,resposta;
  *marcado = 1;
  resposta = v[1]-(soma_os_em_volta (v[0],v[2]));

  for (i = 2; i < t-1; i++) {
    aux = v[i]-(soma_os_em_volta (v[i-1],v[i+1]));
    if (resposta > aux) {
      *marcado = i;
    }
  }
}

int main () {
  int v[40],tamanho,i_do_ponto_de_equilibrio;

  while (1) {
    preenche_vet_completo (v,&tamanho);
    if (tamanho < 1) {
      return 0;
    }
    compara (v,tamanho,&i_do_ponto_de_equilibrio);
    printf("ponto de equilibrio = %d\n", i_do_ponto_de_equilibrio);
    limpa_vet (v,40);
  }
  return 0;
}
