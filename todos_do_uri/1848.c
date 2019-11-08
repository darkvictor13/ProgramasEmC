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
  int i,soma;
  for (soma = 0; i < 3; i++) {
    if (*(v + i)) {
      soma += pow(2.0, (float)i );
    }
  }
  return soma;
} 

int main () {
	char str[7];
  int num_resposta,conta_gritos,binario[3];

  for (conta_gritos = 0; conta_gritos < 3;) {
    for (num_resposta = 0;!strcmp(str,"caw caw");) {
      convertePisacadaParaBinario(str,binario);
      num_resposta += converteBinarioParaDecimal(binario);
    }
    printf("%d\n",num_resposta);
    conta_gritos++;
  }
  return 0;
}