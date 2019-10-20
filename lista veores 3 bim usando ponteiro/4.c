#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

int oProxEhMaior(int *v,int t) {
  int count,*final = (v + t - 2);

  for (count = 0;v <= final; v++) {
    if (*v < *(v + 1)) {
      count ++;
    }
  }
  return count;
}

int main () {
  int vet[100],tam,resp;

  preencheVet(vet,&tam);
  resp = oProxEhMaior(vet,tam);
  printf("Em %d casos o proximo eh maior\n",resp);
  return 0;
}