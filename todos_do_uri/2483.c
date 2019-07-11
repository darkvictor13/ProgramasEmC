#include <stdio.h>

void coloca_aaa (int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a");
  }
}

int main () {
  int n;
  scanf("%d", &n);
  printf("Feliz nat");
  coloca_aaa (n);
  printf("l!\n");
  return 0;
}
