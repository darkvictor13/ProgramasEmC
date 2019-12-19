#include <stdio.h>
#include <stdlib.h>

typedef struct no s_no;

struct no {
  float dado;
  s_no *prox;
};

s_no * load (char *nome_arq) {
  s_no *temp, *h = NULL;
  FILE *arch = fopen(nome_arq, "r");
  if (!arch) return NULL;

  while (!feof(arch)) {
    temp = malloc(sizeof(s_no));
    fscanf(arch, "%f", &temp->dado);
    temp->prox = h;
    h = temp;
  }
  fclose(arch);
  return h;
}

void show(s_no *inicio) {
  s_no *p;

  for (p = inicio; p != NULL; p = p->prox) {
    printf("%f\n", p->dado);
  }
}

s_no * apagaPrimeiro(s_no *inicio) {
  s_no *aux;

  if(inicio == NULL) return NULL;
  
  aux = inicio;//salvo o endereco do q vou eliminar
  inicio = inicio->prox;
  free(aux);
  
  return inicio;
}

int main () {
  s_no *cabeca, *temp;
  cabeca = load("dados.txt");
  show(cabeca);
  cabeca = apagaPrimeiro(cabeca);
  return 0;
}