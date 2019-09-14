#include <stdio.h>

void padrao1 () {
  int i;
  for (i = 1; i < 40; i++) {
    printf("-");
  }
  printf("\n");
}

void padrao2 () {
  int i;
  for (i = 1; i < 40; i++) {
    if (i == 1 || i == 38) {
      printf("|");
    }
    printf(" ");
  }
  printf("\n");
}

int main () {
  int i;
  padrao1 ();
  for (i = 0;i < 5; i++) {
    padrao2 ();
  }
  padrao1 ();
  return 0;
}
