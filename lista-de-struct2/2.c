#include <stdio.h>
#include <stdlib.h>

#define MAXV 10
#define MAXA 1000

typedef struct {
  int *jogada;
  int tam;
  int num_de_acertos;
}apostador;

void load(char nome_do_arquivo[], apostador *p) {
  int i;
  char aux;
  FILE *arch = fopen(nome_do_arquivo, "r");

  if (!arch) {
    printf("nao consegui ler!\n");
    return;
  }

  for (; !feof(arch); p++) {

    p->jogada = malloc(sizeof(int) * MAXV);

    fscanf(arch,"%f%c",p->jogada[0],&aux);
    for (i = 1;aux == ' ' && (!feof(arch)); i++) {
      fscanf(arch,"%f%c",p->jogada[i],&aux);
    }

    realloc(p->jogada, sizeof(int) * i);
  }
}

int main () {
  int resultado[MAXV];
  apostador todas_as_apostas[MAXA];
  load("apostas.txt", todas_as_apostas);
  return 0;
}