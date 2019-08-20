#include "bibliotecas.h"

void to_deixando_o_main_limpo_mesmo (int v1[],int v2[],int tam) {
  int aux = todos_os_num_aparece_no_vet (v1,v2,tam);
  if (aux == 1) {
    printf("iguais\n");
  }else {
    printf("nao sao iguais\n");
  }
}

int main () {
  int v1[20],v2[20],tamanho;
  scanf("%d", &tamanho);
  preenche_2vet_ao_mesmo_tempo (v1,v2,tamanho);
  to_deixando_o_main_limpo_mesmo (v1,v2,tamanho);
  return 0;
}
