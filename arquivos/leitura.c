#include <stdio.h>

int main () {
  FILE *arquivo;
  char str[101];

  arquivo = fopen("teste_arquivo.txt","r");

  if (arquivo == NULL) {
    printf("Nao foi possivel abrir um arquivo.\n");
    getchar();
    return 0;
  }
  fscanf(arquivo,"%[^\n]",&str);
  puts(str);
  fclose(arquivo);
  return 0;
}