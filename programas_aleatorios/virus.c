#include <stdio.h>
#include <stdlib.h>

int i;
char *str = "hacker ";

void main () {
  FILE *arch = fopen("perda-de-memoria.txt", "w");

  while (1) {
    for (i = 0; i < 20; i++) {
      fprintf(arch, str);
    }
    fprintf(arch, "\n");
  }
}