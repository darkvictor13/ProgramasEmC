#include <stdio.h>

void soma_das_idades (int *casos,int *soma) {
  int idade = 1;
  while (1) {
    scanf("%d", &idade);
    if (idade < 0) {
      break;
    }
    *soma += idade;
    *casos += 1;
  }
}

float media (int soma,int casos) {
  return ((float)soma/casos);
}

int main () {
  int casos = 0,soma = 0;float m;
  soma_das_idades (&casos,&soma);
  m = media(soma,casos);
  printf("%.2f\n", m);
  return 0;
}
