#include <stdio.h>

int main () {
  FILE *arch;
  arch = fopen("arquivinhu.txt","w");
  fprintf(arch,"1234567890");
  fclose(arch);
  return 0;
}