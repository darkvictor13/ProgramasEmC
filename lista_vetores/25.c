#include <stdio.h>

void preenche_vet (int v[],int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void print_vet (int v[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", v[i]);
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

void vet_resposta (int v1[],int v2[],int v3[],int tam1,int tam2,int *tam3) {
  int aux,i,j;
  for (i = 0,j = 0; i < tam1; i++) {
    aux = esse_num_aparece_no_vet (v2,tam2,v1[i]);
    if (aux == 0) {
      v3[j] = v1[i];
      j++;
    }
  }
  *tam3 = j;
}

int main () {
  int v1[20],v2[19],v3[20],tam1,tam2,tam3;
  scanf("%d", &tam1);
  preenche_vet (v1,tam1);
  scanf("%d", &tam2);
  preenche_vet (v2,tam2);
  vet_resposta (v1,v2,v3,tam1,tam2,&tam3);
  printf("Saida\n");
  print_vet (v3,tam3);
  return 0;
}
