#include <stdio.h>

int vet_original (int v[],int n) {
  int i,j,soma = 0;
  for (j = 0, i = 10; i <= (10 * n); j++,i *= 10) {
    printf("%d\n", v[j] = n%i - soma);
    soma += (n%i) / 10;
  }
  return j;
}

void vetor_resposta (int v[],int v_resp[],int tamanho_vet) {
  int i,aux;
  for (i = 0; i <= tamanho_vet; i++) {
    aux = v[i];
    if (aux == 9) {
      v[i] = 0;
      v[i+1] = 1;
    }else {
      v_resp[i] = aux + 1;
    }
  }
}

int vet_em_num_arrumando_o_9 (int v[],int count) {
  int i,j,resposta = 0;
  for (i = 0,j = 1; i <= count; i++,j *= 10) {

    resposta += (v[i] * j);
  }
  return resposta;
}

int main () {
  int v_num_original[10],v_resposta [10],num,tamanho_vet,super_next;
  scanf("%d", &num);
  tamanho_vet = vet_original (v_num_original,num);
  vetor_resposta (v_num_original,v_resposta,tamanho_vet);
  super_next = vet_em_num_arrumando_o_9 (v_resposta,tamanho_vet);
  printf("%d\n", super_next);
  return 0;
}
