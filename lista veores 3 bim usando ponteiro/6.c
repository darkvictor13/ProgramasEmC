#include <stdio.h>

#define maxtam 100

void preencheVet(int v[],int *t) {
  scanf("%d",t);

  for (int *final = (v + *t); v < final; v++) {
    scanf("%d",v);
  }
}

int indiceDoMaiorTermo(int *v,int t) {
  int *salva_inicio_vet = v;
  int *fim = (v + t);
  int *maior_endereco = v;

  for (; v < fim; v++) {
    if (*v > *maior_endereco) {
      maior_endereco = v;
    }
  }
  return (maior_endereco - salva_inicio_vet);
}

int main () {
  int vet[maxtam],tam,resp;

  preencheVet(vet,&tam);
  resp = indiceDoMaiorTermo(vet,tam);
  printf("o indice do maior termo eh = %d\n",resp);
  return 0;
}