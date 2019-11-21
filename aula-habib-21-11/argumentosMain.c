#include <stdio.h>

int main (int argc, char *argv[]) {
  int i;

  printf("voce entrou com %d argumentos!\n",argc);
  printf("argumentos :\n");
  for (i = 0; i < argc; i++) {
    printf("%s\n",argv[i]);
  }
  return 0;
}