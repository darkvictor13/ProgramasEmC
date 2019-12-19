#include <stdio.h>
#include <stdlib.h>

typedef struct no s_no;

struct no {
  float dado;
  s_no *prox;
};

int main () {
  s_no *cabeca, *temp;
  cabeca = NULL;
  temp = malloc (sizeof(s_no));
  temp->prox = cabeca;
  cabeca = temp;
  temp = malloc (sizeof(s_no));
  temp->prox = cabeca;
  cabeca = temp;
}