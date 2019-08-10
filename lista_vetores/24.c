#include <stdio.h>

void preenche_vet (int v1[],int v2[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d %d", &v1[i],&v2[i]);
  }
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
  preenche_vet (v1,v2,tamanho);
  to_deixando_o_main_limpo_mesmo (v1,v2,tamanho);
  return 0;
}
