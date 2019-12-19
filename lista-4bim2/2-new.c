#include <stdio.h>
#include <stdlib.h>

#define MAXV 11
#define MAXA 200

typedef struct {
  int *jogada;
  int tam;
  int num_de_acertos;
}apostador;

void load(char *fn, apostador *vet, int *t) {
  int i,j,fim = 1,temp[MAXV];
  char ch;
  FILE *arch = fopen(fn, "r");

  for (i = 0; fim; i++) {
    for (j = 0; ch != '\n'; j++) {
      fscanf(arch, "%d%c", temp[i], &ch);
      if (feof(arch)) {
        fim = 0;
        break;
      }
    }
    vet[i].tam = j;
    vet[i].jogada = malloc(j * sizeof(int));
    for (int a = 0; a < j; a++) {
      vet[i].jogada[a] = temp[a];
    }
  }
  *t = i;
  fclose(arch);
}

int main () {
  apostador v[100];
  int num_apostas;
  load("aposta.txt", v, &num_apostas);
}