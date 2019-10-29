#include <stdio.h>

int main () {
  FILE *arquivo;

  arquivo = fopen("teste_arquivo.txt","w");
  fprintf(arquivo,"Ola mundo!");
  fclose (arquivo);
  return 0;
}