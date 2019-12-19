#include <stdio.h>
#include <stdlib.h>

int main () {
  double *vet;

  vet = malloc(sizeof(double));
  for (int i = 0; 1; i++) {
    vet = realloc(vet ,i * sizeof(double));
    printf("%d\n", i);
  }
  return 0;
}