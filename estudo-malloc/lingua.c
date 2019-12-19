#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *palavra;
  int count;
}palavra;

void load(char *fn, palavra *v, int *t) {
  char ch = 'a';
  int i, conta;
  FILE *arch = fopen(fn, "r");

  for (conta = 0; !feof(arch); conta++) {
    v[conta].palavra = malloc(50);
    while (ch != ' ') {
      fscanf("%c", &ch);
      if (isalpha(ch)) {
        v[conta].palavra[i] = ch;
        i++;
      }
    }
    v[conta].palavra = realloc(v[conta].palavra, i * sizeof(v[conta].palavra));
  }
  printf("%d\n", conta);
  *t = conta; 
  fclose(arch);
}

int main () {
  palavra *vet;
  int num_de_palavras;
  vet = malloc(sizeof(palavra) * 1000);
  load("dados.txt", vet, &num_de_palavras);
  vet = realloc(vet, num_de_palavras * sizeof(palavra));
  printf("[%s]\n[%s]", vet[0].palavra, vet[1].palavra);
  return 0;
}