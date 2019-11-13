#include <stdio.h>
#include <string.h>
#include <math.h>

void convertePisacadaParaBinario (char str[],int vet[]) {
  for (; *str; str++) {
    if (*str == '*') {
      *vet = 1;
    }else {
      *vet = 0;
    }
    vet++;
  }
}

int converteBinarioParaDecimal (int v[]) {
  int soma,i,aux;
  int *inicio = v;
  int *fim = (v + 3);
  for (soma = 0; v < fim; v++) {
    if (*v) {
      for (i = 0,aux = 1; i < (v - inicio); i++) {
        aux *= 2;
    }
    soma += aux;
    }
  }
  return soma;
} 

int main () {
	char str[7];
  int num_resposta,conta_gritos,binario[3];

  for (conta_gritos = 0; conta_gritos < 3; ) {
    scanf("%[^\n]%*c",str);
    for (num_resposta = 0;(strcmp(str,"caw caw")); ) {
      convertePisacadaParaBinario(str,binario);
      num_resposta += converteBinarioParaDecimal(binario);
      scanf("%[^\n]%*c",str);
    }
    printf("%d\n",num_resposta);
    conta_gritos++;
  }
  return 0;
}