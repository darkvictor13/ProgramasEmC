#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void lerVetArch(FILE *a, int *v, int *t) {
  for (;!feof(a) && ch != ;)
}

int load (char *fn, int ***p, int *x, int *y) {
  int **anda_y, *anda_x;
  FILE *a = fopen (fn, "r");
  if (!a) return 0;

  *p = malloc(MAX_LINHAS * sizeof(int*));
  **p = malloc (MAX_COLUNAS * sizeof(int));
  anda_y = *p;
  anda_x = **p;

  for (;!feof(a); anda_y++)
}