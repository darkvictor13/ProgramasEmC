#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct{
  char modelo[MAX];
  char tipo[MAX];
  float preco;
}Veiculo;


int main(){
  Veiculo v1,*v2,vet1[MAX],*vet2;

  scanf("%[^\n]",v1.modelo);
  printf("[%s]\n",v1.modelo);
}