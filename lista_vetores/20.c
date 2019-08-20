#include "bibliotecas.h"

void acha_o_tamanho_do_vet_primos (int v[],int tam_maior,int *tam_primos) {
  *tam_primos = 0;
  for (int i = 0; i < tam_maior; i++) {
    if (num_eh_primo (v[i])) {
      (*tam_primos)++;
    }
  }
}//achei uma ideia legalzinha mas poderia ter feito isso nas 2 outras func;

void preenche_vet_com_os_primos (int v_original[],int v_primos[],int tam_o) {
  for (int i = 0,j = 0; i < tam_o; i++) {
    if (num_eh_primo (v_original[i]) ) {
      v_primos[j] = v_original[i];
      j++;
    }
  }
}

void preenche_vet_com_os_nao_primos (int v_original[],int v_n[],int tam_o) {
  for (int i = 0,j = 0; i < tam_o; i++) {
    if (num_eh_primo (v_original[i]) == 0) {
      v_n[j] = v_original[i];
      j++;
    }
  }
}

int main () {
  int v_scaneado[20],v_primo[20],v_nao_eh[20],tam_primo,tam_nao_eh,tam_scaneado;
  scanf("%d", &tam_scaneado);
  preenche_vet (v_scaneado,tam_scaneado);
  acha_o_tamanho_do_vet_primos (v_scaneado,tam_scaneado,&tam_primo);
  tam_nao_eh = tam_scaneado - tam_primo;
  preenche_vet_com_os_primos (v_scaneado,v_primo,tam_scaneado);
  preenche_vet_com_os_nao_primos (v_scaneado,v_nao_eh,tam_scaneado);
  printf("primos\n");
  print_vet (v_primo,tam_primo);
  printf("\nnao primos\n");
  print_vet (v_nao_eh,tam_nao_eh);
}
