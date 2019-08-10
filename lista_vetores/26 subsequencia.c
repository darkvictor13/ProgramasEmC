#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
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

void printando (int i) {
  if (i == 1) {
    printf("\nsim\n");
  } else {
    printf("\nnao\n");
  }
}

int main() {
  int v1[20],v2[20],tam1,tam2,inicio_subseq,aux;
  scanf("%d", &tam1);
  preenche_vet (v1,tam1);
  scanf("%d", &tam2);
  preenche_vet (v2,tam2);
  inicio_subseq = onde_comeca_a_subsequencia (v1,tam1,v2[0]);
  aux = subsequencia_eh_valida (v1,v2,tam2,inicio_subseq);
  printando (aux);
  return 0;
}
