#include <stdio.h>

#define maxt 51

typedef struct {
  char modelo[maxt];
  char tipo[maxt];
  float preco;
}veiculo;

void leitura(veiculo vet[],int tam) {
  veiculo *p = (vet + tam);

  for (; vet < p; vet++) {
    scanf("%[^\n]%*c",vet->modelo);
    scanf("%[^\n]",vet->tipo);
    scanf("%f%*c",&vet->preco);
  }
}

void printaDados(veiculo vet[],int tam) {
  veiculo *p = (vet + tam);

  for (; vet < p; vet++) {
    printf("modelo = %s\n",vet->modelo);
    printf("tipo = %s\n",vet->tipo);
    printf("preco = %.3f\n",vet->preco);
  }
}

int main () {
  veiculo v[maxt];
  leitura(v,1);
  printaDados(v,1);
  return 0;
}