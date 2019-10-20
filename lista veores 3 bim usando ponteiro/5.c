#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

int anteriorEProximoSaoPares(int *v,int t) {
  int count,*acaba = (v + t - 1);

  for (count = 0; v < acaba; v++) {
    if (!(*(v - 1) % 2) && !(*(v + 1) % 2)) {
      count ++;
    }
  }
  return count;
}

int main () {
  int vet[maxtam],tam,resp;

  preencheVet(vet,&tam);
  resp = anteriorEProximoSaoPares(vet,tam);
  printf("Em %d casos o proximo e o anterior sao pares\n",resp);
  return 0;
}