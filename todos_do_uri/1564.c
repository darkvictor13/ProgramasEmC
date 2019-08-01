#include <stdio.h>

int copas (int n) {
  if (n == 0) {
    return 0;
  }
  return 1;
}

void printando (int n) {
  int aux = copas(n);
  if (aux == 1) {
    printf("vai ter duas!\n");
  }
  if (aux == 0) {
    printf("vai ter copa!\n");
  }
}

int main () {
  int n,aux;
  while (1) {
    aux = scanf("%d", &n);
    if (aux == EOF) {
      break;
    }
    printando (n);
  }
}
