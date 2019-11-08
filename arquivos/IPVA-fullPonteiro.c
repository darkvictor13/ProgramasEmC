#include <stdio.h>
#define max 50

typedef struct{
  char modelo[max];
  char tipo[max];
  float preco;
}veiculo;

void lerVet (veiculo v[],FILE *arch,int *t) {
  veiculo inicio = v;
  for (; fscanf(arch,"%[^\n]%*c",v->modelo) != EOF; v++) {
    fscanf(arch,"%[^\n]",v->tipo);
    fscanf(arch,"%f",&v->preco);
  }
  *t = 
}

void printVet(veiculo v[],FILE *arch,int t) {
  veiculo *p = (v + t);
  for (;v < p; v++) {
    printf("%s",v->modelo);
    printf("%s",v->tipo);
    printf("%f",v->preco);
  }
}

int main () {
  return 0;
}
